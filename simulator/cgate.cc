//========================================================================
//  CGATE.CC - part of
//
//                 OMNeT++/OMNEST
//              Discrete System Simulation in C++
//
//   Member functions of
//    cGate      : a module gate
//
//  Author: Andras Varga
//
//========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#include <math.h>            // pow
#include <stdio.h>           // sprintf
#include <string.h>          // strcpy
#include "cmessage.h"
#include "cmodule.h"
#include "carray.h"
#include "cenvir.h"
#include "csimulation.h"
#include "globals.h"
#include "cgate.h"
#include "cchannel.h"
#include "cdataratechannel.h"
#include "cdisplaystring.h"
#include "ccomponenttype.h"
#include "stringutil.h"
#include "stringpool.h"
#include "simutil.h"

USING_NAMESPACE

using std::ostream;


/*
 * Interpretation of gate Ids (32-bit int):
 *     H (12+ bits) + L (20 bits)
 *
 * When H=0: nonvector gate
 *     L/2 = descIndex
 *     L&1 = 0: inputgate, 1: outputgate
 *   note: this allows ~500,000 scalar gates
 *
 * When H>0: vector gate
 *     H = descIndex+1  (so that H>0)
 *     bit19 of L = input (0) or output (1)
 *     bits0..18 of L = array index into inputgate[] or outputgate[]
 *   note: gateId must not be negative (for historical reasons, -1 is used as "none"),
 *         so H is effectively 11 bits, allowing ~2046 vector gates max.
 *   note2: 19 bits allow a maximum vector size of ~500,000
 *
 * Mostly affected methods are cGate::getId() and cModule::gate(int id).
 */


// non-refcounting pool for gate fullnames
static CommonStringPool gateFullnamePool;


cGate::Name::Name(const char *name, Type type)
{
    this->name = name;
    this->type = type;
    if (type==cGate::INOUT) {
        namei = opp_concat(name, "$i");
        nameo = opp_concat(name, "$o");
    }
}

bool cGate::Name::operator<(const Name& other) const
{
    int d = opp_strcmp(name.c_str(), other.name.c_str());
    if (d<0)
        return true;
    else if (d>0)
        return false;
    else
        return type < other.type;
}

cGate::cGate()
{
    desc = NULL;
    pos = 0;
    prevgatep = nextgatep = NULL;
    channelp = NULL;
}

cGate::~cGate()
{
    dropAndDelete(channelp);
}

void cGate::clearFullnamePool()
{
    gateFullnamePool.clear();
}

void cGate::forEachChild(cVisitor *v)
{
    if (channelp)
        v->visit(channelp);
}

const char *cGate::getBaseName() const
{
    return desc->namep->name.c_str();
}

const char *cGate::getName() const
{
    if (desc->namep->type==INOUT)
        return desc->isInput(this) ? desc->namep->namei.c_str() : desc->namep->nameo.c_str();
    else
        return desc->namep->name.c_str();
}

const char *cGate::getFullName() const
{
    // if not in a vector, normal getName() will do
    if (!isVector())
        return getName();

    // otherwise, produce fullname in a temp buffer, and return its stringpooled copy
    // note: this implementation assumes that this method will be called infrequently
    // (ie. we reproduce the string every time).
    if (opp_strlen(getName()) > 100)
        throw cRuntimeError(this, "getFullName(): gate name too long, should be under 100 characters");

    static char tmp[128];
    strcpy(tmp, getName());
    opp_appendindex(tmp, getIndex());
    return gateFullnamePool.get(tmp); // non-refcounted stringpool
}

