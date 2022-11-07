//========================================================================
//  COUTVECTOR.CC - part of
//
//                 OMNeT++/OMNEST
//              Discrete System Simulation in C++
//
//   Member functions of
//    cOutVector         : represents a vector in the output file
//
//   Original version:  Gabor Lencse
//   Rewrite, bugfixes: Andras Varga
//========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#include <string.h>   // strlen
#include "globals.h"
#include "coutvector.h"
#include "cmodule.h"
#include "csimulation.h"
#include "cenvir.h"
#include "cexception.h"
#include "cenum.h"

#ifdef WITH_PARSIM
#include "ccommbuffer.h"
#endif

USING_NAMESPACE

Register_Class(cOutVector)


Register_Enum(cOutVector::Type, (cOutVector::TYPE_INT, cOutVector::TYPE_DOUBLE, cOutVector::TYPE_ENUM) )
Register_Enum(cOutVector::InterpolationMode, (cOutVector::NONE, cOutVector::SAMPLE_HOLD, cOutVector::BACKWARD_SAMPLE_HOLD, cOutVector::LINEAR))


cOutVector::cOutVector(const char *name) : cNoncopyableOwnedObject(name)
{
    setFlag(FL_ENABLED, true);
    handle = NULL;
    num_received = 0;
    num_stored = 0;
    record_in_inspector = NULL;
    last_t = 0;

    // register early if possible (only required by Akaroa)
    if (name) {
        handle = ev.registerOutputVector(simulation.getContext()->getFullPath().c_str(), name);
        ASSERT(handle!=NULL);
    }
}

cOutVector::~cOutVector()
{
    if (handle)
        ev.deregisterOutputVector(handle);
}

void cOutVector::setName(const char *nam)
{
    if (handle)
        throw cRuntimeError(this,"setName(): changing name of an output vector after record() calls is not allowed");

    cOwnedObject::setName(nam);

    // register early (only needed for Akaroa...)
    if (nam) {
        handle = ev.registerOutputVector(simulation.getContext()->getFullPath().c_str(), getName());
        ASSERT(handle!=NULL);
    }
}

std::string cOutVector::info() const
{
    if (!handle)
        return std::string("(no values recorded yet)");
    std::stringstream out;
    out << "received " << num_received << " values, stored " << num_stored;
    return out.str();
}

void cOutVector::parsimPack(cCommBuffer *buffer)
{
    throw cRuntimeError(this, "parsimPack() not supported");
}

void cOutVector::parsimUnpack(cCommBuffer *buffer)
{
    throw cRuntimeError(this, "parsimUnpack(): not supported");
}

void cOutVector::setUnit(const char *unit)
{
    if (!handle)
        throw cRuntimeError(this,"setUnit(): set the object name first, using setName()");
    ev.setVectorAttribute(handle, "unit", unit);
}

void cOutVector::setEnum(const char *registeredEnumName)
{
    cEnum *enumDecl = cEnum::find(registeredEnumName);
    if (!enumDecl)
        throw cRuntimeError(this, "setEnum(): enum `%s' not found -- is it declared with Register_Enum()?", registeredEnumName);
    setEnum(enumDecl);
}

void cOutVector::setEnum(cEnum *enumDecl)
{
    if (!handle)
        throw cRuntimeError(this,"setEnum(): set the object name first, using setName()");
    ev.setVectorAttribute(handle, "enumname", enumDecl->getName());
    ev.setVectorAttribute(handle, "enum", enumDecl->str().c_str());
}

void cOutVector::setType(Type type)
{
    if (!handle)
        throw cRuntimeError(this,"setType(): set the object name first, using setName()");

    const char *typeString=NULL;
    switch (type)
    {
        case TYPE_INT:    typeString = "int"; break;
        case TYPE_DOUBLE: typeString = "double"; break;
        case TYPE_ENUM:   typeString = "enum"; break;
        //Note: no "default:" so that compiler can warn of incomplete coverage
    }
    if (!typeString)
        throw cRuntimeError(this, "setType(): invalid type %d", type);
    ev.setVectorAttribute(handle, "type", typeString);
}

void cOutVector::setInterpolationMode(InterpolationMode mode)
{
    if (!handle)
        throw cRuntimeError(this,"setInterpolationMode(): set the object name first, using setName()");

    const char *modeString=NULL;
    switch (mode)
    {
        case NONE:                 modeString = "none"; break;
        case SAMPLE_HOLD:          modeString = "sample-hold"; break;
        case BACKWARD_SAMPLE_HOLD: modeString = "backward-sample-hold"; break;
        case LINEAR:               modeString = "linear"; break;
        //Note: no "default:" so that compiler can warn of incomplete coverage
    }
    if (!modeString)
        throw cRuntimeError(this, "setInterpolationMode(): invalid interpolation mode %d", mode);
    ev.setVectorAttribute(handle, "interpolationmode", modeString);
}

void cOutVector::setMin(double minValue)
{
    if (!handle)
        throw cRuntimeError(this,"setMin(): set the object name first, using setName()");

    char buf[32];
    sprintf(buf, "%g", minValue);
    ev.setVectorAttribute(handle, "min", buf);
}

void cOutVector::setMax(double maxValue)
{
    if (!handle)
        throw cRuntimeError(this,"setMax(): set the object name first, using setName()");

    char buf[32];
    sprintf(buf, "%g", maxValue);
    ev.setVectorAttribute(handle, "max", buf);
}


bool cOutVector::record(double value)
{
    return recordWithTimestamp(simulation.getSimTime(), value);
}

bool cOutVector::recordWithTimestamp(simtime_t t, double value)
{
    // check timestamp
    if (t<last_t)
        throw cRuntimeError(this,"Cannot record data with an earlier timestamp (t=%s) "
                                 "than the previously recorded value", SIMTIME_STR(t));
    last_t = t;

    num_received++;

    // pass data to inspector
    if (record_in_inspector)
        record_in_inspector(data_for_inspector,t,value,0.0);

    if (!isEnabled())
        return false;

    // initialize if not yet done
    if (!handle)
        handle = ev.registerOutputVector(simulation.getContext()->getFullPath().c_str(), getName());

    // pass data to envir for storage
    bool stored = ev.recordInOutputVector(handle, t, value);
    if (stored) num_stored++;
    return stored;
}


