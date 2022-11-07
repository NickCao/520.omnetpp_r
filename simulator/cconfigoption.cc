//=========================================================================
//  CCONFIGOPTION.CC - part of
//
//                  OMNeT++/OMNEST
//           Discrete System Simulation in C++
//
//  Author: Andras Varga
//
//=========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 2003-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#include <sstream>
#include "cconfigoption.h"

USING_NAMESPACE


cConfigOption::cConfigOption(const char *name, bool isPerObject, bool isGlobal, Type type, const char *unit,
                       const char *defaultValue, const char *description) :
    cNoncopyableOwnedObject(name, false)
{
    isPerObject_ = isPerObject;
    isGlobal_ = isGlobal;
    type_ = type;
    unit_ = unit ? unit : "";
    if (type_==CFG_BOOL && defaultValue)
        defaultValue = (defaultValue[0]=='0' || defaultValue[0]=='f') ? "false" : "true";
    defaultValue_ = defaultValue ? defaultValue : "";
    description_ = description ? description : "";
}

std::string cConfigOption::info() const
{
    std::stringstream out;
    out << (isPerObject_ ? "per-object " : "");
    out << (isGlobal_ ? "global" : "per-run");
    out << ", type=" << getTypeName(type_);
    if (!unit_.empty()) out << ", unit=\"" << unit_ << "\"";
    if (!defaultValue_.empty()) out << ", default=\"" << defaultValue_ << "\"";
    if (!description_.empty()) out << ", hint: " << description_;
    return out.str();
}

const char *cConfigOption::getTypeName(Type type)
{
    switch (type)
    {
        case CFG_BOOL:      return "bool";
        case CFG_INT:       return "int";
        case CFG_DOUBLE:    return "double";
        case CFG_STRING:    return "string";
        case CFG_FILENAME:  return "filename";
        case CFG_FILENAMES: return "filenames";
        case CFG_PATH:      return "path";
        case CFG_CUSTOM:    return "custom";
        default:            return "???";
    }
}
