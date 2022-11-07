//=========================================================================
//  COWNEDOBJECT.CC - part of
//
//                  OMNeT++/OMNEST
//           Discrete System Simulation in C++
//
//  Author: Andras Varga
//
//=========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#include <stdio.h>           // sprintf
#include <string.h>          // strcpy, strlen etc.
#include "cownedobject.h"
#include "csimulation.h"
#include "cenvir.h"
#include "globals.h"
#include "cexception.h"
#include "simutil.h"
#include "cdefaultlist.h"
#include "cclassdescriptor.h"

#ifdef WITH_PARSIM
#include "ccommbuffer.h"
#endif

NAMESPACE_BEGIN

using std::ostream;

bool cStaticFlag::staticflag;
bool cStaticFlag::exitingflag;

Register_Class(cOwnedObject)


#ifdef DEVELOPER_DEBUG
#include <set>

std::set<cOwnedObject*> objectlist;
void printAllObjects()
{
    for (std::set<cOwnedObject*>::iterator it = objectlist.begin(); it != objectlist.end(); ++it)
    {
        printf(" %p (%s)%s\n", (*it), (*it)->getClassName(), (*it)->getName());
    }
}
#endif


// static class members
cDefaultList *cOwnedObject::defaultowner = &defaultList;
long cOwnedObject::total_objs = 0;
long cOwnedObject::live_objs = 0;

cDefaultList defaultList;


cOwnedObject::cOwnedObject()
{
    //TODO: in DEBUG mode, assert that this is not a static member / global variable! (using cStaticFlag)
    defaultowner->doInsert(this);

    // statistics
    total_objs++;
    live_objs++;
#ifdef DEVELOPER_DEBUG
    objectlist.insert(this);
#endif
}

cOwnedObject::cOwnedObject(const char *name, bool namepooling) : cNamedObject(name, namepooling)
{
    defaultowner->doInsert(this);

    // statistics
    total_objs++;
    live_objs++;
#ifdef DEVELOPER_DEBUG
    objectlist.insert(this);
#endif
}

cOwnedObject::cOwnedObject(const cOwnedObject& obj)
{
    setName(obj.getName());
    defaultowner->doInsert(this);
    operator=(obj);

    // statistics
    total_objs++;
    live_objs++;
#ifdef DEVELOPER_DEBUG
    objectlist.insert(this);
#endif
}

cOwnedObject::~cOwnedObject()
{
#ifdef DEVELOPER_DEBUG
    objectlist.erase(this);
#endif

    if (ownerp)
        ownerp->ownedObjectDeleted(this);

    // statistics
    live_objs--;
}

void cOwnedObject::removeFromOwnershipTree()
{
    // set ownership of this object to null
    if (ownerp)
        ownerp->yieldOwnership(this, NULL);
}

void cOwnedObject::setDefaultOwner(cDefaultList *list)
{
    ASSERT(list!=NULL);
    defaultowner = list;
}

cDefaultList *cOwnedObject::getDefaultOwner()
{
    return defaultowner;
}

cOwnedObject& cOwnedObject::operator=(const cOwnedObject& obj)
{
    // Not too much to do:
    // - ownership not affected
    // - name string is NOT copied from other object
    // - flags are taken over, except for FL_NAMEPOOLING which is preserved
    unsigned short namePooling = flags & FL_NAMEPOOLING;
    flags = (obj.flags & ~FL_NAMEPOOLING) | namePooling;
    return *this;
}

void cOwnedObject::parsimPack(cCommBuffer *buffer)
{
#ifndef WITH_PARSIM
    throw cRuntimeError(this,eNOPARSIM);
#else
    cNamedObject::parsimPack(buffer);
#endif
}

void cOwnedObject::parsimUnpack(cCommBuffer *buffer)
{
#ifndef WITH_PARSIM
    throw cRuntimeError(this,eNOPARSIM);
#else
    cNamedObject::parsimUnpack(buffer);
#endif
}

//-----

cNoncopyableOwnedObject *cNoncopyableOwnedObject::dup() const
{
    throw cRuntimeError(this, "dup(): %s subclasses from cNoncopyableOwnedObject, "
                              "and does not support dup()", getClassName());
}

void cNoncopyableOwnedObject::parsimPack(cCommBuffer *buffer)
{
    throw cRuntimeError(this, "parsimPack(): %s subclasses from cNoncopyableOwnedObject, and "
                              "does not support pack/unpack operations", getClassName());
}

void cNoncopyableOwnedObject::parsimUnpack(cCommBuffer *buffer)
{
    throw cRuntimeError(this, "parsimUnpack(): %s subclasses from cNoncopyableOwnedObject, and "
                              "does not support pack/unpack operations", getClassName());
}

//-----

ostream& operator<< (ostream& os, const cOwnedObject *p)
{
    if (!p)
        return os << "(NULL)";
    return os << "(" << p->getClassName() << ")" << p->getFullName();
}

ostream& operator<< (ostream& os, const cOwnedObject& o)
{
    return os << "(" << o.getClassName() << ")" << o.getFullName();
}

NAMESPACE_END
