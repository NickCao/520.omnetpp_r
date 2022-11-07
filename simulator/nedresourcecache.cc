//==========================================================================
// NEDRESOURCECACHE.CC -
//
//                     OMNeT++/OMNEST
//            Discrete System Simulation in C++
//
//==========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 2002-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include "nederror.h"
#include "nedexception.h"
#include "nedresourcecache.h"
#include "nedparser.h"
#include "nedxmlparser.h"
#include "neddtdvalidator.h"
#include "nedsyntaxvalidator.h"
#include "nedcrossvalidator.h"
#include "fileutil.h"
#include "stringutil.h"
#include "fileglobber.h"
#include "patternmatcher.h"

USING_NAMESPACE

//TODO collect errors in a NEDErrorStore?

NEDResourceCache::NEDResourceCache()
{
}

NEDResourceCache::~NEDResourceCache()
{
    for (NEDFileMap::iterator i = files.begin(); i!=files.end(); ++i)
        delete i->second;
    for (NEDTypeInfoMap::iterator i = nedTypes.begin(); i!=nedTypes.end(); ++i)
        delete i->second;
}

void NEDResourceCache::registerBuiltinDeclarations()
{
    // NED code to define built-in types
    const char *nedcode = NEDParser::getBuiltInDeclarations();

    NEDErrorStore errors;
    NEDParser parser(&errors);
    NEDElement *tree = parser.parseNEDText(nedcode, "built-in-declarations");
    if (errors.containsError())
    {
        delete tree;
        throw NEDException("error during parsing of internal NED declarations");
    }

    //TODO check errors, run validation perhaps

    // note: file must be called package.ned so that @namespace("") takes effect
    addFile("/[built-in-declarations]/package.ned", tree);
}


int NEDResourceCache::loadNedSourceFolder(const char *foldername)
{
    try
    {
        std::string canonicalFolderName = tidyFilename(toAbsolutePath(foldername).c_str(), true);
        std::string rootPackageName = determineRootPackageName(foldername);
        folderPackages[canonicalFolderName] = rootPackageName;
        return doLoadNedSourceFolder(foldername, rootPackageName.c_str());
    }
    catch (std::exception& e)
    {
        throw NEDException("Error loading NED sources from `%s': %s", foldername, e.what());
    }
}

int NEDResourceCache::doLoadNedSourceFolder(const char *foldername, const char *expectedPackage)
{
    PushDir pushDir(foldername);
    int count = 0;

    FileGlobber globber("*");
    const char *filename;
    while ((filename=globber.getNext())!=NULL)
    {
        if (filename[0] == '.')
        {
            continue;  // ignore ".", "..", and dotfiles
        }
        if (isDirectory(filename))
        {
            count += doLoadNedSourceFolder(filename, expectedPackage==NULL ? NULL : opp_join(".", expectedPackage, filename).c_str());
        }
        else if (opp_stringendswith(filename, ".ned"))
        {
            doLoadNedFileOrText(filename, NULL, expectedPackage, false);
            count++;
        }
    }
    return count;
}

void NEDResourceCache::doLoadNedFileOrText(const char *nedfname, const char *nedtext, const char *expectedPackage, bool isXML)
{
    Assert(nedfname);
    if (getFile(nedfname))
        return;  // already loaded

    // parse file
    std::string nedfname2 = nedtext ? nedfname : tidyFilename(toAbsolutePath(nedfname).c_str()); // so that NedFileElement stores absolute file name
    NEDElement *tree = parseAndValidateNedFileOrText(nedfname2.c_str(), nedtext, isXML);
    Assert(tree);

    // check that declared package matches expected package
    PackageElement *packageDecl = (PackageElement *)tree->getFirstChildWithTag(NED_PACKAGE);
    std::string declaredPackage = packageDecl ? packageDecl->getName() : "";
    if (expectedPackage!=NULL && declaredPackage != std::string(expectedPackage))
        throw NEDException("NED error in file `%s': declared package `%s' does not match expected package `%s'",
                           nedfname, declaredPackage.c_str(), expectedPackage);

    // register it
    try
    {
        addFile(nedfname2.c_str(), tree);
    }
    catch (NEDException& e)
    {
        throw NEDException("NED error: %s", e.what());
    }
}

