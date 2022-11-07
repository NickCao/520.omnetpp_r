//
// Generated file, do not edit! Created by opp_msgc 4.0 from sim_std.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "sim_std_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}



class cObjectDescriptor : public cClassDescriptor
{
  public:
    cObjectDescriptor();
    virtual ~cObjectDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cObjectDescriptor)

cObjectDescriptor::cObjectDescriptor() : cClassDescriptor("cObject", "")
{
}

cObjectDescriptor::~cObjectDescriptor()
{
}

bool cObjectDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cObject *>(obj)!=NULL;
}

const char *cObjectDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cObjectDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int cObjectDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return 0;
        default: return 0;
    }
}

const char *cObjectDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "className";
        case 1: return "fullName";
        case 2: return "fullPath";
        case 3: return "info";
        case 4: return "detailedInfo";
        default: return NULL;
    }
}

const char *cObjectDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "string";
        case 2: return "string";
        case 3: return "string";
        case 4: return "string";
        default: return NULL;
    }
}

const char *cObjectDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "base";
            if (!strcmp(propertyname,"hint")) return "C++ class name";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"group")) return "base";
            if (!strcmp(propertyname,"hint")) return "If object is part of a module/gate vector: name with index";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"group")) return "base";
            if (!strcmp(propertyname,"hint")) return "Hierarchical name, composed of full names of this object and its owners/parents";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"getter")) return "info";
            if (!strcmp(propertyname,"group")) return "base";
            if (!strcmp(propertyname,"hint")) return "Text provided by the object's \"info\" method";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"getter")) return "detailedInfo";
            if (!strcmp(propertyname,"group")) return "base";
            if (!strcmp(propertyname,"hint")) return "Text provided by the object's \"detailedInfo\" method";
            return NULL;
        default: return NULL;
    }
}

int cObjectDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cObject *pp = (cObject *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cObjectDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cObject *pp = (cObject *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->getClassName(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->getFullName(),resultbuf,bufsize); return true;
        case 2: oppstring2string(pp->getFullPath(),resultbuf,bufsize); return true;
        case 3: oppstring2string(pp->info(),resultbuf,bufsize); return true;
        case 4: oppstring2string(pp->detailedInfo(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cObjectDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cObject *pp = (cObject *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cObjectDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cObjectDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cObject *pp = (cObject *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cNamedObjectDescriptor : public cClassDescriptor
{
  public:
    cNamedObjectDescriptor();
    virtual ~cNamedObjectDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cNamedObjectDescriptor)

cNamedObjectDescriptor::cNamedObjectDescriptor() : cClassDescriptor("cNamedObject", "cObject")
{
}

cNamedObjectDescriptor::~cNamedObjectDescriptor()
{
}

bool cNamedObjectDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cNamedObject *>(obj)!=NULL;
}

const char *cNamedObjectDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cNamedObjectDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cNamedObjectDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *cNamedObjectDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "name";
        default: return NULL;
    }
}

const char *cNamedObjectDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        default: return NULL;
    }
}

const char *cNamedObjectDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "base";
            if (!strcmp(propertyname,"hint")) return "An editable string attribute of the object, also used for fullName and fullPath";
            if (!strcmp(propertyname,"editable")) return "true";
            return NULL;
        default: return NULL;
    }
}

int cNamedObjectDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cNamedObject *pp = (cNamedObject *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cNamedObjectDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cNamedObject *pp = (cNamedObject *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->getName(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cNamedObjectDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cNamedObject *pp = (cNamedObject *)object; (void)pp;
    switch (field) {
        case 0: pp->setName((value)); return true;
        default: return false;
    }
}

const char *cNamedObjectDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cNamedObjectDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cNamedObject *pp = (cNamedObject *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cOwnedObjectDescriptor : public cClassDescriptor
{
  public:
    cOwnedObjectDescriptor();
    virtual ~cOwnedObjectDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cOwnedObjectDescriptor)

cOwnedObjectDescriptor::cOwnedObjectDescriptor() : cClassDescriptor("cOwnedObject", "cNamedObject")
{
}

cOwnedObjectDescriptor::~cOwnedObjectDescriptor()
{
}

bool cOwnedObjectDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cOwnedObject *>(obj)!=NULL;
}

const char *cOwnedObjectDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cOwnedObjectDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cOwnedObjectDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *cOwnedObjectDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "owner";
        default: return NULL;
    }
}

const char *cOwnedObjectDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cObject";
        default: return NULL;
    }
}

const char *cOwnedObjectDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "base";
            if (!strcmp(propertyname,"hint")) return "Module or container this object belongs to";
            return NULL;
        default: return NULL;
    }
}

int cOwnedObjectDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cOwnedObject *pp = (cOwnedObject *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cOwnedObjectDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cOwnedObject *pp = (cOwnedObject *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getOwner(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cOwnedObjectDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cOwnedObject *pp = (cOwnedObject *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cOwnedObjectDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cObject"; break;
        default: return NULL;
    }
}

void *cOwnedObjectDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cOwnedObject *pp = (cOwnedObject *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(pp->getOwner()); break;
        default: return NULL;
    }
}

class cNoncopyableOwnedObjectDescriptor : public cClassDescriptor
{
  public:
    cNoncopyableOwnedObjectDescriptor();
    virtual ~cNoncopyableOwnedObjectDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cNoncopyableOwnedObjectDescriptor)

cNoncopyableOwnedObjectDescriptor::cNoncopyableOwnedObjectDescriptor() : cClassDescriptor("cNoncopyableOwnedObject", "cOwnedObject")
{
}

cNoncopyableOwnedObjectDescriptor::~cNoncopyableOwnedObjectDescriptor()
{
}

bool cNoncopyableOwnedObjectDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cNoncopyableOwnedObject *>(obj)!=NULL;
}

const char *cNoncopyableOwnedObjectDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cNoncopyableOwnedObjectDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cNoncopyableOwnedObjectDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cNoncopyableOwnedObjectDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cNoncopyableOwnedObjectDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cNoncopyableOwnedObjectDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cNoncopyableOwnedObjectDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cNoncopyableOwnedObject *pp = (cNoncopyableOwnedObject *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cNoncopyableOwnedObjectDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cNoncopyableOwnedObject *pp = (cNoncopyableOwnedObject *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cNoncopyableOwnedObjectDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cNoncopyableOwnedObject *pp = (cNoncopyableOwnedObject *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cNoncopyableOwnedObjectDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cNoncopyableOwnedObjectDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cNoncopyableOwnedObject *pp = (cNoncopyableOwnedObject *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cDefaultListDescriptor : public cClassDescriptor
{
  public:
    cDefaultListDescriptor();
    virtual ~cDefaultListDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cDefaultListDescriptor)

cDefaultListDescriptor::cDefaultListDescriptor() : cClassDescriptor("cDefaultList", "cNoncopyableOwnedObject")
{
}

cDefaultListDescriptor::~cDefaultListDescriptor()
{
}

bool cDefaultListDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cDefaultList *>(obj)!=NULL;
}

const char *cDefaultListDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cDefaultListDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cDefaultListDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cDefaultListDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "contents";
        default: return NULL;
    }
}

const char *cDefaultListDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cOwnedObject";
        default: return NULL;
    }
}

const char *cDefaultListDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "defaultListGet";
            if (!strcmp(propertyname,"group")) return "contents";
            if (!strcmp(propertyname,"hint")) return "List of objects directly held by this component";
            if (!strcmp(propertyname,"sizeGetter")) return "defaultListSize";
            return NULL;
        default: return NULL;
    }
}

int cDefaultListDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cDefaultList *pp = (cDefaultList *)object; (void)pp;
    switch (field) {
        case 0: return pp->defaultListSize();
        default: return 0;
    }
}

bool cDefaultListDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cDefaultList *pp = (cDefaultList *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->defaultListGet(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cDefaultListDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cDefaultList *pp = (cDefaultList *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cDefaultListDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cOwnedObject"; break;
        default: return NULL;
    }
}

void *cDefaultListDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cDefaultList *pp = (cDefaultList *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(pp->defaultListGet(i)); break;
        default: return NULL;
    }
}

class cDisplayStringDescriptor : public cClassDescriptor
{
  public:
    cDisplayStringDescriptor();
    virtual ~cDisplayStringDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cDisplayStringDescriptor)

cDisplayStringDescriptor::cDisplayStringDescriptor() : cClassDescriptor("cDisplayString", "")
{
}

cDisplayStringDescriptor::~cDisplayStringDescriptor()
{
}

bool cDisplayStringDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cDisplayString *>(obj)!=NULL;
}

const char *cDisplayStringDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cDisplayStringDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cDisplayStringDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *cDisplayStringDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "value";
        default: return NULL;
    }
}

const char *cDisplayStringDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        default: return NULL;
    }
}

const char *cDisplayStringDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "str";
            if (!strcmp(propertyname,"hint")) return "The editable display string itself";
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"setter")) return "parse";
            return NULL;
        default: return NULL;
    }
}

int cDisplayStringDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cDisplayString *pp = (cDisplayString *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cDisplayStringDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cDisplayString *pp = (cDisplayString *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->str(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cDisplayStringDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cDisplayString *pp = (cDisplayString *)object; (void)pp;
    switch (field) {
        case 0: pp->parse((value)); return true;
        default: return false;
    }
}

const char *cDisplayStringDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cDisplayStringDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cDisplayString *pp = (cDisplayString *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cPropertyDescriptor : public cClassDescriptor
{
  public:
    cPropertyDescriptor();
    virtual ~cPropertyDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cPropertyDescriptor)

cPropertyDescriptor::cPropertyDescriptor() : cClassDescriptor("cProperty", "cObject")
{
}

cPropertyDescriptor::~cPropertyDescriptor()
{
}

bool cPropertyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cProperty *>(obj)!=NULL;
}

const char *cPropertyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cPropertyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int cPropertyDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        default: return 0;
    }
}

const char *cPropertyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "isImplicit";
        case 1: return "index";
        case 2: return "value";
        default: return NULL;
    }
}

const char *cPropertyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "string";
        case 2: return "string";
        default: return NULL;
    }
}

const char *cPropertyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "isImplicit";
            if (!strcmp(propertyname,"group")) return "general";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"group")) return "general";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"getter")) return "info";
            if (!strcmp(propertyname,"hint")) return "Name and value";
            return NULL;
        default: return NULL;
    }
}

int cPropertyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cProperty *pp = (cProperty *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cPropertyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cProperty *pp = (cProperty *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->isImplicit(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->getIndex(),resultbuf,bufsize); return true;
        case 2: oppstring2string(pp->info(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cPropertyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cProperty *pp = (cProperty *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cPropertyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cPropertyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cProperty *pp = (cProperty *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cPropertiesDescriptor : public cClassDescriptor
{
  public:
    cPropertiesDescriptor();
    virtual ~cPropertiesDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cPropertiesDescriptor)

cPropertiesDescriptor::cPropertiesDescriptor() : cClassDescriptor("cProperties", "cObject")
{
}

cPropertiesDescriptor::~cPropertiesDescriptor()
{
}

bool cPropertiesDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cProperties *>(obj)!=NULL;
}

const char *cPropertiesDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cPropertiesDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cPropertiesDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *cPropertiesDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "contents";
        default: return NULL;
    }
}

const char *cPropertiesDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cProperty";
        default: return NULL;
    }
}

const char *cPropertiesDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "get";
            if (!strcmp(propertyname,"hint")) return "The property list";
            if (!strcmp(propertyname,"sizeGetter")) return "getNumProperties";
            return NULL;
        default: return NULL;
    }
}

int cPropertiesDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cProperties *pp = (cProperties *)object; (void)pp;
    switch (field) {
        case 0: return pp->getNumProperties();
        default: return 0;
    }
}

bool cPropertiesDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cProperties *pp = (cProperties *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->get(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cPropertiesDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cProperties *pp = (cProperties *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cPropertiesDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cProperty"; break;
        default: return NULL;
    }
}

void *cPropertiesDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cProperties *pp = (cProperties *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(pp->get(i)); break;
        default: return NULL;
    }
}

class cComponentDescriptor : public cClassDescriptor
{
  public:
    cComponentDescriptor();
    virtual ~cComponentDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cComponentDescriptor)

cComponentDescriptor::cComponentDescriptor() : cClassDescriptor("cComponent", "cDefaultList")
{
}

cComponentDescriptor::~cComponentDescriptor()
{
}

bool cComponentDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cComponent *>(obj)!=NULL;
}

const char *cComponentDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cComponentDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int cComponentDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 2: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        case 3: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *cComponentDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "isModule";
        case 1: return "componentType";
        case 2: return "par";
        case 3: return "properties";
        default: return NULL;
    }
}

const char *cComponentDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "cComponentType";
        case 2: return "cPar";
        case 3: return "cProperties";
        default: return NULL;
    }
}

