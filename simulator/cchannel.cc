//========================================================================
//  CCHANNEL.CC - part of
//
//                 OMNeT++/OMNEST
//              Discrete System Simulation in C++
//
//   Member functions of
//    cChannel : channel class
//
//========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#include "cchannel.h"
#include "cpar.h"
#include "cgate.h"
#include "cmessage.h"
#include "cmodule.h"
#include "cenvir.h"
#include "csimulation.h"
#include "globals.h"
#include "cexception.h"

#ifdef WITH_PARSIM
#include "ccommbuffer.h"
#endif

USING_NAMESPACE

using std::ostream;

Register_Class(cIdealChannel)


cChannel::cChannel(const char *name) : cComponent(name)
{
    srcgatep = NULL;
    connId = -1;
}

cChannel::~cChannel()
{
}

std::string cChannel::info() const
{
    // print all parameters
    std::stringstream out;
    for (int i=0; i<getNumParams(); i++)
    {
        cPar& p = const_cast<cChannel *>(this)->par(i);
        out << p.getFullName() << "=" << p.info() << " ";
    }
    return out.str();
}

void cChannel::forEachChild(cVisitor *v)
{
    cDefaultList::forEachChild(v);
}

void cChannel::parsimPack(cCommBuffer *buffer)
{
    throw cRuntimeError(this,"parsimPack() not implemented");
}

void cChannel::parsimUnpack(cCommBuffer *buffer)
{
    throw cRuntimeError(this,"parsimUnpack() not implemented");
}

void cChannel::finalizeParameters()
{
    if (!srcgatep)
        throw cRuntimeError(this,"finalizeParameters() may only be called when the channel is already installed on a connection");
    cComponent::finalizeParameters();
}

void cChannel::callInitialize()
{
    cContextTypeSwitcher tmp(CTX_INITIALIZE);
    int stage = 0;
    while (initializeChannel(stage))
        ++stage;
}

bool cChannel::callInitialize(int stage)
{
    // note: numInitStages() will be checked inside initializeChannel()
    cContextTypeSwitcher tmp(CTX_INITIALIZE);
    return initializeChannel(stage);
}

bool cChannel::initializeChannel(int stage)
{
    // channels don't contain further subcomponents, so just we just invoke
    // initialize(stage) in the right context here.
    if (simulation.getContextType()!=CTX_INITIALIZE)
        throw cRuntimeError("Internal function initializeChannel() may only be called via callInitialize()");

    if (stage==0)
    {
        if (initialized())
            throw cRuntimeError(this, "Channel already initialized");

        // call finalizeParameters() if user has forgotten to do it; this is needed
        // to make dynamic module/channel creation more robust
        if (!parametersFinalized())
            finalizeParameters();
    }

    int numStages = numInitStages();
    if (stage < numStages)
    {
        // switch context for the duration of the call
        cContextSwitcher tmp(this);
#if !defined SPEC || defined SPEC_DEBUG
        ev << "Initializing channel " << getFullPath() << ", stage " << stage << "\n";
#endif        
        try {
            initialize(stage);
        } catch (cException&) {
            throw;
        } catch (std::exception& e) {
            throw cRuntimeError("%s during initialize(): %s", opp_typename(typeid(e)), e.what());
        }
        setFlag(FL_INITIALIZED, true);
    }

    bool moreStages = stage < numStages-1;
    return moreStages;
}

void cChannel::callFinish()
{
    // This is the interface for calling finish(). Channels don't contain further
    // subcomponents, so just we just invoke finish() in the right context here.
    cContextSwitcher tmp(this);
    cContextTypeSwitcher tmp2(CTX_FINISH);
    recordParametersAsScalars();
    try {
        finish();
    } catch (cException&) {
        throw;
    } catch (std::exception& e) {
        throw cRuntimeError("%s during finish(): %s", opp_typename(typeid(e)), e.what());
    }
}

cModule *cChannel::getParentModule() const
{
    // find which (compound) module contains this connection
    if (!srcgatep)
        return NULL;
    cModule *ownerMod = srcgatep->getOwnerModule();
    if (!ownerMod)
        return NULL;
    return srcgatep->getType()==cGate::INPUT ? ownerMod : ownerMod->getParentModule();
}

cProperties *cChannel::getProperties() const
{
    cModule *parent = getParentModule();
    cComponentType *type = getComponentType();
    cProperties *props;
    if (parent)
        props = parent->getComponentType()->getConnectionProperties(connId, type->getFullName());
    else
        props = type->getProperties();
    return props;
}

bool cChannel::isBusy() const
{
    // a default implementation
    return simTime() < getTransmissionFinishTime();
}

//----

cIdealChannel *cIdealChannel::create(const char *name)
{
    return dynamic_cast<cIdealChannel *>(cChannelType::getIdealChannelType()->create(name));
}

bool cIdealChannel::deliver(cMessage *msg, simtime_t t)
{
    // just hand over msg to next gate
    EVCB.messageSendHop(msg, getSourceGate());
    return getSourceGate()->getNextGate()->deliver(msg, t);
}


