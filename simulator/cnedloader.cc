//==========================================================================
// CNEDLOADER.CC -
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

#include "cnedloader.h"
#include "nedelements.h"
#include "nederror.h"

#include "cproperty.h"
#include "cproperties.h"
#include "ccomponenttype.h"
#include "cexception.h"
#include "cenvir.h"
#include "cexpressionbuilder.h"
#include "cpar.h"
#include "clongparimpl.h"
#include "cdoubleparimpl.h"
#include "globals.h"
#include "cdynamicmoduletype.h"
#include "cdynamicchanneltype.h"
#include "cdisplaystring.h"

#include "stringutil.h"
#include "fileutil.h"

USING_NAMESPACE

cNEDLoader *cNEDLoader::inst;

cNEDLoader *cNEDLoader::getInstance()
{
    if (!inst) {
        inst = new cNEDLoader();
        inst->registerBuiltinDeclarations();
    }
    return inst;
}

void cNEDLoader::clear()
{
    delete inst;
    inst = NULL;
}

void cNEDLoader::registerNedType(const char *qname, NEDElement *node)
{
    // wrap, and add to the table (Note: we cannot reuse base class impl, because it creates a NEDTypeInfo)
    cNEDDeclaration *decl = new cNEDDeclaration(this, qname, node);
    nedTypes[qname] = decl;

    // if module or channel, register corresponding object which can be used to instantiate it
    cComponentType *type = NULL;
    if (node->getTagCode()==NED_SIMPLE_MODULE || node->getTagCode()==NED_COMPOUND_MODULE)
        type = new cDynamicModuleType(qname);
    else if (node->getTagCode()==NED_CHANNEL)
        type = new cDynamicChannelType(qname);
    if (type)
        componentTypes.getInstance()->add(type);
}

cNEDDeclaration *cNEDLoader::getDecl(const char *qname) const
{
    cNEDDeclaration *decl = dynamic_cast<cNEDDeclaration *>(NEDResourceCache::getDecl(qname));
    ASSERT(decl);
    return decl;
}