NEDElement *NEDResourceCache::parseAndValidateNedFileOrText(const char *fname, const char *nedtext, bool isXML)
{
    // load file
    NEDElement *tree = 0;
    NEDErrorStore errors;
    errors.setPrintToStderr(true); //XXX
    if (isXML)
    {
        if (nedtext)
            throw NEDException("loadNedText(): parsing XML from string not supported");
        tree = parseXML(fname, &errors);
    }
    else
    {
        NEDParser parser(&errors);
        parser.setParseExpressions(true);
        parser.setStoreSource(false);
        if (nedtext)
            tree = parser.parseNEDText(nedtext, fname);
        else
            tree = parser.parseNEDFile(fname);
    }
    if (errors.containsError())
    {
        delete tree;
        throw NEDException("errors while loading or parsing file `%s'", fname);  //FIXME these errors print relative path????
    }

    // DTD validation and additional syntax validation
    NEDDTDValidator dtdvalidator(&errors);
    dtdvalidator.validate(tree);
    if (errors.containsError())
    {
        delete tree;
        throw NEDException("errors during DTD validation of file `%s'", fname);
    }

    NEDSyntaxValidator syntaxvalidator(true, &errors);
    syntaxvalidator.validate(tree);
    if (errors.containsError())
    {
        delete tree;
        throw NEDException("errors during validation of file `%s'", fname);
    }
    return tree;
}

void NEDResourceCache::loadNedFile(const char *nedfname, const char *expectedPackage, bool isXML)
{
    if (!nedfname)
        throw NEDException("loadNedFile(): file name is NULL");

    doLoadNedFileOrText(nedfname, NULL, expectedPackage, isXML);
    registerPendingNedTypes();
}

void NEDResourceCache::loadNedText(const char *name, const char *nedtext, const char *expectedPackage, bool isXML)
{
    if (!name)
        throw NEDException("loadNedText(): name is NULL");
    if (getFile(name))
        throw NEDException("loadNedText(): name `%s' already used", name);

    doLoadNedFileOrText(name, nedtext, expectedPackage, isXML);
    registerPendingNedTypes();
}

bool NEDResourceCache::addFile(const char *fname, NEDElement *node)
{
    std::string key = tidyFilename(toAbsolutePath(fname).c_str());
    NEDFileMap::iterator it = files.find(key);
    if (it!=files.end())
        return false; // already added

    files[key] = node;

    PackageElement *packageDecl = (PackageElement *) node->getFirstChildWithTag(NED_PACKAGE);
    std::string packagePrefix = packageDecl ? packageDecl->getName() : "";
    if (!packagePrefix.empty())
        packagePrefix += ".";

    collectNedTypes(node, packagePrefix);
    return true;
}

void NEDResourceCache::collectNedTypes(NEDElement *node, const std::string& namespacePrefix)
{
    for (NEDElement *child=node->getFirstChild(); child; child=child->getNextSibling())
    {
        int tag = child->getTagCode();
        if (tag==NED_CHANNEL || tag==NED_CHANNEL_INTERFACE || tag==NED_SIMPLE_MODULE ||
            tag==NED_COMPOUND_MODULE || tag==NED_MODULE_INTERFACE ||
            tag==NED_ENUM || tag==NED_STRUCT || tag==NED_CLASS || tag==NED_MESSAGE)
        {
            std::string qname = namespacePrefix + child->getAttribute("name");
            if (lookup(qname.c_str()))
                throw NEDException("redeclaration of %s %s", child->getTagName(), qname.c_str()); //XXX maybe just NEDError?

            collectNedType(qname.c_str(), child);

            NEDElement *types = child->getFirstChildWithTag(NED_TYPES);
            if (types)
                collectNedTypes(types, qname+".");
        }
    }
}

void NEDResourceCache::collectNedType(const char *qname, NEDElement *node)
{
    // we'll process it later, from doneLoadingNedFiles()
    pendingList.push_back(PendingNedType(qname,node));
}

bool NEDResourceCache::areDependenciesResolved(const char *qname, NEDElement *node)
{
    // check that all base types are resolved
    NEDLookupContext context = getParentContextOf(qname, node);
    for (NEDElement *child=node->getFirstChild(); child; child=child->getNextSibling())
    {
        if (child->getTagCode()!=NED_EXTENDS && child->getTagCode()!=NED_INTERFACE_NAME)
            continue;

        const char *name = child->getAttribute("name");
        std::string qname = resolveNedType(context, name);
        if (qname.empty())
            return false;
    }
    return true;
}

void NEDResourceCache::doneLoadingNedFiles()
{
    // register NED types from all the files we've loaded
    registerPendingNedTypes();

    // if something was missing --> error
    if (!pendingList.empty())
    {
        std::string unresolvedNames;
        for (int i=0; i<(int)pendingList.size(); i++)
            unresolvedNames += std::string(i==0 ? "" : ", ") + pendingList[i].qname;
        if (pendingList.size()==1)
            throw NEDException("NED type `%s' could not be fully resolved, due to a missing base type or interface", unresolvedNames.c_str());
        else
            throw NEDException("The following NED types could not be fully resolved, due to a missing base type or interface: %s", unresolvedNames.c_str());
    }
}