const char *cComponentDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "isModule";
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Whether this component is a module or a channel";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "The object that represents the type declaration for this component";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"getter")) return "par";
            if (!strcmp(propertyname,"group")) return "parameters, gates";
            if (!strcmp(propertyname,"hint")) return "Parameters";
            if (!strcmp(propertyname,"label")) return "parameters";
            if (!strcmp(propertyname,"sizeGetter")) return "getNumParams";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"group")) return "parameters, gates";
            if (!strcmp(propertyname,"hint")) return "Properties";
            return NULL;
        default: return NULL;
    }
}

int cComponentDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cComponent *pp = (cComponent *)object; (void)pp;
    switch (field) {
        case 2: return pp->getNumParams();
        default: return 0;
    }
}

bool cComponentDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cComponent *pp = (cComponent *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->isModule(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getComponentType(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->par(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: {std::stringstream out; out << pp->getProperties(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cComponentDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cComponent *pp = (cComponent *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cComponentDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "cComponentType"; break;
        case 2: return "cPar"; break;
        case 3: return "cProperties"; break;
        default: return NULL;
    }
}

void *cComponentDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cComponent *pp = (cComponent *)object; (void)pp;
    switch (field) {
        case 1: return (void *)static_cast<cObject *>(pp->getComponentType()); break;
        case 2: return (void *)static_cast<cObject *>(&pp->par(i)); break;
        case 3: return (void *)static_cast<cObject *>(pp->getProperties()); break;
        default: return NULL;
    }
}

class cChannelDescriptor : public cClassDescriptor
{
  public:
    cChannelDescriptor();
    virtual ~cChannelDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cChannelDescriptor)

cChannelDescriptor::cChannelDescriptor() : cClassDescriptor("cChannel", "cComponent")
{
}

cChannelDescriptor::~cChannelDescriptor()
{
}

bool cChannelDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cChannel *>(obj)!=NULL;
}

const char *cChannelDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cChannelDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cChannelDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *cChannelDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "displayString";
        default: return NULL;
    }
}

const char *cChannelDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cDisplayString";
        default: return NULL;
    }
}

const char *cChannelDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Controls appearance of this channel in the GUI";
            return NULL;
        default: return NULL;
    }
}

int cChannelDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cChannel *pp = (cChannel *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cChannelDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cChannel *pp = (cChannel *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDisplayString(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cChannelDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cChannel *pp = (cChannel *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cChannelDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cDisplayString"; break;
        default: return NULL;
    }
}

void *cChannelDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cChannel *pp = (cChannel *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDisplayString()); break;
        default: return NULL;
    }
}

class cIdealChannelDescriptor : public cClassDescriptor
{
  public:
    cIdealChannelDescriptor();
    virtual ~cIdealChannelDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cIdealChannelDescriptor)

cIdealChannelDescriptor::cIdealChannelDescriptor() : cClassDescriptor("cIdealChannel", "cChannel")
{
}

cIdealChannelDescriptor::~cIdealChannelDescriptor()
{
}

bool cIdealChannelDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cIdealChannel *>(obj)!=NULL;
}

const char *cIdealChannelDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cIdealChannelDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cIdealChannelDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cIdealChannelDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cIdealChannelDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cIdealChannelDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cIdealChannelDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cIdealChannel *pp = (cIdealChannel *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cIdealChannelDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cIdealChannel *pp = (cIdealChannel *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cIdealChannelDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cIdealChannel *pp = (cIdealChannel *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cIdealChannelDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cIdealChannelDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cIdealChannel *pp = (cIdealChannel *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cDelayChannelDescriptor : public cClassDescriptor
{
  public:
    cDelayChannelDescriptor();
    virtual ~cDelayChannelDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cDelayChannelDescriptor)

cDelayChannelDescriptor::cDelayChannelDescriptor() : cClassDescriptor("cDelayChannel", "cChannel")
{
}

cDelayChannelDescriptor::~cDelayChannelDescriptor()
{
}

bool cDelayChannelDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cDelayChannel *>(obj)!=NULL;
}

const char *cDelayChannelDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cDelayChannelDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cDelayChannelDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cDelayChannelDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cDelayChannelDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cDelayChannelDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cDelayChannelDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cDelayChannel *pp = (cDelayChannel *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cDelayChannelDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cDelayChannel *pp = (cDelayChannel *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cDelayChannelDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cDelayChannel *pp = (cDelayChannel *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cDelayChannelDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cDelayChannelDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cDelayChannel *pp = (cDelayChannel *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cDatarateChannelDescriptor : public cClassDescriptor
{
  public:
    cDatarateChannelDescriptor();
    virtual ~cDatarateChannelDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cDatarateChannelDescriptor)

cDatarateChannelDescriptor::cDatarateChannelDescriptor() : cClassDescriptor("cDatarateChannel", "cChannel")
{
}

cDatarateChannelDescriptor::~cDatarateChannelDescriptor()
{
}

bool cDatarateChannelDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cDatarateChannel *>(obj)!=NULL;
}

const char *cDatarateChannelDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cDatarateChannelDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int cDatarateChannelDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        default: return 0;
    }
}

const char *cDatarateChannelDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "isBusy";
        case 1: return "transmissionFinishTime";
        default: return NULL;
    }
}

const char *cDatarateChannelDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "simtime_t";
        default: return NULL;
    }
}

const char *cDatarateChannelDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "isBusy";
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "If channel is currently transmitting";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "If busy: when currently active transmissions will finish";
            return NULL;
        default: return NULL;
    }
}

int cDatarateChannelDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cDatarateChannel *pp = (cDatarateChannel *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cDatarateChannelDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cDatarateChannel *pp = (cDatarateChannel *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->isBusy(),resultbuf,bufsize); return true;
        case 1: double2string(pp->getTransmissionFinishTime(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cDatarateChannelDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cDatarateChannel *pp = (cDatarateChannel *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cDatarateChannelDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cDatarateChannelDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cDatarateChannel *pp = (cDatarateChannel *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cModuleDescriptor : public cClassDescriptor
{
  public:
    cModuleDescriptor();
    virtual ~cModuleDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cModuleDescriptor)

cModuleDescriptor::cModuleDescriptor() : cClassDescriptor("cModule", "cComponent")
{
}

cModuleDescriptor::~cModuleDescriptor()
{
}

bool cModuleDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cModule *>(obj)!=NULL;
}

const char *cModuleDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cModuleDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int cModuleDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return 0;
        case 5: return FD_ISCOMPOUND;
        case 6: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *cModuleDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "id";
        case 1: return "isSimple";
        case 2: return "isVector";
        case 3: return "index";
        case 4: return "size";
        case 5: return "displayString";
        case 6: return "gate";
        default: return NULL;
    }
}

const char *cModuleDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "bool";
        case 2: return "bool";
        case 3: return "int";
        case 4: return "int";
        case 5: return "cDisplayString";
        case 6: return "cGate";
        default: return NULL;
    }
}

const char *cModuleDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Unique module ID -- IDs of deleted modules are not issued again";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"getter")) return "isSimple";
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Whether this is a simple module";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"getter")) return "isVector";
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Whether this module is part of a module vector";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "If vector: index of this module in its module vector";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"getter")) return "size";
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "If vector: size of module vector this module belongs to";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Controls appearance of this module in the GUI";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"getter")) return "gateByOrdinal";
            if (!strcmp(propertyname,"group")) return "parameters, gates";
            if (!strcmp(propertyname,"hint")) return "Module gates";
            if (!strcmp(propertyname,"label")) return "gates";
            if (!strcmp(propertyname,"sizeGetter")) return "gateCount";
            return NULL;
        default: return NULL;
    }
}

int cModuleDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cModule *pp = (cModule *)object; (void)pp;
    switch (field) {
        case 6: return pp->gateCount();
        default: return 0;
    }
}

bool cModuleDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cModule *pp = (cModule *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getId(),resultbuf,bufsize); return true;
        case 1: bool2string(pp->isSimple(),resultbuf,bufsize); return true;
        case 2: bool2string(pp->isVector(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getIndex(),resultbuf,bufsize); return true;
        case 4: long2string(pp->size(),resultbuf,bufsize); return true;
        case 5: {std::stringstream out; out << pp->getDisplayString(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 6: {std::stringstream out; out << pp->gateByOrdinal(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cModuleDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cModule *pp = (cModule *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cModuleDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5: return "cDisplayString"; break;
        case 6: return "cGate"; break;
        default: return NULL;
    }
}

void *cModuleDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cModule *pp = (cModule *)object; (void)pp;
    switch (field) {
        case 5: return (void *)(&pp->getDisplayString()); break;
        case 6: return (void *)static_cast<cObject *>(pp->gateByOrdinal(i)); break;
        default: return NULL;
    }
}

class cSimpleModuleDescriptor : public cClassDescriptor
{
  public:
    cSimpleModuleDescriptor();
    virtual ~cSimpleModuleDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cSimpleModuleDescriptor)

cSimpleModuleDescriptor::cSimpleModuleDescriptor() : cClassDescriptor("cSimpleModule", "cModule")
{
}

cSimpleModuleDescriptor::~cSimpleModuleDescriptor()
{
}

bool cSimpleModuleDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cSimpleModule *>(obj)!=NULL;
}

const char *cSimpleModuleDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cSimpleModuleDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int cSimpleModuleDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        default: return 0;
    }
}

const char *cSimpleModuleDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "isTerminated";
        case 1: return "usesActivity";
        case 2: return "stackSize";
        case 3: return "stackUsage";
        default: return NULL;
    }
}

const char *cSimpleModuleDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "bool";
        case 2: return "unsigned int";
        case 3: return "unsigned int";
        default: return NULL;
    }
}

const char *cSimpleModuleDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "isTerminated";
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Whether this module has terminated";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"getter")) return "usesActivity";
            if (!strcmp(propertyname,"group")) return "activity";
            if (!strcmp(propertyname,"hint")) return "Whether this simple module was programmed using the \"activity\" or the \"handleMessage\" C++ method";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"group")) return "activity";
            if (!strcmp(propertyname,"hint")) return "If module uses \"activity\": stack size allocated for this module -- zero means info not available";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"group")) return "activity";
            if (!strcmp(propertyname,"hint")) return "If module uses \"activity\": stack actually used by this module -- zero means info not available";
            return NULL;
        default: return NULL;
    }
}

int cSimpleModuleDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cSimpleModule *pp = (cSimpleModule *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cSimpleModuleDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cSimpleModule *pp = (cSimpleModule *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->isTerminated(),resultbuf,bufsize); return true;
        case 1: bool2string(pp->usesActivity(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getStackSize(),resultbuf,bufsize); return true;
        case 3: ulong2string(pp->getStackUsage(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cSimpleModuleDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cSimpleModule *pp = (cSimpleModule *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cSimpleModuleDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cSimpleModuleDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cSimpleModule *pp = (cSimpleModule *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cCompoundModuleDescriptor : public cClassDescriptor
{
  public:
    cCompoundModuleDescriptor();
    virtual ~cCompoundModuleDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cCompoundModuleDescriptor)

cCompoundModuleDescriptor::cCompoundModuleDescriptor() : cClassDescriptor("cCompoundModule", "cModule")
{
}

cCompoundModuleDescriptor::~cCompoundModuleDescriptor()
{
}

bool cCompoundModuleDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cCompoundModule *>(obj)!=NULL;
}

const char *cCompoundModuleDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cCompoundModuleDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cCompoundModuleDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cCompoundModuleDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cCompoundModuleDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cCompoundModuleDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cCompoundModuleDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cCompoundModule *pp = (cCompoundModule *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cCompoundModuleDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cCompoundModule *pp = (cCompoundModule *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cCompoundModuleDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cCompoundModule *pp = (cCompoundModule *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cCompoundModuleDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cCompoundModuleDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cCompoundModule *pp = (cCompoundModule *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cComponentTypeDescriptor : public cClassDescriptor
{
  public:
    cComponentTypeDescriptor();
    virtual ~cComponentTypeDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cComponentTypeDescriptor)

cComponentTypeDescriptor::cComponentTypeDescriptor() : cClassDescriptor("cComponentType", "cNoncopyableOwnedObject")
{
}

cComponentTypeDescriptor::~cComponentTypeDescriptor()
{
}

bool cComponentTypeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cComponentType *>(obj)!=NULL;
}

const char *cComponentTypeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cComponentTypeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cComponentTypeDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cComponentTypeDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cComponentTypeDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cComponentTypeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cComponentTypeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cComponentType *pp = (cComponentType *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cComponentTypeDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cComponentType *pp = (cComponentType *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cComponentTypeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cComponentType *pp = (cComponentType *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cComponentTypeDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cComponentTypeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cComponentType *pp = (cComponentType *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cModuleTypeDescriptor : public cClassDescriptor
{
  public:
    cModuleTypeDescriptor();
    virtual ~cModuleTypeDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cModuleTypeDescriptor)

cModuleTypeDescriptor::cModuleTypeDescriptor() : cClassDescriptor("cModuleType", "cComponentType")
{
}

cModuleTypeDescriptor::~cModuleTypeDescriptor()
{
}

bool cModuleTypeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cModuleType *>(obj)!=NULL;
}

const char *cModuleTypeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cModuleTypeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cModuleTypeDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        default: return 0;
    }
}

const char *cModuleTypeDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "isNetwork";
        default: return NULL;
    }
}

const char *cModuleTypeDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        default: return NULL;
    }
}

const char *cModuleTypeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "isNetwork";
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Whether this module type can be used as toplevel module";
            return NULL;
        default: return NULL;
    }
}

int cModuleTypeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cModuleType *pp = (cModuleType *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cModuleTypeDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cModuleType *pp = (cModuleType *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->isNetwork(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cModuleTypeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cModuleType *pp = (cModuleType *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cModuleTypeDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cModuleTypeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cModuleType *pp = (cModuleType *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cChannelTypeDescriptor : public cClassDescriptor
{
  public:
    cChannelTypeDescriptor();
    virtual ~cChannelTypeDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cChannelTypeDescriptor)

cChannelTypeDescriptor::cChannelTypeDescriptor() : cClassDescriptor("cChannelType", "cComponentType")
{
}

cChannelTypeDescriptor::~cChannelTypeDescriptor()
{
}

bool cChannelTypeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cChannelType *>(obj)!=NULL;
}

const char *cChannelTypeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cChannelTypeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cChannelTypeDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cChannelTypeDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cChannelTypeDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cChannelTypeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cChannelTypeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cChannelType *pp = (cChannelType *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cChannelTypeDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cChannelType *pp = (cChannelType *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cChannelTypeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cChannelType *pp = (cChannelType *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cChannelTypeDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cChannelTypeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cChannelType *pp = (cChannelType *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cRegistrationListDescriptor : public cClassDescriptor
{
  public:
    cRegistrationListDescriptor();
    virtual ~cRegistrationListDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cRegistrationListDescriptor)

cRegistrationListDescriptor::cRegistrationListDescriptor() : cClassDescriptor("cRegistrationList", "cNamedObject")
{
}

cRegistrationListDescriptor::~cRegistrationListDescriptor()
{
}

bool cRegistrationListDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cRegistrationList *>(obj)!=NULL;
}

const char *cRegistrationListDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cRegistrationListDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cRegistrationListDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *cRegistrationListDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "contents";
        default: return NULL;
    }
}

const char *cRegistrationListDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cObject";
        default: return NULL;
    }
}

const char *cRegistrationListDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "get";
            if (!strcmp(propertyname,"hint")) return "Contained objects";
            if (!strcmp(propertyname,"sizeGetter")) return "size";
            return NULL;
        default: return NULL;
    }
}

int cRegistrationListDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cRegistrationList *pp = (cRegistrationList *)object; (void)pp;
    switch (field) {
        case 0: return pp->size();
        default: return 0;
    }
}

bool cRegistrationListDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cRegistrationList *pp = (cRegistrationList *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->get(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cRegistrationListDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cRegistrationList *pp = (cRegistrationList *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cRegistrationListDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cObject"; break;
        default: return NULL;
    }
}

void *cRegistrationListDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cRegistrationList *pp = (cRegistrationList *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(pp->get(i)); break;
        default: return NULL;
    }
}

class cGateDescriptor : public cClassDescriptor
{
  public:
    cGateDescriptor();
    virtual ~cGateDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cGateDescriptor)

cGateDescriptor::cGateDescriptor() : cClassDescriptor("cGate", "cObject")
{
}

cGateDescriptor::~cGateDescriptor()
{
}

bool cGateDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cGate *>(obj)!=NULL;
}

const char *cGateDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cGateDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 16+basedesc->getFieldCount(object) : 16;
}

unsigned int cGateDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return 0;
        case 5: return 0;
        case 6: return 0;
        case 7: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 8: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        case 9: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        case 10: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        case 11: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        case 12: return 0;
        case 13: return 0;
        case 14: return 0;
        case 15: return 0;
        default: return 0;
    }
}

const char *cGateDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "type";
        case 1: return "id";
        case 2: return "isVector";
        case 3: return "index";
        case 4: return "deliverOnReceptionStart";
        case 5: return "isBusy";
        case 6: return "transmissionFinishTime";
        case 7: return "channel";
        case 8: return "previousGate";
        case 9: return "nextGate";
        case 10: return "pathStartGate";
        case 11: return "pathEndGate";
        case 12: return "isConnectedOutside";
        case 13: return "isConnectedInside";
        case 14: return "isConnected";
        case 15: return "isPathOK";
        default: return NULL;
    }
}

const char *cGateDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "char";
        case 1: return "int";
        case 2: return "bool";
        case 3: return "int";
        case 4: return "bool";
        case 5: return "bool";
        case 6: return "simtime_t";
        case 7: return "cChannel";
        case 8: return "cGate";
        case 9: return "cGate";
        case 10: return "cGate";
        case 11: return "cGate";
        case 12: return "bool";
        case 13: return "bool";
        case 14: return "bool";
        case 15: return "bool";
        default: return NULL;
    }
}

const char *cGateDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Gate type";
            if (!strcmp(propertyname,"enum")) return "cGate_Type";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Gate id, unique within this module";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"getter")) return "isVector";
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Whether this gate is part of a gate vector";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "If vector: index of this gate within its gate vector";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Only for simple module input gates, and if message transmission duration is nonzero: whether messages arriving on this gate will be given to the module at the start or the end of the reception";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"getter")) return "isBusy";
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Only if the connection has a channel with nonzero datarate";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Only if the connection has a channel with nonzero datarate";
            return NULL;
        case 7:
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "Channel object associated with the connection";
            return NULL;
        case 8:
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "The gate this one is connected to -- for output gates this points out of this module, and for input gates it points inside";
            return NULL;
        case 9:
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "The gate whose \"previousGate\" is this gate -- note that \"previous\" and \"next\" correspond to the direction of messages";
            return NULL;
        case 10:
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "The last gate in the \"previousGate->previousGate->previousGate...\" chain";
            return NULL;
        case 11:
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "The last gate in the \"nextGate->nextGate->nextGate...\" chain";
            return NULL;
        case 12:
            if (!strcmp(propertyname,"getter")) return "isConnectedOutside";
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "For an output gate this checks nextGate, and previousGate for an input gate";
            return NULL;
        case 13:
            if (!strcmp(propertyname,"getter")) return "isConnectedInside";
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "For an input gate this checks nextGate, and previousGate for an output gate";
            return NULL;
        case 14:
            if (!strcmp(propertyname,"getter")) return "isConnected";
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "Whether the gate is fully connected -- both inside and outside for a compound module gate, and outside for a simple module gate";
            return NULL;
        case 15:
            if (!strcmp(propertyname,"getter")) return "isPathOK";
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "The chain of connections is OK if it starts and ends at a simple module";
            return NULL;
        default: return NULL;
    }
}

int cGateDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cGate *pp = (cGate *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cGateDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cGate *pp = (cGate *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getType(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getId(),resultbuf,bufsize); return true;
        case 2: bool2string(pp->isVector(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getIndex(),resultbuf,bufsize); return true;
        case 4: bool2string(pp->getDeliverOnReceptionStart(),resultbuf,bufsize); return true;
        case 5: bool2string(pp->isBusy(),resultbuf,bufsize); return true;
        case 6: double2string(pp->getTransmissionFinishTime(),resultbuf,bufsize); return true;
        case 7: {std::stringstream out; out << pp->getChannel(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 8: {std::stringstream out; out << pp->getPreviousGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 9: {std::stringstream out; out << pp->getNextGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 10: {std::stringstream out; out << pp->getPathStartGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 11: {std::stringstream out; out << pp->getPathEndGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 12: bool2string(pp->isConnectedOutside(),resultbuf,bufsize); return true;
        case 13: bool2string(pp->isConnectedInside(),resultbuf,bufsize); return true;
        case 14: bool2string(pp->isConnected(),resultbuf,bufsize); return true;
        case 15: bool2string(pp->isPathOK(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cGateDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cGate *pp = (cGate *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cGateDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 7: return "cChannel"; break;
        case 8: return "cGate"; break;
        case 9: return "cGate"; break;
        case 10: return "cGate"; break;
        case 11: return "cGate"; break;
        default: return NULL;
    }
}

void *cGateDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cGate *pp = (cGate *)object; (void)pp;
    switch (field) {
        case 7: return (void *)static_cast<cObject *>(pp->getChannel()); break;
        case 8: return (void *)static_cast<cObject *>(pp->getPreviousGate()); break;
        case 9: return (void *)static_cast<cObject *>(pp->getNextGate()); break;
        case 10: return (void *)static_cast<cObject *>(pp->getPathStartGate()); break;
        case 11: return (void *)static_cast<cObject *>(pp->getPathEndGate()); break;
        default: return NULL;
    }
}

class cArrayDescriptor : public cClassDescriptor
{
  public:
    cArrayDescriptor();
    virtual ~cArrayDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cArrayDescriptor)

cArrayDescriptor::cArrayDescriptor() : cClassDescriptor("cArray", "cOwnedObject")
{
}

cArrayDescriptor::~cArrayDescriptor()
{
}

bool cArrayDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cArray *>(obj)!=NULL;
}

const char *cArrayDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cArrayDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int cArrayDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cArrayDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "takeOwnership";
        case 1: return "contents";
        default: return NULL;
    }
}

const char *cArrayDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "cOwnedObject";
        default: return NULL;
    }
}

const char *cArrayDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Whether the array should own the objects inserted into it";
            if (!strcmp(propertyname,"editable")) return "true";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"getter")) return "get";
            if (!strcmp(propertyname,"hint")) return "Objects contained in the array";
            if (!strcmp(propertyname,"sizeGetter")) return "size";
            return NULL;
        default: return NULL;
    }
}

int cArrayDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cArray *pp = (cArray *)object; (void)pp;
    switch (field) {
        case 1: return pp->size();
        default: return 0;
    }
}

bool cArrayDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cArray *pp = (cArray *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->getTakeOwnership(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->get(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cArrayDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cArray *pp = (cArray *)object; (void)pp;
    switch (field) {
        case 0: pp->setTakeOwnership(string2bool(value)); return true;
        default: return false;
    }
}

const char *cArrayDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "cOwnedObject"; break;
        default: return NULL;
    }
}

void *cArrayDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cArray *pp = (cArray *)object; (void)pp;
    switch (field) {
        case 1: return (void *)static_cast<cObject *>(pp->get(i)); break;
        default: return NULL;
    }
}

class cMessageDescriptor : public cClassDescriptor
{
  public:
    cMessageDescriptor();
    virtual ~cMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cMessageDescriptor)

cMessageDescriptor::cMessageDescriptor() : cClassDescriptor("cMessage", "cOwnedObject")
{
}

cMessageDescriptor::~cMessageDescriptor()
{
}

bool cMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cMessage *>(obj)!=NULL;
}

const char *cMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 21+basedesc->getFieldCount(object) : 21;
}

unsigned int cMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return 0;
        case 5: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        case 6: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 7: return 0;
        case 8: return 0;
        case 9: return 0;
        case 10: return 0;
        case 11: return 0;
        case 12: return FD_ISEDITABLE;
        case 13: return 0;
        case 14: return 0;
        case 15: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 16: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        case 17: return 0;
        case 18: return 0;
        case 19: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 20: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *cMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "id";
        case 1: return "treeId";
        case 2: return "kind";
        case 3: return "schedulingPriority";
        case 4: return "displayString";
        case 5: return "controlInfo";
        case 6: return "parList";
        case 7: return "isScheduled";
        case 8: return "isSelfMessage";
        case 9: return "creationTime";
        case 10: return "sendingTime";
        case 11: return "arrivalTime";
        case 12: return "timestamp";
        case 13: return "senderModuleId";
        case 14: return "senderGateId";
        case 15: return "senderModule";
        case 16: return "senderGate";
        case 17: return "arrivalModuleId";
        case 18: return "arrivalGateId";
        case 19: return "arrivalModule";
        case 20: return "arrivalGate";
        default: return NULL;
    }
}

const char *cMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "long";
        case 1: return "long";
        case 2: return "short";
        case 3: return "short";
        case 4: return "string";
        case 5: return "cObject";
        case 6: return "cArray";
        case 7: return "bool";
        case 8: return "bool";
        case 9: return "simtime_t";
        case 10: return "simtime_t";
        case 11: return "simtime_t";
        case 12: return "simtime_t";
        case 13: return "int";
        case 14: return "int";
        case 15: return "cModule";
        case 16: return "cGate";
        case 17: return "int";
        case 18: return "int";
        case 19: return "cModule";
        case 20: return "cGate";
        default: return NULL;
    }
}

