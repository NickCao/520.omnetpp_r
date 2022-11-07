//==========================================================================
//   SAXPARSER_NONE.CC -
//            part of OMNeT++
//
//==========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 2002-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/


#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "nederror.h"
#include "saxparser.h"

USING_NAMESPACE


SAXParser::SAXParser()
{
    saxhandler = NULL;
}

void SAXParser::setHandler(SAXHandler *sh)
{
    saxhandler = sh;
    sh->setParser(this);
}

bool SAXParser::parse(const char *filename)
{
    strcpy(errortext, "XML input is not supported: this copy of NEDXML was "
                      "compiled without an XML parser (libXML or Expat)");
    return false;
}

int SAXParser::getCurrentLineNumber()
{
    return 0;
}


