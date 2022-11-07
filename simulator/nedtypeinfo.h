//==========================================================================
// NEDTYPEINFO.H -
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


#ifndef __NEDTYPEINFO_H
#define __NEDTYPEINFO_H

#include <map>
#include <vector>
#include <string>
#include "nedelements.h"
#include "commonutil.h"

NAMESPACE_BEGIN

class NEDResourceCache;

/**
 * Wraps a NEDElement tree of a NED declaration (module, channel, module
 * interface or channel interface), or declaration in a msg file (enum,
 * class, struct). May be extended by subclassing.
 *
 * Represents NED declarations of modules, module interfaces,
 * channels and channel interfaces. All instances are created and managed
 * by NEDResourceCache.
 *
 * @ingroup NEDResources
 */
class NEDXML_API NEDTypeInfo
{
  public:
    enum Type {SIMPLE_MODULE, COMPOUND_MODULE, MODULEINTERFACE, CHANNEL, CHANNELINTERFACE};

  protected:
    // the resolver this type is in
    NEDResourceCache *resolver;

    Type type;
    std::string qualifiedName;
    NEDElement *tree; // points into resolver

    // tree with inheritance flattened out.
    // may be NULL (-->not initialized), or ==tree (when there's no super types);
    // otherwise it's a constructed tree that gets disposed of in the destructor
    mutable NEDElement *flattenedTree;

    typedef std::vector<std::string> StringVector;
    typedef std::map<std::string,int> StringToIntMap;

    // inheritance. Vectors contain fully qualifies names, and include
    // indirect base types/interfaces as well (transitive closure).
    StringVector extendsnames;
    StringVector interfacenames;

    // simple module/channel C++ class to instantiate
    std::string implClassName;

  protected:
    NEDElement *buildFlattenedTree() const; //XXX mostly unused
    void mergeNEDType(NEDElement *basetree, const NEDElement *tree) const;
    void mergeProperties(NEDElement *basetree, const NEDElement *tree) const;
    void mergeProperty(PropertyElement *baseprop, const PropertyElement *prop) const;
    void mergePropertyKey(PropertyKeyElement *basekey, const PropertyKeyElement *key) const;

    NEDElement *getSubmoduleElement(const char *submoduleName) const;
    NEDElement *getConnectionElement(long id) const;

    void checkComplianceToInterface(NEDTypeInfo *interfaceDecl);

  public:
    /** Constructor. It expects fully qualified name */
    NEDTypeInfo(NEDResourceCache *resolver, const char *qname, NEDElement *tree);

    /** Destructor */
    virtual ~NEDTypeInfo();

    /** Returns the simple name of the NED type */
    virtual const char *getName() const;

    /** Returns the fully qualified name of the NED type */
    virtual const char *getFullName() const;

    /** Returns the raw NEDElement tree representing the component */
    virtual NEDElement *getTree() const;

    /** Returns the NEDElement tree where super types have been flattened */
    virtual NEDElement *getFlattenedTree() const; //XXX this is a BAD idea, get rid of it!

    /** The NED type resolver this type is registered in */
    NEDResourceCache *getResolver() const  {return resolver;}

    /**
     * Returns the type of this declaration: simple module, compound module,
     * channel, etc.
     */
    virtual Type getType() const {return type;}

    /**
     * Returns the package name (from the package declaration of the containing
     * NED file
     */
    virtual std::string getPackage() const;

    /**
     * Returns a one-line summary (base class, implemented interfaces, etc)
     */
    virtual std::string info() const;

    /**
     * Returns the NED declaration.
     */
    virtual std::string nedSource() const;

    /**
     * Returns the number of "extends" names. This includes indirect
     * base types as well (i.e. base types of base types, etc).
     */
    virtual int numExtendsNames() const  {return extendsnames.size();}

    /**
     * Returns the name of the kth "extends" name (k=0..numExtendsNames()-1),
     * resolved to fully qualified name.
     */
    virtual const char *extendsName(int k) const;

    /**
     * Returns the number of interfaces. This includes indirectly implemented
     * interfaces as well. (That is, the list contains interfaces implemented
     * by this type and all its base types, plus base types of all those
     * interfaces).
     */
    virtual int numInterfaceNames() const  {return interfacenames.size();}

    /**
     * Returns the name of the kth interface (k=0..numInterfaceNames()-1),
     * resolved to fully qualified name.
     */
    virtual const char *interfaceName(int k) const;

    /**
     * Returns true if this NED type extends/"is like" the given module interface
     * or channel interface
     */
    virtual bool supportsInterface(const char *qname);

    /**
     * Returns true if this NED type has a local (non-inherited)
     * \@network (or \@network(true)) property.
     */
    virtual bool isNetwork();

    /**
     * For simple modules and channels, it returns the name of the C++ class that
     * has to be instantiated; otherwise it returns NULL.
     */
    virtual const char *implementationClassName() const;

    /**
     * Find a property with the given name in the type's NED file, then in the
     * package.ned file of the NED file, then in parent package.ned files up
     * to the root (the NED source folder this NED file is in). Returns
     * the simple value of the property (1st value of default key), or
     * empty string if not found.
     */
    virtual std::string getPackageProperty(const char *name) const;

    /** The C++ namespace for this NED type; implemented as getPackageProperty("namespace"). */
    virtual std::string getCxxNamespace() const;

    /** Returns the first "extends" clause, or NULL */
    virtual NEDTypeInfo *getSuperDecl() const;

    /** @name Convenience method to query the tree */
    //@{
    ParametersElement *getParametersElement() const;
    GatesElement *getGatesElement() const;
    SubmodulesElement *getSubmodulesElement() const;
    ConnectionsElement *getConnectionsElement() const;

    /** Searches local type; NULL if not found */
    ParamElement *findLocalParamDecl(const char *name) const;

    /** Searches local type and "extends" types; NULL if not found */
    ParamElement *findParamDecl(const char *name) const;

    /** Searches local type; NULL if not found */
    GateElement *findLocalGateDecl(const char *name) const;

    /** Searches local type and "extends" types; NULL if not found */
    GateElement *findGateDecl(const char *name) const;
    //@}
};

NAMESPACE_END


#endif