void NEDResourceCache::registerPendingNedTypes()
{
    bool again = true;
    while (again)
    {
        again = false;
        for (int i=0; i<(int)pendingList.size(); i++)
        {
            PendingNedType type = pendingList[i];
            if (areDependenciesResolved(type.qname.c_str(), type.node))
            {
                registerNedType(type.qname.c_str(), type.node);
                pendingList.erase(pendingList.begin() + i--);
                again = true;
            }
        }
    }
}

void NEDResourceCache::registerNedType(const char *qname, NEDElement *node)
{
    NEDTypeInfo *decl = new NEDTypeInfo(this, qname, node);
    nedTypes[qname] = decl;
    nedTypeNames.clear();  // invalidate
}

NEDTypeInfo *NEDResourceCache::lookup(const char *qname) const
{
    // hash table lookup
    NEDTypeInfoMap::const_iterator i = nedTypes.find(qname);
    return i==nedTypes.end() ? NULL : i->second;
}

NEDTypeInfo *NEDResourceCache::getDecl(const char *qname) const
{
    NEDTypeInfo *decl = lookup(qname);
    if (!decl)
        throw NEDException("NED declaration '%s' not found", qname);
    return decl;
}

NEDElement *NEDResourceCache::getFile(const char *fname) const
{
    // hash table lookup
    std::string key = tidyFilename(toAbsolutePath(fname).c_str());
    NEDFileMap::const_iterator i = files.find(key);
    return i==files.end() ? NULL : i->second;
}

NedFileElement *NEDResourceCache::getParentPackageNedFile(NedFileElement *nedfile) const
{
    std::string nedfilename = tidyFilename(toAbsolutePath(nedfile->getFilename()).c_str(), true);
    std::string dir, fname;
    splitFileName(nedfilename.c_str(), dir, fname);
    dir = tidyFilename(dir.c_str(), true);

    std::string topDir = getNedSourceFolderForFolder(dir.c_str());
    if (topDir.empty())
        return NULL;

    if (fname != "package.ned")
    {
        // get package.ned from same package
        NEDElement *e = getFile(tidyFilename(concatDirAndFile(dir.c_str(), "package.ned").c_str(), true).c_str());
        if (e)
            return (NedFileElement *)e;
    }

    // walk up in search for a package.ned
    while (dir != topDir)
    {
        //printf("%s   ~   %s\n", dir.c_str(), topDir.c_str());

        // chop last segment
        std::string parentDir, dummy;
        splitFileName(dir.c_str(), parentDir, dummy);
        Assert(dir != parentDir); // we should exit via reaching the NED source folder
        dir = tidyFilename(parentDir.c_str(), true);

        // return package.ned from this dir, if exists
        NEDElement *e = getFile(tidyFilename(concatDirAndFile(dir.c_str(), "package.ned").c_str(), true).c_str());
        if (e)
            return (NedFileElement *)e;
    }
    return NULL;
}

std::string NEDResourceCache::determineRootPackageName(const char *nedSourceFolderName)
{
    // determine if a package.ned file exists
    std::string packageNedFilename = std::string(nedSourceFolderName) + "/package.ned";
    FILE *f = fopen(packageNedFilename.c_str(), "r");
    if (!f)
        return "";
    fclose(f);

    // read package declaration from it
    NEDElement *tree = parseAndValidateNedFileOrText(packageNedFilename.c_str(), NULL, false);
    Assert(tree);
    PackageElement *packageDecl = (PackageElement *)tree->getFirstChildWithTag(NED_PACKAGE);
    std::string result = packageDecl ? packageDecl->getName() : "";
    delete tree;
    return result;
}

static bool isPathPrefixOf(const char *prefix, const char *path)
{
    // note: both "prefix" and "path" must be canonical absolute paths for this to work
    int pathlen = strlen(path);
    int prefixlen = strlen(prefix);
    Assert(prefix[prefixlen-1]!='/' && path[pathlen-1]!='/');
    if (pathlen == prefixlen)
        return strcmp(path, prefix)==0;
    else if (pathlen < prefixlen)
        return false;  // too short
    else if (strncmp(path, prefix, strlen(prefix))!=0)
        return false;  // differ
    else
        return path[prefixlen]=='/';  // e.g. "/tmp/foo" is not prefix of "/tmp/foolish"
}