const char *cMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"hint")) return "Automatically assigned unique identifier";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"hint")) return "Identifier shared between the message and its copies";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"hint")) return "Generic user-settable attribute, usually carries \"type\" or \"role\" or \"category\" of message";
            if (!strcmp(propertyname,"editable")) return "true";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"hint")) return "Controls order of messages with equal timestamps in FES";
            if (!strcmp(propertyname,"editable")) return "true";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"hint")) return "Controls appearance of the message in GUI";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"hint")) return "Used with protocol stacks: carries extra information when a packet is sent between protocol layers";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"hint")) return "OBSOLETE: use of \"parList\" should be replaced with message subclassing in the few models that still use it";
            return NULL;
        case 7:
            if (!strcmp(propertyname,"getter")) return "isScheduled";
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "Whether message is currently scheduled/in transit or not";
            return NULL;
        case 8:
            if (!strcmp(propertyname,"getter")) return "isSelfMessage";
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "Whether message is a self-message, scheduled to be delivered back to the same module at a later time";
            return NULL;
        case 9:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "Simulation time the message was created";
            return NULL;
        case 10:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "Simulation time of the current or last sending/scheduling of the message";
            return NULL;
        case 11:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "Simulation time the message will be/was delivered to the destination module";
            return NULL;
        case 12:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "User-settable timestamp for generic use";
            if (!strcmp(propertyname,"editable")) return "true";
            return NULL;
        case 13:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "ID of the module performing the current or last send/schedule operation";
            return NULL;
        case 14:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "Module-local ID of the gate on which the message was sent out -- -1==none for self-messages and after \"sendDirect\"";
            return NULL;
        case 15:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "ID of the module performing the current or last send/schedule operation";
            return NULL;
        case 16:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "The gate on which the message was sent out -- NULL for self-messages and after \"sendDirect\"";
            return NULL;
        case 17:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "ID of the arrival module of the current or last sending/scheduling";
            return NULL;
        case 18:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "Module-local ID of arrival gate for current or last sending -- -1==none for self-messages";
            return NULL;
        case 19:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "Arrival module for current or last sending/scheduling";
            return NULL;
        case 20:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "Arrival gate for current or last sending -- NULL for self-messages";
            return NULL;
        default: return NULL;
    }
}

int cMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cMessage *pp = (cMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cMessage *pp = (cMessage *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getTreeId(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getKind(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getSchedulingPriority(),resultbuf,bufsize); return true;
        case 4: oppstring2string(pp->getDisplayString(),resultbuf,bufsize); return true;
        case 5: {std::stringstream out; out << pp->getControlInfo(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 6: {std::stringstream out; out << pp->getParList(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 7: bool2string(pp->isScheduled(),resultbuf,bufsize); return true;
        case 8: bool2string(pp->isSelfMessage(),resultbuf,bufsize); return true;
        case 9: double2string(pp->getCreationTime(),resultbuf,bufsize); return true;
        case 10: double2string(pp->getSendingTime(),resultbuf,bufsize); return true;
        case 11: double2string(pp->getArrivalTime(),resultbuf,bufsize); return true;
        case 12: double2string(pp->getTimestamp(),resultbuf,bufsize); return true;
        case 13: long2string(pp->getSenderModuleId(),resultbuf,bufsize); return true;
        case 14: long2string(pp->getSenderGateId(),resultbuf,bufsize); return true;
        case 15: {std::stringstream out; out << pp->getSenderModule(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 16: {std::stringstream out; out << pp->getSenderGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 17: long2string(pp->getArrivalModuleId(),resultbuf,bufsize); return true;
        case 18: long2string(pp->getArrivalGateId(),resultbuf,bufsize); return true;
        case 19: {std::stringstream out; out << pp->getArrivalModule(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 20: {std::stringstream out; out << pp->getArrivalGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cMessage *pp = (cMessage *)object; (void)pp;
    switch (field) {
        case 2: pp->setKind(string2long(value)); return true;
        case 3: pp->setSchedulingPriority(string2long(value)); return true;
        case 12: pp->setTimestamp(string2double(value)); return true;
        default: return false;
    }
}

const char *cMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5: return "cObject"; break;
        case 6: return "cArray"; break;
        case 15: return "cModule"; break;
        case 16: return "cGate"; break;
        case 19: return "cModule"; break;
        case 20: return "cGate"; break;
        default: return NULL;
    }
}

void *cMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cMessage *pp = (cMessage *)object; (void)pp;
    switch (field) {
        case 5: return (void *)static_cast<cObject *>(pp->getControlInfo()); break;
        case 6: return (void *)static_cast<cObject *>(&pp->getParList()); break;
        case 15: return (void *)static_cast<cObject *>(pp->getSenderModule()); break;
        case 16: return (void *)static_cast<cObject *>(pp->getSenderGate()); break;
        case 19: return (void *)static_cast<cObject *>(pp->getArrivalModule()); break;
        case 20: return (void *)static_cast<cObject *>(pp->getArrivalGate()); break;
        default: return NULL;
    }
}

class cPacketDescriptor : public cClassDescriptor
{
  public:
    cPacketDescriptor();
    virtual ~cPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cPacketDescriptor)

cPacketDescriptor::cPacketDescriptor() : cClassDescriptor("cPacket", "cMessage")
{
}

cPacketDescriptor::~cPacketDescriptor()
{
}

bool cPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cPacket *>(obj)!=NULL;
}

const char *cPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int cPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 4: return 0;
        case 5: return 0;
        default: return 0;
    }
}

const char *cPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bitLength";
        case 1: return "byteLength";
        case 2: return "hasBitError";
        case 3: return "encapsulatedMsg";
        case 4: return "isReceptionStart";
        case 5: return "duration";
        default: return NULL;
    }
}

const char *cPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int64";
        case 1: return "int64";
        case 2: return "bool";
        case 3: return "cPacket";
        case 4: return "bool";
        case 5: return "simtime_t";
        default: return NULL;
    }
}

const char *cPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"hint")) return "Simulated length of the message in bits, affects transmission time and probability of bit errors when sent through a channel";
            if (!strcmp(propertyname,"editable")) return "true";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"hint")) return "Length in bytes, i.e. length in bits divided by eight";
            if (!strcmp(propertyname,"editable")) return "true";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"getter")) return "hasBitError";
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"hint")) return "Indicates that a bit error occurred when the message was sent through a channel with nonzero bit error rate";
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"setter")) return "setBitError";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"hint")) return "Used with protocol stacks: stores an encapsulated higher-layer packet";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"getter")) return "isReceptionStart";
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "When duration is nonzero: whether this message represents the start or the end of the frame reception";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "Transmission time over a channel with datarate";
            return NULL;
        default: return NULL;
    }
}

int cPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cPacket *pp = (cPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cPacketDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cPacket *pp = (cPacket *)object; (void)pp;
    switch (field) {
        case 0: int642string(pp->getBitLength(),resultbuf,bufsize); return true;
        case 1: int642string(pp->getByteLength(),resultbuf,bufsize); return true;
        case 2: bool2string(pp->hasBitError(),resultbuf,bufsize); return true;
        case 3: {std::stringstream out; out << pp->getEncapsulatedMsg(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: bool2string(pp->isReceptionStart(),resultbuf,bufsize); return true;
        case 5: double2string(pp->getDuration(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cPacket *pp = (cPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setBitLength(string2int64(value)); return true;
        case 1: pp->setByteLength(string2int64(value)); return true;
        case 2: pp->setBitError(string2bool(value)); return true;
        default: return false;
    }
}

const char *cPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return "cPacket"; break;
        default: return NULL;
    }
}

void *cPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cPacket *pp = (cPacket *)object; (void)pp;
    switch (field) {
        case 3: return (void *)static_cast<cObject *>(pp->getEncapsulatedMsg()); break;
        default: return NULL;
    }
}

class cStatisticDescriptor : public cClassDescriptor
{
  public:
    cStatisticDescriptor();
    virtual ~cStatisticDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cStatisticDescriptor)

cStatisticDescriptor::cStatisticDescriptor() : cClassDescriptor("cStatistic", "cOwnedObject")
{
}

cStatisticDescriptor::~cStatisticDescriptor()
{
}

bool cStatisticDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cStatistic *>(obj)!=NULL;
}

const char *cStatisticDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cStatisticDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int cStatisticDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return 0;
        case 5: return 0;
        case 6: return 0;
        case 7: return 0;
        case 8: return 0;
        default: return 0;
    }
}

const char *cStatisticDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "count";
        case 1: return "weights";
        case 2: return "sum";
        case 3: return "sqrSum";
        case 4: return "min";
        case 5: return "max";
        case 6: return "mean";
        case 7: return "stddev";
        case 8: return "variance";
        default: return NULL;
    }
}

const char *cStatisticDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "long";
        case 1: return "double";
        case 2: return "double";
        case 3: return "double";
        case 4: return "double";
        case 5: return "double";
        case 6: return "double";
        case 7: return "double";
        case 8: return "double";
        default: return NULL;
    }
}

const char *cStatisticDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "Number of observations collected so far";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "Sum of weights, which equals the number of observations in the unweighted case";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "Sum of observations";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"hint")) return "Sum of squares of the observations";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"hint")) return "Minimum of the observations";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"hint")) return "Maximum of the observations";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"hint")) return "Mean of the observations";
            return NULL;
        case 7:
            if (!strcmp(propertyname,"hint")) return "Standard deviation of the observations";
            return NULL;
        case 8:
            if (!strcmp(propertyname,"hint")) return "Variance of the observations";
            return NULL;
        default: return NULL;
    }
}

int cStatisticDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cStatistic *pp = (cStatistic *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cStatisticDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cStatistic *pp = (cStatistic *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getCount(),resultbuf,bufsize); return true;
        case 1: double2string(pp->getWeights(),resultbuf,bufsize); return true;
        case 2: double2string(pp->getSum(),resultbuf,bufsize); return true;
        case 3: double2string(pp->getSqrSum(),resultbuf,bufsize); return true;
        case 4: double2string(pp->getMin(),resultbuf,bufsize); return true;
        case 5: double2string(pp->getMax(),resultbuf,bufsize); return true;
        case 6: double2string(pp->getMean(),resultbuf,bufsize); return true;
        case 7: double2string(pp->getStddev(),resultbuf,bufsize); return true;
        case 8: double2string(pp->getVariance(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cStatisticDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cStatistic *pp = (cStatistic *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cStatisticDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cStatisticDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cStatistic *pp = (cStatistic *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cStdDevDescriptor : public cClassDescriptor
{
  public:
    cStdDevDescriptor();
    virtual ~cStdDevDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cStdDevDescriptor)

cStdDevDescriptor::cStdDevDescriptor() : cClassDescriptor("cStdDev", "cStatistic")
{
}

cStdDevDescriptor::~cStdDevDescriptor()
{
}

bool cStdDevDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cStdDev *>(obj)!=NULL;
}

const char *cStdDevDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cStdDevDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cStdDevDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cStdDevDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cStdDevDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cStdDevDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cStdDevDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cStdDev *pp = (cStdDev *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cStdDevDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cStdDev *pp = (cStdDev *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cStdDevDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cStdDev *pp = (cStdDev *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cStdDevDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cStdDevDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cStdDev *pp = (cStdDev *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cWeightedStdDevDescriptor : public cClassDescriptor
{
  public:
    cWeightedStdDevDescriptor();
    virtual ~cWeightedStdDevDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cWeightedStdDevDescriptor)

cWeightedStdDevDescriptor::cWeightedStdDevDescriptor() : cClassDescriptor("cWeightedStdDev", "cStdDev")
{
}

cWeightedStdDevDescriptor::~cWeightedStdDevDescriptor()
{
}

bool cWeightedStdDevDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cWeightedStdDev *>(obj)!=NULL;
}

const char *cWeightedStdDevDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cWeightedStdDevDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cWeightedStdDevDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cWeightedStdDevDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cWeightedStdDevDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cWeightedStdDevDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cWeightedStdDevDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cWeightedStdDev *pp = (cWeightedStdDev *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cWeightedStdDevDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cWeightedStdDev *pp = (cWeightedStdDev *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cWeightedStdDevDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cWeightedStdDev *pp = (cWeightedStdDev *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cWeightedStdDevDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cWeightedStdDevDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cWeightedStdDev *pp = (cWeightedStdDev *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cDensityEstBaseDescriptor : public cClassDescriptor
{
  public:
    cDensityEstBaseDescriptor();
    virtual ~cDensityEstBaseDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cDensityEstBaseDescriptor)

cDensityEstBaseDescriptor::cDensityEstBaseDescriptor() : cClassDescriptor("cDensityEstBase", "cStdDev")
{
}

cDensityEstBaseDescriptor::~cDensityEstBaseDescriptor()
{
}

bool cDensityEstBaseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cDensityEstBase *>(obj)!=NULL;
}

const char *cDensityEstBaseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cDensityEstBaseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int cDensityEstBaseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *cDensityEstBaseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "isTransformed";
        case 1: return "underflowCell";
        case 2: return "overflowCell";
        case 3: return "numCells";
        case 4: return "cellInfo";
        default: return NULL;
    }
}

const char *cDensityEstBaseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "unsigned long";
        case 2: return "unsigned long";
        case 3: return "int";
        case 4: return "cDensityEstBase_Cell";
        default: return NULL;
    }
}

const char *cDensityEstBaseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "isTransformed";
            if (!strcmp(propertyname,"group")) return "histogram";
            if (!strcmp(propertyname,"hint")) return "If false, the object is still collecting initial observations to be used for laying out histogram cells";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"group")) return "histogram";
            if (!strcmp(propertyname,"hint")) return "Number of observations below the first histogram cell";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"group")) return "histogram";
            if (!strcmp(propertyname,"hint")) return "Number of observations above the last histogram cell";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"group")) return "histogram";
            if (!strcmp(propertyname,"hint")) return "Number of cells in the histogram";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"group")) return "histogram";
            if (!strcmp(propertyname,"hint")) return "Histogram cell bounds, observation count in the cell, and density estimate in the cell";
            if (!strcmp(propertyname,"sizeGetter")) return "getNumCells";
            return NULL;
        default: return NULL;
    }
}

int cDensityEstBaseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cDensityEstBase *pp = (cDensityEstBase *)object; (void)pp;
    switch (field) {
        case 4: return pp->getNumCells();
        default: return 0;
    }
}

bool cDensityEstBaseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cDensityEstBase *pp = (cDensityEstBase *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->isTransformed(),resultbuf,bufsize); return true;
        case 1: ulong2string(pp->getUnderflowCell(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getOverflowCell(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getNumCells(),resultbuf,bufsize); return true;
        case 4: {std::stringstream out; out << pp->getCellInfo(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cDensityEstBaseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cDensityEstBase *pp = (cDensityEstBase *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cDensityEstBaseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 4: return "cDensityEstBase_Cell"; break;
        default: return NULL;
    }
}

void *cDensityEstBaseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cDensityEstBase *pp = (cDensityEstBase *)object; (void)pp;
    switch (field) {
#if !defined(SPEC)
// illegal to take addr of temporary
        case 4: return (void *)(&pp->getCellInfo(i)); break;
#endif
        default: return NULL;
    }
}

class cHistogramBaseDescriptor : public cClassDescriptor
{
  public:
    cHistogramBaseDescriptor();
    virtual ~cHistogramBaseDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cHistogramBaseDescriptor)

cHistogramBaseDescriptor::cHistogramBaseDescriptor() : cClassDescriptor("cHistogramBase", "cDensityEstBase")
{
}

cHistogramBaseDescriptor::~cHistogramBaseDescriptor()
{
}

bool cHistogramBaseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cHistogramBase *>(obj)!=NULL;
}

const char *cHistogramBaseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cHistogramBaseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cHistogramBaseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cHistogramBaseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cHistogramBaseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cHistogramBaseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cHistogramBaseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cHistogramBase *pp = (cHistogramBase *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cHistogramBaseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cHistogramBase *pp = (cHistogramBase *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cHistogramBaseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cHistogramBase *pp = (cHistogramBase *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cHistogramBaseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cHistogramBaseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cHistogramBase *pp = (cHistogramBase *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cEqdHistogramBaseDescriptor : public cClassDescriptor
{
  public:
    cEqdHistogramBaseDescriptor();
    virtual ~cEqdHistogramBaseDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cEqdHistogramBaseDescriptor)

cEqdHistogramBaseDescriptor::cEqdHistogramBaseDescriptor() : cClassDescriptor("cEqdHistogramBase", "cHistogramBase")
{
}

cEqdHistogramBaseDescriptor::~cEqdHistogramBaseDescriptor()
{
}

bool cEqdHistogramBaseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cEqdHistogramBase *>(obj)!=NULL;
}

const char *cEqdHistogramBaseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cEqdHistogramBaseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cEqdHistogramBaseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cEqdHistogramBaseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cEqdHistogramBaseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cEqdHistogramBaseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cEqdHistogramBaseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cEqdHistogramBase *pp = (cEqdHistogramBase *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cEqdHistogramBaseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cEqdHistogramBase *pp = (cEqdHistogramBase *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cEqdHistogramBaseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cEqdHistogramBase *pp = (cEqdHistogramBase *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cEqdHistogramBaseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cEqdHistogramBaseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cEqdHistogramBase *pp = (cEqdHistogramBase *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cVarHistogramDescriptor : public cClassDescriptor
{
  public:
    cVarHistogramDescriptor();
    virtual ~cVarHistogramDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cVarHistogramDescriptor)

cVarHistogramDescriptor::cVarHistogramDescriptor() : cClassDescriptor("cVarHistogram", "cHistogramBase")
{
}

cVarHistogramDescriptor::~cVarHistogramDescriptor()
{
}

bool cVarHistogramDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cVarHistogram *>(obj)!=NULL;
}

const char *cVarHistogramDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cVarHistogramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cVarHistogramDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cVarHistogramDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cVarHistogramDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cVarHistogramDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cVarHistogramDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cVarHistogram *pp = (cVarHistogram *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cVarHistogramDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cVarHistogram *pp = (cVarHistogram *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cVarHistogramDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cVarHistogram *pp = (cVarHistogram *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cVarHistogramDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cVarHistogramDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cVarHistogram *pp = (cVarHistogram *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cLongHistogramDescriptor : public cClassDescriptor
{
  public:
    cLongHistogramDescriptor();
    virtual ~cLongHistogramDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cLongHistogramDescriptor)

cLongHistogramDescriptor::cLongHistogramDescriptor() : cClassDescriptor("cLongHistogram", "cEqdHistogramBase")
{
}

cLongHistogramDescriptor::~cLongHistogramDescriptor()
{
}

bool cLongHistogramDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cLongHistogram *>(obj)!=NULL;
}

const char *cLongHistogramDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cLongHistogramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cLongHistogramDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cLongHistogramDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cLongHistogramDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cLongHistogramDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cLongHistogramDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cLongHistogram *pp = (cLongHistogram *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cLongHistogramDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cLongHistogram *pp = (cLongHistogram *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cLongHistogramDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cLongHistogram *pp = (cLongHistogram *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cLongHistogramDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cLongHistogramDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cLongHistogram *pp = (cLongHistogram *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cDoubleHistogramDescriptor : public cClassDescriptor
{
  public:
    cDoubleHistogramDescriptor();
    virtual ~cDoubleHistogramDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cDoubleHistogramDescriptor)

cDoubleHistogramDescriptor::cDoubleHistogramDescriptor() : cClassDescriptor("cDoubleHistogram", "cEqdHistogramBase")
{
}

cDoubleHistogramDescriptor::~cDoubleHistogramDescriptor()
{
}

bool cDoubleHistogramDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cDoubleHistogram *>(obj)!=NULL;
}

const char *cDoubleHistogramDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cDoubleHistogramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cDoubleHistogramDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cDoubleHistogramDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cDoubleHistogramDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cDoubleHistogramDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cDoubleHistogramDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cDoubleHistogram *pp = (cDoubleHistogram *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cDoubleHistogramDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cDoubleHistogram *pp = (cDoubleHistogram *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cDoubleHistogramDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cDoubleHistogram *pp = (cDoubleHistogram *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cDoubleHistogramDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cDoubleHistogramDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cDoubleHistogram *pp = (cDoubleHistogram *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cKSplitDescriptor : public cClassDescriptor
{
  public:
    cKSplitDescriptor();
    virtual ~cKSplitDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cKSplitDescriptor)

cKSplitDescriptor::cKSplitDescriptor() : cClassDescriptor("cKSplit", "cDensityEstBase")
{
}

cKSplitDescriptor::~cKSplitDescriptor()
{
}

bool cKSplitDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cKSplit *>(obj)!=NULL;
}

const char *cKSplitDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cKSplitDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cKSplitDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cKSplitDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cKSplitDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cKSplitDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cKSplitDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cKSplit *pp = (cKSplit *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cKSplitDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cKSplit *pp = (cKSplit *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cKSplitDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cKSplit *pp = (cKSplit *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cKSplitDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cKSplitDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cKSplit *pp = (cKSplit *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cPSquareDescriptor : public cClassDescriptor
{
  public:
    cPSquareDescriptor();
    virtual ~cPSquareDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cPSquareDescriptor)

cPSquareDescriptor::cPSquareDescriptor() : cClassDescriptor("cPSquare", "cDensityEstBase")
{
}

cPSquareDescriptor::~cPSquareDescriptor()
{
}

bool cPSquareDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cPSquare *>(obj)!=NULL;
}

const char *cPSquareDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cPSquareDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cPSquareDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cPSquareDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cPSquareDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cPSquareDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cPSquareDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cPSquare *pp = (cPSquare *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cPSquareDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cPSquare *pp = (cPSquare *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cPSquareDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cPSquare *pp = (cPSquare *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cPSquareDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cPSquareDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cPSquare *pp = (cPSquare *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cTransientDetectionDescriptor : public cClassDescriptor
{
  public:
    cTransientDetectionDescriptor();
    virtual ~cTransientDetectionDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cTransientDetectionDescriptor)

cTransientDetectionDescriptor::cTransientDetectionDescriptor() : cClassDescriptor("cTransientDetection", "cOwnedObject")
{
}

cTransientDetectionDescriptor::~cTransientDetectionDescriptor()
{
}

bool cTransientDetectionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cTransientDetection *>(obj)!=NULL;
}

const char *cTransientDetectionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTransientDetectionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cTransientDetectionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cTransientDetectionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cTransientDetectionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cTransientDetectionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cTransientDetectionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTransientDetection *pp = (cTransientDetection *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cTransientDetectionDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTransientDetection *pp = (cTransientDetection *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cTransientDetectionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTransientDetection *pp = (cTransientDetection *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cTransientDetectionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cTransientDetectionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTransientDetection *pp = (cTransientDetection *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cAccuracyDetectionDescriptor : public cClassDescriptor
{
  public:
    cAccuracyDetectionDescriptor();
    virtual ~cAccuracyDetectionDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cAccuracyDetectionDescriptor)

cAccuracyDetectionDescriptor::cAccuracyDetectionDescriptor() : cClassDescriptor("cAccuracyDetection", "cOwnedObject")
{
}

cAccuracyDetectionDescriptor::~cAccuracyDetectionDescriptor()
{
}

bool cAccuracyDetectionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cAccuracyDetection *>(obj)!=NULL;
}

const char *cAccuracyDetectionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cAccuracyDetectionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cAccuracyDetectionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cAccuracyDetectionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cAccuracyDetectionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cAccuracyDetectionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cAccuracyDetectionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cAccuracyDetection *pp = (cAccuracyDetection *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cAccuracyDetectionDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cAccuracyDetection *pp = (cAccuracyDetection *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cAccuracyDetectionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cAccuracyDetection *pp = (cAccuracyDetection *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cAccuracyDetectionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cAccuracyDetectionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cAccuracyDetection *pp = (cAccuracyDetection *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cTDExpandingWindowsDescriptor : public cClassDescriptor
{
  public:
    cTDExpandingWindowsDescriptor();
    virtual ~cTDExpandingWindowsDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cTDExpandingWindowsDescriptor)

cTDExpandingWindowsDescriptor::cTDExpandingWindowsDescriptor() : cClassDescriptor("cTDExpandingWindows", "cTransientDetection")
{
}

cTDExpandingWindowsDescriptor::~cTDExpandingWindowsDescriptor()
{
}

bool cTDExpandingWindowsDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cTDExpandingWindows *>(obj)!=NULL;
}

const char *cTDExpandingWindowsDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTDExpandingWindowsDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cTDExpandingWindowsDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cTDExpandingWindowsDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cTDExpandingWindowsDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cTDExpandingWindowsDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cTDExpandingWindowsDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTDExpandingWindows *pp = (cTDExpandingWindows *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cTDExpandingWindowsDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTDExpandingWindows *pp = (cTDExpandingWindows *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cTDExpandingWindowsDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTDExpandingWindows *pp = (cTDExpandingWindows *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cTDExpandingWindowsDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cTDExpandingWindowsDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTDExpandingWindows *pp = (cTDExpandingWindows *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cADByStddevDescriptor : public cClassDescriptor
{
  public:
    cADByStddevDescriptor();
    virtual ~cADByStddevDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cADByStddevDescriptor)

cADByStddevDescriptor::cADByStddevDescriptor() : cClassDescriptor("cADByStddev", "cAccuracyDetection")
{
}

cADByStddevDescriptor::~cADByStddevDescriptor()
{
}

bool cADByStddevDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cADByStddev *>(obj)!=NULL;
}

const char *cADByStddevDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cADByStddevDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cADByStddevDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cADByStddevDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cADByStddevDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cADByStddevDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cADByStddevDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cADByStddev *pp = (cADByStddev *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cADByStddevDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cADByStddev *pp = (cADByStddev *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cADByStddevDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cADByStddev *pp = (cADByStddev *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cADByStddevDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cADByStddevDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cADByStddev *pp = (cADByStddev *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cExpressionDescriptor : public cClassDescriptor
{
  public:
    cExpressionDescriptor();
    virtual ~cExpressionDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cExpressionDescriptor)

cExpressionDescriptor::cExpressionDescriptor() : cClassDescriptor("cExpression", "cObject")
{
}

cExpressionDescriptor::~cExpressionDescriptor()
{
}

bool cExpressionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cExpression *>(obj)!=NULL;
}

const char *cExpressionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cExpressionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cExpressionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        default: return 0;
    }
}

const char *cExpressionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "str";
        default: return NULL;
    }
}

const char *cExpressionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        default: return NULL;
    }
}

const char *cExpressionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "str";
            return NULL;
        default: return NULL;
    }
}

int cExpressionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cExpression *pp = (cExpression *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cExpressionDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cExpression *pp = (cExpression *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->str(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cExpressionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cExpression *pp = (cExpression *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cExpressionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cExpressionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cExpression *pp = (cExpression *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cFSMDescriptor : public cClassDescriptor
{
  public:
    cFSMDescriptor();
    virtual ~cFSMDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cFSMDescriptor)

cFSMDescriptor::cFSMDescriptor() : cClassDescriptor("cFSM", "cOwnedObject")
{
}

cFSMDescriptor::~cFSMDescriptor()
{
}

bool cFSMDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cFSM *>(obj)!=NULL;
}

const char *cFSMDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cFSMDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int cFSMDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        default: return 0;
    }
}

const char *cFSMDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "state";
        case 1: return "stateName";
        default: return NULL;
    }
}

const char *cFSMDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "string";
        default: return NULL;
    }
}

const char *cFSMDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "Numeric code of the state the FSM is currently in";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "Name of the current FSM state";
            return NULL;
        default: return NULL;
    }
}

int cFSMDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cFSM *pp = (cFSM *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cFSMDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cFSM *pp = (cFSM *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getState(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->getStateName(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cFSMDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cFSM *pp = (cFSM *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cFSMDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cFSMDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cFSM *pp = (cFSM *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cMathFunctionDescriptor : public cClassDescriptor
{
  public:
    cMathFunctionDescriptor();
    virtual ~cMathFunctionDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cMathFunctionDescriptor)

cMathFunctionDescriptor::cMathFunctionDescriptor() : cClassDescriptor("cMathFunction", "cNoncopyableOwnedObject")
{
}

cMathFunctionDescriptor::~cMathFunctionDescriptor()
{
}

bool cMathFunctionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cMathFunction *>(obj)!=NULL;
}

const char *cMathFunctionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cMathFunctionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int cMathFunctionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        default: return 0;
    }
}

const char *cMathFunctionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "category";
        case 1: return "description";
        case 2: return "numArgs";
        default: return NULL;
    }
}

const char *cMathFunctionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "string";
        case 2: return "int";
        default: return NULL;
    }
}

const char *cMathFunctionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "Function category";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "Number of \"double\" parameters this function takes";
            return NULL;
        default: return NULL;
    }
}

int cMathFunctionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cMathFunction *pp = (cMathFunction *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cMathFunctionDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cMathFunction *pp = (cMathFunction *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->getCategory(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->getDescription(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getNumArgs(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cMathFunctionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cMathFunction *pp = (cMathFunction *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cMathFunctionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cMathFunctionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cMathFunction *pp = (cMathFunction *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cNEDFunctionDescriptor : public cClassDescriptor
{
  public:
    cNEDFunctionDescriptor();
    virtual ~cNEDFunctionDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cNEDFunctionDescriptor)

cNEDFunctionDescriptor::cNEDFunctionDescriptor() : cClassDescriptor("cNEDFunction", "cNoncopyableOwnedObject")
{
}

cNEDFunctionDescriptor::~cNEDFunctionDescriptor()
{
}

bool cNEDFunctionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cNEDFunction *>(obj)!=NULL;
}

const char *cNEDFunctionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cNEDFunctionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int cNEDFunctionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return FD_ISARRAY;
        case 5: return 0;
        case 6: return 0;
        default: return 0;
    }
}

const char *cNEDFunctionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "signature";
        case 1: return "category";
        case 2: return "description";
        case 3: return "returnType";
        case 4: return "argType";
        case 5: return "minArgs";
        case 6: return "maxArgs";
        default: return NULL;
    }
}

const char *cNEDFunctionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "string";
        case 2: return "string";
        case 3: return "char";
        case 4: return "char";
        case 5: return "int";
        case 6: return "int";
        default: return NULL;
    }
}

const char *cNEDFunctionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "Argument types and return value";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "Function category";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"sizeGetter")) return "getMaxArgs";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"hint")) return "Number of mandatory arguments";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"hint")) return "Maximum number of arguments";
            return NULL;
        default: return NULL;
    }
}

int cNEDFunctionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cNEDFunction *pp = (cNEDFunction *)object; (void)pp;
    switch (field) {
        case 4: return pp->getMaxArgs();
        default: return 0;
    }
}

bool cNEDFunctionDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cNEDFunction *pp = (cNEDFunction *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->getSignature(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->getCategory(),resultbuf,bufsize); return true;
        case 2: oppstring2string(pp->getDescription(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getReturnType(),resultbuf,bufsize); return true;
        case 4: long2string(pp->getArgType(i),resultbuf,bufsize); return true;
        case 5: long2string(pp->getMinArgs(),resultbuf,bufsize); return true;
        case 6: long2string(pp->getMaxArgs(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cNEDFunctionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cNEDFunction *pp = (cNEDFunction *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cNEDFunctionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cNEDFunctionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cNEDFunction *pp = (cNEDFunction *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cOutVectorDescriptor : public cClassDescriptor
{
  public:
    cOutVectorDescriptor();
    virtual ~cOutVectorDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cOutVectorDescriptor)

cOutVectorDescriptor::cOutVectorDescriptor() : cClassDescriptor("cOutVector", "cNoncopyableOwnedObject")
{
}

cOutVectorDescriptor::~cOutVectorDescriptor()
{
}

bool cOutVectorDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cOutVector *>(obj)!=NULL;
}

const char *cOutVectorDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cOutVectorDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int cOutVectorDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return 0;
        case 2: return 0;
        default: return 0;
    }
}

const char *cOutVectorDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "isEnabled";
        case 1: return "valuesReceived";
        case 2: return "valuesStored";
        default: return NULL;
    }
}

const char *cOutVectorDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "long";
        case 2: return "long";
        default: return NULL;
    }
}

const char *cOutVectorDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "isEnabled";
            if (!strcmp(propertyname,"hint")) return "If disabled, values passed to this object to record are simply discarded";
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"setter")) return "setEnabled";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "Number of values passed to this object to record";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "Number of values actually stored on the disk";
            return NULL;
        default: return NULL;
    }
}

int cOutVectorDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cOutVector *pp = (cOutVector *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cOutVectorDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cOutVector *pp = (cOutVector *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->isEnabled(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getValuesReceived(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getValuesStored(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cOutVectorDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cOutVector *pp = (cOutVector *)object; (void)pp;
    switch (field) {
        case 0: pp->setEnabled(string2bool(value)); return true;
        default: return false;
    }
}

const char *cOutVectorDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cOutVectorDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cOutVector *pp = (cOutVector *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cParDescriptor : public cClassDescriptor
{
  public:
    cParDescriptor();
    virtual ~cParDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cParDescriptor)

cParDescriptor::cParDescriptor() : cClassDescriptor("cPar", "cObject")
{
}

cParDescriptor::~cParDescriptor()
{
}

bool cParDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cPar *>(obj)!=NULL;
}

const char *cParDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cParDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int cParDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return 0;
        case 5: return 0;
        case 6: return 0;
        default: return 0;
    }
}

const char *cParDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "value";
        case 1: return "type";
        case 2: return "unit";
        case 3: return "isNumeric";
        case 4: return "isVolatile";
        case 5: return "isExpression";
        case 6: return "isShared";
        default: return NULL;
    }
}

const char *cParDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "char";
        case 2: return "string";
        case 3: return "bool";
        case 4: return "bool";
        case 5: return "bool";
        case 6: return "bool";
        default: return NULL;
    }
}

const char *cParDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "str";
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"setter")) return "parse";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "Parameter type";
            if (!strcmp(propertyname,"enum")) return "cPar_Type";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "For long and double types only";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"getter")) return "isNumeric";
            if (!strcmp(propertyname,"group")) return "flags";
            if (!strcmp(propertyname,"hint")) return "Whether parameter type is numeric, i.e. double or long";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"getter")) return "isVolatile";
            if (!strcmp(propertyname,"group")) return "flags";
            if (!strcmp(propertyname,"hint")) return "Whether parameter was declared volatile in the NED file";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"getter")) return "isExpression";
            if (!strcmp(propertyname,"group")) return "flags";
            if (!strcmp(propertyname,"hint")) return "Whether parameter value is a constant or an expression";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"getter")) return "isShared";
            if (!strcmp(propertyname,"group")) return "flags";
            if (!strcmp(propertyname,"hint")) return "Whether storage could be optimized by several modules sharing the same parameter value object";
            return NULL;
        default: return NULL;
    }
}

int cParDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cPar *pp = (cPar *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cParDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cPar *pp = (cPar *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->str(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getType(),resultbuf,bufsize); return true;
        case 2: oppstring2string(pp->getUnit(),resultbuf,bufsize); return true;
        case 3: bool2string(pp->isNumeric(),resultbuf,bufsize); return true;
        case 4: bool2string(pp->isVolatile(),resultbuf,bufsize); return true;
        case 5: bool2string(pp->isExpression(),resultbuf,bufsize); return true;
        case 6: bool2string(pp->isShared(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cParDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cPar *pp = (cPar *)object; (void)pp;
    switch (field) {
        case 0: pp->parse((value)); return true;
        default: return false;
    }
}

const char *cParDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cParDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cPar *pp = (cPar *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cMsgParDescriptor : public cClassDescriptor
{
  public:
    cMsgParDescriptor();
    virtual ~cMsgParDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cMsgParDescriptor)

cMsgParDescriptor::cMsgParDescriptor() : cClassDescriptor("cMsgPar", "cOwnedObject")
{
}

cMsgParDescriptor::~cMsgParDescriptor()
{
}

bool cMsgParDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cMsgPar *>(obj)!=NULL;
}

const char *cMsgParDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cMsgParDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int cMsgParDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        default: return 0;
    }
}

const char *cMsgParDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "value";
        case 1: return "type";
        case 2: return "isNumeric";
        case 3: return "isConstant";
        default: return NULL;
    }
}

const char *cMsgParDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "char";
        case 2: return "bool";
        case 3: return "bool";
        default: return NULL;
    }
}

const char *cMsgParDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "str";
            if (!strcmp(propertyname,"hint")) return "Parameter value";
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"setter")) return "parse";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "Parameter type";
            if (!strcmp(propertyname,"enum")) return "cPar_Type";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"getter")) return "isNumeric";
            if (!strcmp(propertyname,"group")) return "flags";
            if (!strcmp(propertyname,"hint")) return "Whether parameter is of numeric type";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"getter")) return "isConstant";
            if (!strcmp(propertyname,"group")) return "flags";
            if (!strcmp(propertyname,"hint")) return "Whether the parameter has a constant value";
            return NULL;
        default: return NULL;
    }
}

int cMsgParDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cMsgPar *pp = (cMsgPar *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cMsgParDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cMsgPar *pp = (cMsgPar *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->str(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getType(),resultbuf,bufsize); return true;
        case 2: bool2string(pp->isNumeric(),resultbuf,bufsize); return true;
        case 3: bool2string(pp->isConstant(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cMsgParDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cMsgPar *pp = (cMsgPar *)object; (void)pp;
    switch (field) {
        case 0: pp->parse((value)); return true;
        default: return false;
    }
}

const char *cMsgParDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cMsgParDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cMsgPar *pp = (cMsgPar *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cLinkedListDescriptor : public cClassDescriptor
{
  public:
    cLinkedListDescriptor();
    virtual ~cLinkedListDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cLinkedListDescriptor)

cLinkedListDescriptor::cLinkedListDescriptor() : cClassDescriptor("cLinkedList", "cOwnedObject")
{
}

cLinkedListDescriptor::~cLinkedListDescriptor()
{
}

bool cLinkedListDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cLinkedList *>(obj)!=NULL;
}

const char *cLinkedListDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cLinkedListDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cLinkedListDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        default: return 0;
    }
}

const char *cLinkedListDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "length";
        default: return NULL;
    }
}

const char *cLinkedListDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        default: return NULL;
    }
}

const char *cLinkedListDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "Number of items contained";
            return NULL;
        default: return NULL;
    }
}

int cLinkedListDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cLinkedList *pp = (cLinkedList *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cLinkedListDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cLinkedList *pp = (cLinkedList *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getLength(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cLinkedListDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cLinkedList *pp = (cLinkedList *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cLinkedListDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cLinkedListDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cLinkedList *pp = (cLinkedList *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cMessageHeapDescriptor : public cClassDescriptor
{
  public:
    cMessageHeapDescriptor();
    virtual ~cMessageHeapDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cMessageHeapDescriptor)

cMessageHeapDescriptor::cMessageHeapDescriptor() : cClassDescriptor("cMessageHeap", "cOwnedObject")
{
}

cMessageHeapDescriptor::~cMessageHeapDescriptor()
{
}

bool cMessageHeapDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cMessageHeap *>(obj)!=NULL;
}

const char *cMessageHeapDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cMessageHeapDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int cMessageHeapDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cMessageHeapDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "length";
        case 1: return "messages";
        default: return NULL;
    }
}

const char *cMessageHeapDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "cMessage";
        default: return NULL;
    }
}

const char *cMessageHeapDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "Number of items contained";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"getter")) return "peek";
            if (!strcmp(propertyname,"hint")) return "Self-messages currently scheduled and messages currently in transit";
            if (!strcmp(propertyname,"sizeGetter")) return "getLength";
            return NULL;
        default: return NULL;
    }
}

int cMessageHeapDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cMessageHeap *pp = (cMessageHeap *)object; (void)pp;
    switch (field) {
        case 1: return pp->getLength();
        default: return 0;
    }
}

bool cMessageHeapDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cMessageHeap *pp = (cMessageHeap *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getLength(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->peek(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cMessageHeapDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cMessageHeap *pp = (cMessageHeap *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cMessageHeapDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "cMessage"; break;
        default: return NULL;
    }
}

void *cMessageHeapDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cMessageHeap *pp = (cMessageHeap *)object; (void)pp;
    switch (field) {
        case 1: return (void *)static_cast<cObject *>(pp->peek(i)); break;
        default: return NULL;
    }
}

class cQueueDescriptor : public cClassDescriptor
{
  public:
    cQueueDescriptor();
    virtual ~cQueueDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cQueueDescriptor)

cQueueDescriptor::cQueueDescriptor() : cClassDescriptor("cQueue", "cOwnedObject")
{
}

cQueueDescriptor::~cQueueDescriptor()
{
}

bool cQueueDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cQueue *>(obj)!=NULL;
}

const char *cQueueDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cQueueDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int cQueueDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return 0;
        case 2: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cQueueDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "takeOwnership";
        case 1: return "length";
        case 2: return "contents";
        default: return NULL;
    }
}

const char *cQueueDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "int";
        case 2: return "cOwnedObject";
        default: return NULL;
    }
}

const char *cQueueDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Whether the queue should own the objects inserted into it";
            if (!strcmp(propertyname,"editable")) return "true";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "Number of items in the queue";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"getter")) return "get";
            if (!strcmp(propertyname,"hint")) return "Queue contents";
            if (!strcmp(propertyname,"sizeGetter")) return "getLength";
            return NULL;
        default: return NULL;
    }
}

int cQueueDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cQueue *pp = (cQueue *)object; (void)pp;
    switch (field) {
        case 2: return pp->getLength();
        default: return 0;
    }
}

bool cQueueDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cQueue *pp = (cQueue *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->getTakeOwnership(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getLength(),resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->get(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cQueueDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cQueue *pp = (cQueue *)object; (void)pp;
    switch (field) {
        case 0: pp->setTakeOwnership(string2bool(value)); return true;
        default: return false;
    }
}

const char *cQueueDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return "cOwnedObject"; break;
        default: return NULL;
    }
}

void *cQueueDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cQueue *pp = (cQueue *)object; (void)pp;
    switch (field) {
        case 2: return (void *)static_cast<cObject *>(pp->get(i)); break;
        default: return NULL;
    }
}

class cPacketQueueDescriptor : public cClassDescriptor
{
  public:
    cPacketQueueDescriptor();
    virtual ~cPacketQueueDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cPacketQueueDescriptor)

cPacketQueueDescriptor::cPacketQueueDescriptor() : cClassDescriptor("cPacketQueue", "cQueue")
{
}

cPacketQueueDescriptor::~cPacketQueueDescriptor()
{
}

bool cPacketQueueDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cPacketQueue *>(obj)!=NULL;
}

const char *cPacketQueueDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cPacketQueueDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int cPacketQueueDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        default: return 0;
    }
}

const char *cPacketQueueDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bitLength";
        case 1: return "byteLength";
        default: return NULL;
    }
}

const char *cPacketQueueDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int64";
        case 1: return "int64";
        default: return NULL;
    }
}

const char *cPacketQueueDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "Total size of messages in the queue";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "Total size of messages in the queue, in bytes";
            return NULL;
        default: return NULL;
    }
}

int cPacketQueueDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cPacketQueue *pp = (cPacketQueue *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cPacketQueueDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cPacketQueue *pp = (cPacketQueue *)object; (void)pp;
    switch (field) {
        case 0: int642string(pp->getBitLength(),resultbuf,bufsize); return true;
        case 1: int642string(pp->getByteLength(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cPacketQueueDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cPacketQueue *pp = (cPacketQueue *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cPacketQueueDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cPacketQueueDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cPacketQueue *pp = (cPacketQueue *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cHasherDescriptor : public cClassDescriptor
{
  public:
    cHasherDescriptor();
    virtual ~cHasherDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cHasherDescriptor)

cHasherDescriptor::cHasherDescriptor() : cClassDescriptor("cHasher", "")
{
}

cHasherDescriptor::~cHasherDescriptor()
{
}

bool cHasherDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cHasher *>(obj)!=NULL;
}

const char *cHasherDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cHasherDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cHasherDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        default: return 0;
    }
}

const char *cHasherDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "hash";
        default: return NULL;
    }
}

const char *cHasherDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        default: return NULL;
    }
}

const char *cHasherDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "str";
            if (!strcmp(propertyname,"hint")) return "The current hash value";
            return NULL;
        default: return NULL;
    }
}

int cHasherDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cHasher *pp = (cHasher *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cHasherDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cHasher *pp = (cHasher *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->str(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cHasherDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cHasher *pp = (cHasher *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cHasherDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cHasherDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cHasher *pp = (cHasher *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cSimulationDescriptor : public cClassDescriptor
{
  public:
    cSimulationDescriptor();
    virtual ~cSimulationDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cSimulationDescriptor)

cSimulationDescriptor::cSimulationDescriptor() : cClassDescriptor("cSimulation", "cNoncopyableOwnedObject")
{
}

cSimulationDescriptor::~cSimulationDescriptor()
{
}

bool cSimulationDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cSimulation *>(obj)!=NULL;
}

const char *cSimulationDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cSimulationDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int cSimulationDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 3: return 0;
        case 4: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 5: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 6: return FD_ISCOMPOUND | FD_ISPOINTER;
        default: return 0;
    }
}

const char *cSimulationDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "simTime";
        case 1: return "eventNumber";
        case 2: return "messageQueue";
        case 3: return "lastModuleId";
        case 4: return "systemModule";
        case 5: return "module";
        case 6: return "hasher";
        default: return NULL;
    }
}

const char *cSimulationDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "simtime_t";
        case 1: return "int64";
        case 2: return "cMessageHeap";
        case 3: return "int";
        case 4: return "cModule";
        case 5: return "cModule";
        case 6: return "cHasher";
        default: return NULL;
    }
}

const char *cSimulationDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "The current simulation time in seconds";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "The current event number -- counts from 0 up";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "Self-messages scheduled, and messages in transit";
            if (!strcmp(propertyname,"label")) return "futureEvents";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"group")) return "modules";
            if (!strcmp(propertyname,"hint")) return "The largest module ID issued so far";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"group")) return "modules";
            if (!strcmp(propertyname,"hint")) return "The top-level module";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"group")) return "modules";
            if (!strcmp(propertyname,"hint")) return "List of modules, indexed with module ID";
            if (!strcmp(propertyname,"label")) return "modules";
            if (!strcmp(propertyname,"sizeGetter")) return "getLastModuleId";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"hint")) return "Used for fingerprint calculation";
            return NULL;
        default: return NULL;
    }
}

int cSimulationDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cSimulation *pp = (cSimulation *)object; (void)pp;
    switch (field) {
        case 5: return pp->getLastModuleId();
        default: return 0;
    }
}

bool cSimulationDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cSimulation *pp = (cSimulation *)object; (void)pp;
    switch (field) {
        case 0: double2string(pp->getSimTime(),resultbuf,bufsize); return true;
        case 1: int642string(pp->getEventNumber(),resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->getMessageQueue(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: long2string(pp->getLastModuleId(),resultbuf,bufsize); return true;
        case 4: {std::stringstream out; out << pp->getSystemModule(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 5: {std::stringstream out; out << pp->getModule(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 6: {std::stringstream out; out << pp->getHasher(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cSimulationDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cSimulation *pp = (cSimulation *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cSimulationDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return "cMessageHeap"; break;
        case 4: return "cModule"; break;
        case 5: return "cModule"; break;
        case 6: return "cHasher"; break;
        default: return NULL;
    }
}

void *cSimulationDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cSimulation *pp = (cSimulation *)object; (void)pp;
    switch (field) {
        case 2: return (void *)static_cast<cObject *>(&pp->getMessageQueue()); break;
        case 4: return (void *)static_cast<cObject *>(pp->getSystemModule()); break;
        case 5: return (void *)static_cast<cObject *>(pp->getModule(i)); break;
        case 6: return (void *)(pp->getHasher()); break;
        default: return NULL;
    }
}

class cSchedulerDescriptor : public cClassDescriptor
{
  public:
    cSchedulerDescriptor();
    virtual ~cSchedulerDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cSchedulerDescriptor)

cSchedulerDescriptor::cSchedulerDescriptor() : cClassDescriptor("cScheduler", "cObject")
{
}

cSchedulerDescriptor::~cSchedulerDescriptor()
{
}

bool cSchedulerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cScheduler *>(obj)!=NULL;
}

const char *cSchedulerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cSchedulerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cSchedulerDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cSchedulerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cSchedulerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cSchedulerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cSchedulerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cScheduler *pp = (cScheduler *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cSchedulerDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cScheduler *pp = (cScheduler *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cSchedulerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cScheduler *pp = (cScheduler *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cSchedulerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cSchedulerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cScheduler *pp = (cScheduler *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cSequentialSchedulerDescriptor : public cClassDescriptor
{
  public:
    cSequentialSchedulerDescriptor();
    virtual ~cSequentialSchedulerDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cSequentialSchedulerDescriptor)

cSequentialSchedulerDescriptor::cSequentialSchedulerDescriptor() : cClassDescriptor("cSequentialScheduler", "cScheduler")
{
}

cSequentialSchedulerDescriptor::~cSequentialSchedulerDescriptor()
{
}

bool cSequentialSchedulerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cSequentialScheduler *>(obj)!=NULL;
}

const char *cSequentialSchedulerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cSequentialSchedulerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cSequentialSchedulerDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cSequentialSchedulerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cSequentialSchedulerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cSequentialSchedulerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cSequentialSchedulerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cSequentialScheduler *pp = (cSequentialScheduler *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cSequentialSchedulerDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cSequentialScheduler *pp = (cSequentialScheduler *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cSequentialSchedulerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cSequentialScheduler *pp = (cSequentialScheduler *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cSequentialSchedulerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cSequentialSchedulerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cSequentialScheduler *pp = (cSequentialScheduler *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cRealTimeSchedulerDescriptor : public cClassDescriptor
{
  public:
    cRealTimeSchedulerDescriptor();
    virtual ~cRealTimeSchedulerDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cRealTimeSchedulerDescriptor)

cRealTimeSchedulerDescriptor::cRealTimeSchedulerDescriptor() : cClassDescriptor("cRealTimeScheduler", "cScheduler")
{
}

cRealTimeSchedulerDescriptor::~cRealTimeSchedulerDescriptor()
{
}

bool cRealTimeSchedulerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cRealTimeScheduler *>(obj)!=NULL;
}

const char *cRealTimeSchedulerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cRealTimeSchedulerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cRealTimeSchedulerDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *cRealTimeSchedulerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cRealTimeSchedulerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *cRealTimeSchedulerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int cRealTimeSchedulerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cRealTimeScheduler *pp = (cRealTimeScheduler *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cRealTimeSchedulerDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cRealTimeScheduler *pp = (cRealTimeScheduler *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool cRealTimeSchedulerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cRealTimeScheduler *pp = (cRealTimeScheduler *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cRealTimeSchedulerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cRealTimeSchedulerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cRealTimeScheduler *pp = (cRealTimeScheduler *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cTopology_NodeDescriptor : public cClassDescriptor
{
  public:
    cTopology_NodeDescriptor();
    virtual ~cTopology_NodeDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cTopology_NodeDescriptor)

cTopology_NodeDescriptor::cTopology_NodeDescriptor() : cClassDescriptor("cTopology_Node", "")
{
}

cTopology_NodeDescriptor::~cTopology_NodeDescriptor()
{
}

bool cTopology_NodeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cTopology_Node *>(obj)!=NULL;
}

const char *cTopology_NodeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTopology_NodeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int cTopology_NodeDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 2: return 0;
        case 3: return 0;
        case 4: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER;
        case 5: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER;
        case 6: return 0;
        case 7: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER;
        default: return 0;
    }
}

const char *cTopology_NodeDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "moduleId";
        case 1: return "module";
        case 2: return "weight";
        case 3: return "enabled";
        case 4: return "inLink";
        case 5: return "outLink";
        case 6: return "distanceToTarget";
        case 7: return "path";
        default: return NULL;
    }
}

const char *cTopology_NodeDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "cModule";
        case 2: return "double";
        case 3: return "bool";
        case 4: return "cTopology_LinkIn";
        case 5: return "cTopology_LinkIn";
        case 6: return "double";
        case 7: return "cTopology_LinkOut";
        default: return NULL;
    }
}

const char *cTopology_NodeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "ID of the module this node corresponds to";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "The module this node corresponds to";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "Node weight -- affects graph algorithms such as shortest path";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"getter")) return "isEnabled";
            if (!strcmp(propertyname,"hint")) return "Node state -- affects graph algorithms such as shortest path";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"getter")) return "getLinkIn";
            if (!strcmp(propertyname,"hint")) return "Incoming links of this graph node";
            if (!strcmp(propertyname,"sizeGetter")) return "getNumInLinks";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"getter")) return "getLinkOut";
            if (!strcmp(propertyname,"hint")) return "Outgoing links of this graph node";
            if (!strcmp(propertyname,"sizeGetter")) return "getNumOutLinks";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"group")) return "shortest path";
            if (!strcmp(propertyname,"hint")) return "After running a shortest path algorithm: distance to the target node";
            return NULL;
        case 7:
            if (!strcmp(propertyname,"group")) return "shortest path";
            if (!strcmp(propertyname,"hint")) return "The next link of the shortest path or paths towards the target node";
            if (!strcmp(propertyname,"sizeGetter")) return "getNumPaths";
            return NULL;
        default: return NULL;
    }
}

