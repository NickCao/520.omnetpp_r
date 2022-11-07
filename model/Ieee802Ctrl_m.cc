//
// Generated file, do not edit! Created by opp_msgc 4.0 from Ieee802Ctrl.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee802Ctrl_m.h"

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




EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("Ieee802MessageKind");
    if (!e) enums.getInstance()->add(e = new cEnum("Ieee802MessageKind"));
    e->insert(IEEE802CTRL_DATA, "IEEE802CTRL_DATA");
    e->insert(IEEE802CTRL_REGISTER_DSAP, "IEEE802CTRL_REGISTER_DSAP");
    e->insert(IEEE802CTRL_DEREGISTER_DSAP, "IEEE802CTRL_DEREGISTER_DSAP");
    e->insert(IEEE802CTRL_SENDPAUSE, "IEEE802CTRL_SENDPAUSE");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("SAPCode");
    if (!e) enums.getInstance()->add(e = new cEnum("SAPCode"));
    e->insert(SAP_IBM_SNA, "SAP_IBM_SNA");
    e->insert(SAP_IP, "SAP_IP");
    e->insert(SAP_3COM, "SAP_3COM");
    e->insert(SAP_SNAP, "SAP_SNAP");
    e->insert(SAP_BANYAN, "SAP_BANYAN");
    e->insert(SAP_NOVELL_IPX, "SAP_NOVELL_IPX");
    e->insert(SAP_LAN_MANAGER, "SAP_LAN_MANAGER");
    e->insert(SAP_CLNS, "SAP_CLNS");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("EtherType");
    if (!e) enums.getInstance()->add(e = new cEnum("EtherType"));
    e->insert(ETHERTYPE_IP, "ETHERTYPE_IP");
    e->insert(ETHERTYPE_ARP, "ETHERTYPE_ARP");
    e->insert(ETHERTYPE_RARP, "ETHERTYPE_RARP");
);

Register_Class(Ieee802Ctrl);

Ieee802Ctrl::Ieee802Ctrl() : cObject()
{
    this->etherType_var = 0;
    this->ssap_var = 0;
    this->dsap_var = 0;
    this->pauseUnits_var = 0;
    this->inputPort_var = 0;
}

Ieee802Ctrl::Ieee802Ctrl(const Ieee802Ctrl& other) : cObject()
{
    operator=(other);
}

Ieee802Ctrl::~Ieee802Ctrl()
{
}

Ieee802Ctrl& Ieee802Ctrl::operator=(const Ieee802Ctrl& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->src_var = other.src_var;
    this->dest_var = other.dest_var;
    this->etherType_var = other.etherType_var;
    this->ssap_var = other.ssap_var;
    this->dsap_var = other.dsap_var;
    this->pauseUnits_var = other.pauseUnits_var;
    this->inputPort_var = other.inputPort_var;
    return *this;
}

void Ieee802Ctrl::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->src_var);
    doPacking(b,this->dest_var);
    doPacking(b,this->etherType_var);
    doPacking(b,this->ssap_var);
    doPacking(b,this->dsap_var);
    doPacking(b,this->pauseUnits_var);
    doPacking(b,this->inputPort_var);
}

void Ieee802Ctrl::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->src_var);
    doUnpacking(b,this->dest_var);
    doUnpacking(b,this->etherType_var);
    doUnpacking(b,this->ssap_var);
    doUnpacking(b,this->dsap_var);
    doUnpacking(b,this->pauseUnits_var);
    doUnpacking(b,this->inputPort_var);
}

MACAddress& Ieee802Ctrl::getSrc()
{
    return src_var;
}

void Ieee802Ctrl::setSrc(const MACAddress& src_var)
{
    this->src_var = src_var;
}

MACAddress& Ieee802Ctrl::getDest()
{
    return dest_var;
}

void Ieee802Ctrl::setDest(const MACAddress& dest_var)
{
    this->dest_var = dest_var;
}

int Ieee802Ctrl::getEtherType() const
{
    return etherType_var;
}

void Ieee802Ctrl::setEtherType(int etherType_var)
{
    this->etherType_var = etherType_var;
}

int Ieee802Ctrl::getSsap() const
{
    return ssap_var;
}

void Ieee802Ctrl::setSsap(int ssap_var)
{
    this->ssap_var = ssap_var;
}

int Ieee802Ctrl::getDsap() const
{
    return dsap_var;
}

void Ieee802Ctrl::setDsap(int dsap_var)
{
    this->dsap_var = dsap_var;
}

int Ieee802Ctrl::getPauseUnits() const
{
    return pauseUnits_var;
}

void Ieee802Ctrl::setPauseUnits(int pauseUnits_var)
{
    this->pauseUnits_var = pauseUnits_var;
}

int Ieee802Ctrl::getInputPort() const
{
    return inputPort_var;
}

void Ieee802Ctrl::setInputPort(int inputPort_var)
{
    this->inputPort_var = inputPort_var;
}

class Ieee802CtrlDescriptor : public cClassDescriptor
{
  public:
    Ieee802CtrlDescriptor();
    virtual ~Ieee802CtrlDescriptor();

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

Register_ClassDescriptor(Ieee802CtrlDescriptor);

Ieee802CtrlDescriptor::Ieee802CtrlDescriptor() : cClassDescriptor("Ieee802Ctrl", "cObject")
{
}

Ieee802CtrlDescriptor::~Ieee802CtrlDescriptor()
{
}

bool Ieee802CtrlDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802Ctrl *>(obj)!=NULL;
}

const char *Ieee802CtrlDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802CtrlDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int Ieee802CtrlDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISCOMPOUND;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *Ieee802CtrlDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "src";
        case 1: return "dest";
        case 2: return "etherType";
        case 3: return "ssap";
        case 4: return "dsap";
        case 5: return "pauseUnits";
        case 6: return "inputPort";
        default: return NULL;
    }
}

const char *Ieee802CtrlDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "MACAddress";
        case 1: return "MACAddress";
        case 2: return "int";
        case 3: return "int";
        case 4: return "int";
        case 5: return "int";
        case 6: return "int";
        default: return NULL;
    }
}

const char *Ieee802CtrlDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802CtrlDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802Ctrl *pp = (Ieee802Ctrl *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Ieee802CtrlDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802Ctrl *pp = (Ieee802Ctrl *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getDest(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: long2string(pp->getEtherType(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getSsap(),resultbuf,bufsize); return true;
        case 4: long2string(pp->getDsap(),resultbuf,bufsize); return true;
        case 5: long2string(pp->getPauseUnits(),resultbuf,bufsize); return true;
        case 6: long2string(pp->getInputPort(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool Ieee802CtrlDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802Ctrl *pp = (Ieee802Ctrl *)object; (void)pp;
    switch (field) {
        case 2: pp->setEtherType(string2long(value)); return true;
        case 3: pp->setSsap(string2long(value)); return true;
        case 4: pp->setDsap(string2long(value)); return true;
        case 5: pp->setPauseUnits(string2long(value)); return true;
        case 6: pp->setInputPort(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee802CtrlDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "MACAddress"; break;
        case 1: return "MACAddress"; break;
        default: return NULL;
    }
}

void *Ieee802CtrlDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802Ctrl *pp = (Ieee802Ctrl *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        case 1: return (void *)(&pp->getDest()); break;
        default: return NULL;
    }
}


