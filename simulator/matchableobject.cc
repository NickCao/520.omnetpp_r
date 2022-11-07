//==========================================================================
//  MATCHABLEOBJECT.CC - part of
//                     OMNeT++/OMNEST
//            Discrete System Simulation in C++
//
//  Author: Andras Varga
//
//==========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#include "matchableobject.h"
#include "cclassdescriptor.h"

USING_NAMESPACE

MatchableObjectAdapter::MatchableObjectAdapter(DefaultAttribute attr, cObject *obj)
{
    this->attr = attr;
    this->obj = obj;
    desc = NULL;
}

void MatchableObjectAdapter::setObject(cObject *obj)
{
    this->obj = obj;
    desc = NULL;
}

const char *MatchableObjectAdapter::getDefaultAttribute() const
{
    switch (attr)
    {
        case FULLPATH:  tmp = obj->getFullPath(); return tmp.c_str();
        case FULLNAME:  return obj->getFullName();
        case CLASSNAME: return obj->getClassName();
        default: throw opp_runtime_error("unknown setting for default attribute");
    }
}

void MatchableObjectAdapter::splitIndex(char *fieldname, int& index)
{
    index = 0;
    char *startbracket = strchr(fieldname, '[');
    if (startbracket)
    {
        char *lastcharp = fieldname + strlen(fieldname) - 1;
        if (*lastcharp != ']')
            throw opp_runtime_error("unmatched '['");
        *startbracket = '\0';
        char *end;
        index = strtol(startbracket+1, &end, 10);
        if (end!=lastcharp)
            throw opp_runtime_error("brackets [] must contain numeric index");
    }
}

bool MatchableObjectAdapter::findDescriptorField(cClassDescriptor *desc, cObject *obj, char *fieldname, int& fieldId, int& index)
{
    // chop off possible bracketed index from field name
    splitIndex(fieldname, index);

    // find field by name
    int n = desc->getFieldCount(obj);
    for (int i=0; i<n; i++)
        if (!strcmp(fieldname, desc->getFieldName(obj, i)))
            {fieldId = i; return true;}
    return false;
}

const char *MatchableObjectAdapter::getAttribute(const char *name) const
{
    if (!desc)
    {
        desc = obj->getDescriptor();
        if (!desc)
            return NULL;
    }

/*FIXME TBD
    // start tokenizing the path
    cStringTokenizer tokenizer(name, ".");
    const char *token;
    void *currentObj = obj;
    cClassDescriptor *currentDesc = desc;
    int currentFieldId = id
    while ((token = tokenizer.nextToken())!=NULL)
    {
        bool found = findDescriptorField(d, o, token, fid, index);
        if (!found) return NULL;
    }
*/

    int fieldId;
    int index;
    char *name2 = new char[strlen(name)+1];
    strcpy(name2, name);
    bool found = findDescriptorField(desc, obj, name2, fieldId, index);
    if (!found) return NULL;

    char buf[256];
    desc->getFieldAsString(obj, fieldId, index, buf, 256);
    tmp = buf;
    return tmp.c_str();
}

