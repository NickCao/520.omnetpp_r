//==========================================================================
//  XMLDOCCACHE.H - part of
//                     OMNeT++/OMNEST
//            Discrete System Simulation in C++
//
//  Declaration of the following classes:
//    cXMLDocCache : reads and caches XML config files
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

#ifndef __XMLDOCCACHE_H
#define __XMLDOCCACHE_H

#include <map>
#include <string>
#include "simkerneldefs.h"
#include "envirdefs.h"
#include "cxmlelement.h"

NAMESPACE_BEGIN

/**
 * Reads and caches XML config files.
 */
class ENVIR_API cXMLDocCache : public cObject
{
  protected:
    typedef std::map<std::string,cXMLElement*> XMLDocMap;
    XMLDocMap cache;
    cXMLElement *parseDocument(const char *filename);

  public:
    /**
     * Constructor
     */
    cXMLDocCache();

    /**
     * Destructor
     */
    virtual ~cXMLDocCache();

    /**
     * Returns the given document. NOTE: The returned node is the equivalent
     * of the DOM "Document node", which is the <i>parent</i> of the
     * root element, not the root element itself.
     */
    virtual cXMLElement *getDocument(const char *filename);
};

NAMESPACE_END


#endif