std::string cGate::info() const
{
    const char *arrow;
    cGate const *g;
    cGate const *conng;
    cChannel const *chan;

    if (getType()==OUTPUT)
        {arrow = "--> "; g = nextgatep; conng = this; chan = channelp; }
    else if (getType()==INPUT)
        {arrow = "<-- "; g = prevgatep; conng = prevgatep; chan = prevgatep ? prevgatep->channelp : NULL;}
    else
        ASSERT(0);  // a cGate is never INOUT

    // append useful info to buf
    if (!g)
        return "not connected";

    std::stringstream out;
    out << arrow;

    out << (g->getOwnerModule()==getOwnerModule()->getParentModule() ? "<parent>" : g->getOwnerModule()->getFullName());
    out << "." << g->getFullName();

    if (chan)
        out << ", " << chan->getComponentType()->getFullName() << " " << chan->info();

    return out.str();
}

cObject *cGate::getOwner() const
{
    // note: this function cannot go inline because of circular dependencies
    return desc->ownerp;
}

cModule *cGate::getOwnerModule() const
{
    return desc->ownerp;
}

int cGate::getId() const
{
    int descIndex = desc - desc->ownerp->descv;
    int id;
    if (!desc->isVector())
        id = (descIndex<<1)|(pos&1);
    else
        // note: we use descIndex+1 otherwise h could remain zero after <<LBITS
        id = ((descIndex+1)<<GATEID_LBITS) | ((pos&1)<<(GATEID_LBITS-1)) | (pos>>2);
    return id;
}

const char *cGate::getTypeName(Type t)
{
    switch (t) {
        case INPUT: return "input";
        case OUTPUT: return "output";
        case INOUT: return "inout";
        default: return "(unknown type)";
    }
}

cProperties *cGate::getProperties() const
{
    cComponent *component = check_and_cast<cComponent *>(getOwner());
    cComponentType *componentType = component->getComponentType();
    cProperties *props = componentType->getGateProperties(getBaseName());
    return props;
}

cChannel *cGate::connectTo(cGate *g, cChannel *chan, bool leaveUninitialized)
{
    if (nextgatep)
        throw cRuntimeError(this, "connectTo(): gate already connected");
    if (!g)
        throw cRuntimeError(this, "connectTo(): destination gate cannot be NULL pointer");
    if (g->prevgatep)
        throw cRuntimeError(this, "connectTo(): destination gate already connected");

    // build new connection
    nextgatep = g;
    nextgatep->prevgatep = this;
    if (chan)
        installChannel(chan);

    checkChannels();

    EVCB.connectionCreated(this);

    // initialize the channel here, to simplify dynamic connection creation.
    // Heuristics: if parent module is not yet initialized, we expect that
    // this channel will be initialized as part of it, so don't do it here;
    // otherwise initialize the channel now.
    if (chan && !leaveUninitialized && (!chan->getParentModule() || chan->getParentModule()->initialized()))
        chan->callInitialize();

    return chan;
}

void cGate::installChannel(cChannel *chan)
{
    ASSERT(channelp==NULL && chan!=NULL);
    channelp = chan;
    channelp->setSourceGate(this);
    take(channelp);
}

void cGate::disconnect()
{
    if (!nextgatep) return;

    // notify envir that old conn gets removed
    EVCB.connectionDeleted(this);

    // remove connection
    nextgatep->prevgatep = NULL;
    nextgatep = NULL;

    // and channel object
    dropAndDelete(channelp);
    channelp = NULL;
}

void cGate::checkChannels() const
{
    int n = 0;
    for (const cGate *g=getPathStartGate(); g->nextgatep!=NULL; g=g->nextgatep)
        if (g->channelp && g->channelp->isTransmissionChannel())
            n++;
    if (n>1)
        throw cRuntimeError("More than one channel with data rate found in the "
                            "connection path between gates %s and %s",
                            getPathStartGate()->getFullPath().c_str(),
                            getPathEndGate()->getFullPath().c_str());
}

cChannel *cGate::reconnectWith(cChannel *channel, bool leaveUninitialized)
{
    cGate *otherGate = getNextGate();
    if (!otherGate)
        throw cRuntimeError(this, "reconnectWith(): gate must be already connected");
    disconnect();
    return connectTo(otherGate, channel, leaveUninitialized);
}

cGate *cGate::getPathStartGate() const
{
    const cGate *g;
    for (g=this; g->prevgatep!=NULL; g=g->prevgatep);
    return const_cast<cGate *>(g);
}