std::string NEDResourceCache::getNedSourceFolderForFolder(const char *folder) const
{
    // find NED source folder which is a prefix of folder.
    // note: this is unambiguous because nested NED source folders are not allowed
    std::string folderName = tidyFilename(toAbsolutePath(folder).c_str(), true);
    for (StringMap::const_iterator it = folderPackages.begin(); it!=folderPackages.end(); ++it)
        if (isPathPrefixOf(it->first.c_str(), folderName.c_str()))
            return it->first;
    return "";
}

std::string NEDResourceCache::getNedPackageForFolder(const char *folder) const
{
    std::string sourceFolder = getNedSourceFolderForFolder(folder);
    if (sourceFolder.empty())
        return "";

    std::string folderName = tidyFilename(toAbsolutePath(folder).c_str(), true);
    std::string suffix = folderName.substr(sourceFolder.size());
    if (suffix[0] == '/') suffix = suffix.substr(1);
    std::string subpackage = opp_replacesubstring(suffix.c_str(), "/", ".", true);
    return opp_join(".", const_cast<StringMap&>(folderPackages)[sourceFolder].c_str(), subpackage.c_str());
}

NEDLookupContext NEDResourceCache::getParentContextOf(const char *qname, NEDElement *node)
{
    NEDElement *contextnode = node->getParent();
    if (contextnode->getTagCode()==NED_TYPES)
        contextnode = contextnode->getParent();
    const char *lastdot = strrchr(qname, '.');
    std::string contextqname = !lastdot ? "" : std::string(qname, lastdot-qname);
    return NEDLookupContext(contextnode, contextqname.c_str());
}

std::string NEDResourceCache::resolveNedType(const NEDLookupContext& context, const char *nedtypename, INEDTypeNames *qnames)
{
    // note: this method is to be kept consistent with NEDResources.lookupNedType() in the Java code
    // note2: partially qualified names are not supported: name must be either simplename or fully qualified
    if (!strchr(nedtypename, '.'))
    {
        // no dot: name is an unqualified name (simple name); so, it can be:
        // (a) inner type, (b) an exactly imported type, (c) from the same package, (d) a wildcard imported type

        // inner type?
        if (context.element->getTagCode() == NED_COMPOUND_MODULE) {
            std::string qname = context.qname;
            NEDElement *topLevelCompoundModule = context.element->getParent()->getParentWithTag(NED_COMPOUND_MODULE);
            if (topLevelCompoundModule) {
                int index = qname.rfind('.');
                Assert(index != -1);
                qname.replace(index, qname.length() - index, "");
            }
            qname = qname + "." + nedtypename;
            if (qnames->contains(qname.c_str()))
                return qname;
        }

        NedFileElement *nedfileNode = dynamic_cast<NedFileElement *>(context.element->getParentWithTag(NED_NED_FILE));

        // collect imports, for convenience
        std::vector<const char *> imports;
        for (ImportElement *import = nedfileNode->getFirstImportChild(); import; import = import->getNextImportSibling())
            imports.push_back(import->getImportSpec());

        // exactly imported type?
        // try a shortcut first: if the import doesn't contain wildcards
        std::string dot_nedtypename = std::string(".")+nedtypename;
        for (int i=0; i<(int)imports.size(); i++)
            if (qnames->contains(imports[i]) && (opp_stringendswith(imports[i], dot_nedtypename.c_str()) || strcmp(imports[i], nedtypename)==0))
                return imports[i];

        // from the same package?
        PackageElement *packageNode = nedfileNode->getFirstPackageChild();
        const char *packageName = packageNode ? packageNode->getName() : "";
        std::string qname = opp_isempty(packageName) ? nedtypename : std::string(packageName) + "." + nedtypename;
        if (qnames->contains(qname.c_str()))
            return qname;

        // try harder, using wildcards
        for (int i=0; i<(int)imports.size(); i++) {
            if (PatternMatcher::containsWildcards(imports[i])) {
                PatternMatcher importpattern(imports[i], true, true, true);
                for (int j=0; j<qnames->size(); j++) {
                    const char *qname = qnames->get(j);
                    if ((opp_stringendswith(qname, dot_nedtypename.c_str()) || strcmp(qname, nedtypename)==0))
                        if (importpattern.matches(qname))
                            return qname;
                }
            }
        }
    }
    else {
        // fully qualified name?
        if (qnames->contains(nedtypename))
            return nedtypename;
    }

    return "";
}

const std::vector<std::string>& NEDResourceCache::getTypeNames() const
{
    if (nedTypeNames.empty() && !nedTypes.empty())
    {
        // fill in nedTypeNames vector
        for (NEDTypeInfoMap::const_iterator i=nedTypes.begin(); i!=nedTypes.end(); ++i)
            nedTypeNames.push_back(i->first);
    }
    return nedTypeNames;
}