int cTopology_NodeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Node *pp = (cTopology_Node *)object; (void)pp;
    switch (field) {
        case 4: return pp->getNumInLinks();
        case 5: return pp->getNumOutLinks();
        case 7: return pp->getNumPaths();
        default: return 0;
    }
}

bool cTopology_NodeDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Node *pp = (cTopology_Node *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getModuleId(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getModule(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: double2string(pp->getWeight(),resultbuf,bufsize); return true;
        case 3: bool2string(pp->isEnabled(),resultbuf,bufsize); return true;
        case 4: {std::stringstream out; out << pp->getLinkIn(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 5: {std::stringstream out; out << pp->getLinkOut(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 6: double2string(pp->getDistanceToTarget(),resultbuf,bufsize); return true;
        case 7: {std::stringstream out; out << pp->getPath(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cTopology_NodeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Node *pp = (cTopology_Node *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cTopology_NodeDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "cModule"; break;
        case 4: return "cTopology_LinkIn"; break;
        case 5: return "cTopology_LinkIn"; break;
        case 7: return "cTopology_LinkOut"; break;
        default: return NULL;
    }
}

void *cTopology_NodeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Node *pp = (cTopology_Node *)object; (void)pp;
    switch (field) {
        case 1: return (void *)static_cast<cObject *>(pp->getModule()); break;
        case 4: return (void *)(pp->getLinkIn(i)); break;
        case 5: return (void *)(pp->getLinkOut(i)); break;
        case 7: return (void *)(pp->getPath(i)); break;
        default: return NULL;
    }
}

class cTopology_LinkDescriptor : public cClassDescriptor
{
  public:
    cTopology_LinkDescriptor();
    virtual ~cTopology_LinkDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cTopology_LinkDescriptor)

cTopology_LinkDescriptor::cTopology_LinkDescriptor() : cClassDescriptor("cTopology_Link", "")
{
}

cTopology_LinkDescriptor::~cTopology_LinkDescriptor()
{
}

bool cTopology_LinkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cTopology_Link *>(obj)!=NULL;
}

const char *cTopology_LinkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTopology_LinkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int cTopology_LinkDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        default: return 0;
    }
}

const char *cTopology_LinkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "weight";
        case 1: return "enabled";
        default: return NULL;
    }
}

const char *cTopology_LinkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "double";
        case 1: return "bool";
        default: return NULL;
    }
}

const char *cTopology_LinkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "Link weight -- affects graph algorithms such as shortest path";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"getter")) return "isEnabled";
            if (!strcmp(propertyname,"hint")) return "Link state -- affects graph algorithms such as shortest path";
            return NULL;
        default: return NULL;
    }
}

int cTopology_LinkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Link *pp = (cTopology_Link *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cTopology_LinkDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Link *pp = (cTopology_Link *)object; (void)pp;
    switch (field) {
        case 0: double2string(pp->getWeight(),resultbuf,bufsize); return true;
        case 1: bool2string(pp->isEnabled(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cTopology_LinkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Link *pp = (cTopology_Link *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cTopology_LinkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cTopology_LinkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Link *pp = (cTopology_Link *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class cTopology_LinkInDescriptor : public cClassDescriptor
{
  public:
    cTopology_LinkInDescriptor();
    virtual ~cTopology_LinkInDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cTopology_LinkInDescriptor)

cTopology_LinkInDescriptor::cTopology_LinkInDescriptor() : cClassDescriptor("cTopology_LinkIn", "cTopology_Link")
{
}

cTopology_LinkInDescriptor::~cTopology_LinkInDescriptor()
{
}

bool cTopology_LinkInDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cTopology_LinkIn *>(obj)!=NULL;
}

const char *cTopology_LinkInDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTopology_LinkInDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int cTopology_LinkInDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISPOINTER;
        case 1: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        case 2: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *cTopology_LinkInDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "remoteNode";
        case 1: return "remoteGate";
        case 2: return "localGate";
        default: return NULL;
    }
}

const char *cTopology_LinkInDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cTopology_Node";
        case 1: return "cGate";
        case 2: return "cGate";
        default: return NULL;
    }
}

const char *cTopology_LinkInDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "The node at the remote end of this connection";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "The gate at the remote end of this connection";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "The gate at the local end of this connection";
            return NULL;
        default: return NULL;
    }
}

int cTopology_LinkInDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkIn *pp = (cTopology_LinkIn *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cTopology_LinkInDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkIn *pp = (cTopology_LinkIn *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRemoteNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getRemoteGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->getLocalGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cTopology_LinkInDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkIn *pp = (cTopology_LinkIn *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cTopology_LinkInDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cTopology_Node"; break;
        case 1: return "cGate"; break;
        case 2: return "cGate"; break;
        default: return NULL;
    }
}

void *cTopology_LinkInDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkIn *pp = (cTopology_LinkIn *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(pp->getRemoteNode()); break;
        case 1: return (void *)static_cast<cObject *>(pp->getRemoteGate()); break;
        case 2: return (void *)static_cast<cObject *>(pp->getLocalGate()); break;
        default: return NULL;
    }
}

class cTopology_LinkOutDescriptor : public cClassDescriptor
{
  public:
    cTopology_LinkOutDescriptor();
    virtual ~cTopology_LinkOutDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cTopology_LinkOutDescriptor)

cTopology_LinkOutDescriptor::cTopology_LinkOutDescriptor() : cClassDescriptor("cTopology_LinkOut", "cTopology_Link")
{
}

cTopology_LinkOutDescriptor::~cTopology_LinkOutDescriptor()
{
}

bool cTopology_LinkOutDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cTopology_LinkOut *>(obj)!=NULL;
}

const char *cTopology_LinkOutDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTopology_LinkOutDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int cTopology_LinkOutDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISPOINTER;
        case 1: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        case 2: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *cTopology_LinkOutDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "remoteNode";
        case 1: return "remoteGate";
        case 2: return "localGate";
        default: return NULL;
    }
}

const char *cTopology_LinkOutDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cTopology_Node";
        case 1: return "cGate";
        case 2: return "cGate";
        default: return NULL;
    }
}

const char *cTopology_LinkOutDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "The node at the remote end of this connection";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "The gate at the remote end of this connection";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "The gate at the local end of this connection";
            return NULL;
        default: return NULL;
    }
}

int cTopology_LinkOutDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkOut *pp = (cTopology_LinkOut *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cTopology_LinkOutDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkOut *pp = (cTopology_LinkOut *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRemoteNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getRemoteGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->getLocalGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cTopology_LinkOutDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkOut *pp = (cTopology_LinkOut *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cTopology_LinkOutDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cTopology_Node"; break;
        case 1: return "cGate"; break;
        case 2: return "cGate"; break;
        default: return NULL;
    }
}

void *cTopology_LinkOutDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkOut *pp = (cTopology_LinkOut *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(pp->getRemoteNode()); break;
        case 1: return (void *)static_cast<cObject *>(pp->getRemoteGate()); break;
        case 2: return (void *)static_cast<cObject *>(pp->getLocalGate()); break;
        default: return NULL;
    }
}

class cTopologyDescriptor : public cClassDescriptor
{
  public:
    cTopologyDescriptor();
    virtual ~cTopologyDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cTopologyDescriptor)

cTopologyDescriptor::cTopologyDescriptor() : cClassDescriptor("cTopology", "cOwnedObject")
{
}

cTopologyDescriptor::~cTopologyDescriptor()
{
}

bool cTopologyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cTopology *>(obj)!=NULL;
}

const char *cTopologyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTopologyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int cTopologyDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER;
        default: return 0;
    }
}

const char *cTopologyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "numNodes";
        case 1: return "node";
        default: return NULL;
    }
}

const char *cTopologyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "cTopology_Node";
        default: return NULL;
    }
}

const char *cTopologyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "Number of nodes in this topology object";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "List of nodes in this topology object";
            if (!strcmp(propertyname,"sizeGetter")) return "getNumNodes";
            return NULL;
        default: return NULL;
    }
}

int cTopologyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTopology *pp = (cTopology *)object; (void)pp;
    switch (field) {
        case 1: return pp->getNumNodes();
        default: return 0;
    }
}

bool cTopologyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTopology *pp = (cTopology *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getNumNodes(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getNode(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cTopologyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTopology *pp = (cTopology *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cTopologyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "cTopology_Node"; break;
        default: return NULL;
    }
}

void *cTopologyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTopology *pp = (cTopology *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(pp->getNode(i)); break;
        default: return NULL;
    }
}

class cXMLElementDescriptor : public cClassDescriptor
{
  public:
    cXMLElementDescriptor();
    virtual ~cXMLElementDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(cXMLElementDescriptor)

cXMLElementDescriptor::cXMLElementDescriptor() : cClassDescriptor("cXMLElement", "cObject")
{
}

cXMLElementDescriptor::~cXMLElementDescriptor()
{
}

bool cXMLElementDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<cXMLElement *>(obj)!=NULL;
}

const char *cXMLElementDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cXMLElementDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int cXMLElementDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return 0;
        case 5: return 0;
        default: return 0;
    }
}

const char *cXMLElementDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "tagName";
        case 1: return "nodeValue";
        case 2: return "sourceLocation";
        case 3: return "hasAttributes";
        case 4: return "hasChildren";
        case 5: return "detailedInfo";
        default: return NULL;
    }
}

const char *cXMLElementDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "string";
        case 2: return "string";
        case 3: return "bool";
        case 4: return "bool";
        case 5: return "string";
        default: return NULL;
    }
}

const char *cXMLElementDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "XML element tag";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "Contents of text node inside this XML element";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "Location this XML element was parsed from";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"getter")) return "hasAttributes";
            if (!strcmp(propertyname,"hint")) return "Whether this XML element has attributes";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"getter")) return "hasChildren";
            if (!strcmp(propertyname,"hint")) return "Whether this XML element has child elements";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"getter")) return "detailedInfo";
            if (!strcmp(propertyname,"label")) return "contents";
            return NULL;
        default: return NULL;
    }
}

int cXMLElementDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cXMLElement *pp = (cXMLElement *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool cXMLElementDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cXMLElement *pp = (cXMLElement *)object; (void)pp;
    switch (field) {
        case 0: oppstring2string(pp->getTagName(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->getNodeValue(),resultbuf,bufsize); return true;
        case 2: oppstring2string(pp->getSourceLocation(),resultbuf,bufsize); return true;
        case 3: bool2string(pp->hasAttributes(),resultbuf,bufsize); return true;
        case 4: bool2string(pp->hasChildren(),resultbuf,bufsize); return true;
        case 5: oppstring2string(pp->detailedInfo(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cXMLElementDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cXMLElement *pp = (cXMLElement *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *cXMLElementDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *cXMLElementDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cXMLElement *pp = (cXMLElement *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