cGate *cGate::getPathEndGate() const
{
    const cGate *g;
    for (g=this; g->nextgatep!=NULL; g=g->nextgatep);
    return const_cast<cGate *>(g);
}

void cGate::setDeliverOnReceptionStart(bool d)
{
    if (!getOwnerModule()->isSimple())
        throw cRuntimeError(this, "setDeliverOnReceptionStart() may only be invoked on a simple module gate");
    if (getType() != INPUT)
        throw cRuntimeError(this, "setDeliverOnReceptionStart() may only be invoked on an input gate");

    // set b1 on pos
    if (d)
        pos|=2;
    else
        pos&=~2;
}

bool cGate::deliver(cMessage *msg, simtime_t t)
{
    if (nextgatep==NULL)
    {
        getOwnerModule()->arrived(msg, this, t);
        return true;
    }
    else
    {
        if (channelp)
        {
            if (!channelp->initialized())
                throw cRuntimeError(channelp, "Channel not initialized (did you forget to invoke "
                                              "callInitialize() for a dynamically created channel or "
                                              "a dynamically created compound module that contains it?)");
            return channelp->deliver(msg, t);
        }
        else
        {
            EVCB.messageSendHop(msg, this);
            return nextgatep->deliver(msg, t);
        }
    }
}

cChannel *cGate::getTransmissionChannel() const
{
    for (const cGate *g=this; g->nextgatep!=NULL; g=g->nextgatep)
        if (g->channelp && g->channelp->isTransmissionChannel())
            return g->channelp;

    // datarate channel not found, try to issue a helpful error message
    if (nextgatep)
        throw cRuntimeError("No datarate channel found in the connection path "
                            "between gates %s and %s", getFullPath().c_str(),
                            getPathEndGate()->getFullPath().c_str());
    else if (getType()==OUTPUT)
        throw cRuntimeError("No datarate channel found: gate %s is not connected",
                            getFullPath().c_str());
    else
        throw cRuntimeError(this, "getTransmissionChannel(): cannot be invoked on a "
                            "simple module input gate (or a compound module "
                            "input gate which is not connected on the inside)");
}

bool cGate::isBusy() const
{
    return getTransmissionChannel()->isBusy();
}

simtime_t cGate::getTransmissionFinishTime() const
{
    return getTransmissionChannel()->getTransmissionFinishTime();
}

bool cGate::pathContains(cModule *mod, int gate)
{
    cGate *g;

    for (g=this; g!=NULL; g=g->prevgatep)
        if (g->getOwnerModule()==mod && (gate==-1 || g->getId()==gate))
            return true;
    for (g=nextgatep; g!=NULL; g=g->nextgatep)
        if (g->getOwnerModule()==mod && (gate==-1 || g->getId()==gate))
            return true;
    return false;
}

bool cGate::isConnectedOutside() const
{
    if (getType()==INPUT)
        return prevgatep!=NULL;
    else
        return nextgatep!=NULL;
}

bool cGate::isConnectedInside() const
{
    if (getType()==INPUT)
        return nextgatep!=NULL;
    else
        return prevgatep!=NULL;
}

bool cGate::isConnected() const
{
    // for compound modules, both inside and outside must be non-NULL,
    // for simple modules, only check outside.
    if (!getOwnerModule()->isSimple())
        return prevgatep!=NULL && nextgatep!=NULL;
    else
        return isConnectedOutside();
}

bool cGate::isPathOK() const
{
    return getPathStartGate()->getOwnerModule()->isSimple() &&
           getPathEndGate()->getOwnerModule()->isSimple();
}

cDisplayString& cGate::getDisplayString()
{
    if (!getChannel())
    {
        installChannel(cIdealChannel::create("channel"));
        channelp->callInitialize();
    }
    return getChannel()->getDisplayString();
}

void cGate::setDisplayString(const char *dispstr)
{
    getDisplayString().set(dispstr);
}

