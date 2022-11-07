//
// Generated file, do not edit! Created by opp_msgc 4.0 from EtherApp.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "EtherApp_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(EtherAppReq);

EtherAppReq::EtherAppReq(const char *name, int kind) : cPacket(name,kind)
{
    this->requestId_var = 0;
    this->responseBytes_var = 0;
}

EtherAppReq::EtherAppReq(const EtherAppReq& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

EtherAppReq::~EtherAppReq()
{
}

EtherAppReq& EtherAppReq::operator=(const EtherAppReq& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->requestId_var = other.requestId_var;
    this->responseBytes_var = other.responseBytes_var;
    return *this;
}

void EtherAppReq::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->requestId_var);
    doPacking(b,this->responseBytes_var);
}

void EtherAppReq::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->requestId_var);
    doUnpacking(b,this->responseBytes_var);
}

long EtherAppReq::getRequestId() const
{
    return requestId_var;
}

void EtherAppReq::setRequestId(long requestId_var)
{
    this->requestId_var = requestId_var;
}

long EtherAppReq::getResponseBytes() const
{
    return responseBytes_var;
}

void EtherAppReq::setResponseBytes(long responseBytes_var)
{
    this->responseBytes_var = responseBytes_var;
}

class EtherAppReqDescriptor : public cClassDescriptor
{
  public:
    EtherAppReqDescriptor();
    virtual ~EtherAppReqDescriptor();

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

Register_ClassDescriptor(EtherAppReqDescriptor);

EtherAppReqDescriptor::EtherAppReqDescriptor() : cClassDescriptor("EtherAppReq", "cPacket")
{
}

EtherAppReqDescriptor::~EtherAppReqDescriptor()
{
}

bool EtherAppReqDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<EtherAppReq *>(obj)!=NULL;
}

const char *EtherAppReqDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int EtherAppReqDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int EtherAppReqDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *EtherAppReqDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "requestId";
        case 1: return "responseBytes";
        default: return NULL;
    }
}

const char *EtherAppReqDescriptor::getFieldTypeString(void *object, int field) const
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
        default: return NULL;
    }
}

const char *EtherAppReqDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int EtherAppReqDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    EtherAppReq *pp = (EtherAppReq *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool EtherAppReqDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    EtherAppReq *pp = (EtherAppReq *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getRequestId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getResponseBytes(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool EtherAppReqDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    EtherAppReq *pp = (EtherAppReq *)object; (void)pp;
    switch (field) {
        case 0: pp->setRequestId(string2long(value)); return true;
        case 1: pp->setResponseBytes(string2long(value)); return true;
        default: return false;
    }
}

const char *EtherAppReqDescriptor::getFieldStructName(void *object, int field) const
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

void *EtherAppReqDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    EtherAppReq *pp = (EtherAppReq *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(EtherAppResp);

EtherAppResp::EtherAppResp(const char *name, int kind) : cPacket(name,kind)
{
    this->requestId_var = 0;
    this->numFrames_var = 0;
}

EtherAppResp::EtherAppResp(const EtherAppResp& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

EtherAppResp::~EtherAppResp()
{
}

EtherAppResp& EtherAppResp::operator=(const EtherAppResp& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->requestId_var = other.requestId_var;
    this->numFrames_var = other.numFrames_var;
    return *this;
}

void EtherAppResp::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->requestId_var);
    doPacking(b,this->numFrames_var);
}

void EtherAppResp::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->requestId_var);
    doUnpacking(b,this->numFrames_var);
}

int EtherAppResp::getRequestId() const
{
    return requestId_var;
}

void EtherAppResp::setRequestId(int requestId_var)
{
    this->requestId_var = requestId_var;
}

int EtherAppResp::getNumFrames() const
{
    return numFrames_var;
}

void EtherAppResp::setNumFrames(int numFrames_var)
{
    this->numFrames_var = numFrames_var;
}

class EtherAppRespDescriptor : public cClassDescriptor
{
  public:
    EtherAppRespDescriptor();
    virtual ~EtherAppRespDescriptor();

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

Register_ClassDescriptor(EtherAppRespDescriptor);

EtherAppRespDescriptor::EtherAppRespDescriptor() : cClassDescriptor("EtherAppResp", "cPacket")
{
}

EtherAppRespDescriptor::~EtherAppRespDescriptor()
{
}

bool EtherAppRespDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<EtherAppResp *>(obj)!=NULL;
}

const char *EtherAppRespDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int EtherAppRespDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int EtherAppRespDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *EtherAppRespDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "requestId";
        case 1: return "numFrames";
        default: return NULL;
    }
}

const char *EtherAppRespDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "int";
        default: return NULL;
    }
}

const char *EtherAppRespDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int EtherAppRespDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    EtherAppResp *pp = (EtherAppResp *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool EtherAppRespDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    EtherAppResp *pp = (EtherAppResp *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getRequestId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getNumFrames(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool EtherAppRespDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    EtherAppResp *pp = (EtherAppResp *)object; (void)pp;
    switch (field) {
        case 0: pp->setRequestId(string2long(value)); return true;
        case 1: pp->setNumFrames(string2long(value)); return true;
        default: return false;
    }
}

const char *EtherAppRespDescriptor::getFieldStructName(void *object, int field) const
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

void *EtherAppRespDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    EtherAppResp *pp = (EtherAppResp *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


