//==========================================================================
//  NEDPARSER.CC - part of
//
//                     OMNeT++/OMNEST
//            Discrete System Simulation in C++
//
//==========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 2002-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/


#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sstream>
#include <string>

#include "nedparser.h"
#include "nedfilebuffer.h"
#include "nedelements.h"
#include "nederror.h"
#include "opp_ctype.h"

#include "nedyydefs.h"

NAMESPACE_BEGIN

#define MAGIC_PREFIX   "@expr@"  // note: must agree with ned2.lex

NEDParser *np;

//--------

const char *NEDParser::getBuiltInDeclarations()
{
    return
        "package ned;\n"
        "@namespace(\"\");\n"
        "\n"
        "channel IdealChannel\n"
        "{\n"
        "    @class(cIdealChannel);\n"
        "}\n"
        "\n"
        "channel DelayChannel\n"
        "{\n"
        "    @class(cDelayChannel);\n"
        "    bool disabled = default(false);\n"
        "    double delay = default(0s) @unit(s); // propagation delay\n"
        "}\n"
        "\n"
        "channel DatarateChannel\n"
        "{\n"
        "    @class(cDatarateChannel);\n"
        "    bool disabled = default(false);\n"
        "    double delay = default(0s) @unit(s); // propagation delay\n"
        "    double datarate = default(0bps) @unit(bps); // bits per second; 0=infinite\n"
        "    double ber = default(0); // bit error rate (BER)\n"
        "    double per = default(0); // packet error rate (PER)\n"
        "}\n"
        "\n"
        "moduleinterface IBidirectionalChannel\n"
        "{\n"
        "    gates:\n"
        "        inout a;\n"
        "        inout b;\n"
        "}\n"
        "\n"
        "moduleinterface IUnidirectionalChannel\n"
        "{\n"
        "    gates:\n"
        "        input i;\n"
        "        output o;\n"
        "}\n"
    ;
}

//--------

NEDParser::NEDParser(NEDErrorStore *e)
{
    nedsource = NULL;
    parseexpr = true;
    storesrc = false;
    errors = e;
}

NEDParser::~NEDParser()
{
    delete nedsource;
}

NEDElement *NEDParser::parseNEDFile(const char *osfname, const char *fname)
{
    if (!loadFile(osfname, fname))
        return NULL;
    return parseNED();
}

NEDElement *NEDParser::parseNEDText(const char *nedtext, const char *fname)
{
    if (!loadText(nedtext, fname))
        return NULL;
    return parseNED();
}

NEDElement *NEDParser::parseNEDExpression(const char *nedexpression)
{
    parseexpr = true;
    std::string source = std::string(MAGIC_PREFIX) + "\n" + nedexpression;
    return parseNEDText(source.c_str(), "buffer");
}

NEDElement *NEDParser::parseMSGFile(const char *osfname, const char *fname)
{
    if (!loadFile(osfname, fname))
        return NULL;
    return parseMSG();
}

NEDElement *NEDParser::parseMSGText(const char *nedtext, const char *fname)
{
    if (!loadText(nedtext,fname))
        return NULL;
    return parseMSG();
}

bool NEDParser::loadFile(const char *osfname, const char *fname)
{
    if (!fname)
        fname = osfname;

    // init class members
    if (nedsource) delete nedsource;
    nedsource = new NEDFileBuffer();
    filename = fname;
    errors->clear();

    // resolve "~" in file name
    char osfname2[1000];
    if (osfname[0]=='~') {
        sprintf(osfname2, "%s%s", getenv("HOME"), osfname+1);
    } else {
        strcpy(osfname2, osfname);
    }

    // load whole file into memory
    if (!nedsource->readFile(osfname2))
        {errors->addError("", "cannot read %s", fname); return false;}
    return true;
}

bool NEDParser::loadText(const char *nedtext, const char *fname)
{
    if (!fname)
        fname = "buffer";

    // init vars
    if (nedsource) delete nedsource;
    nedsource = new NEDFileBuffer();
    filename = fname;
    errors->clear();

    // prepare nedsource object
    if (!nedsource->setData(nedtext))
        {errors->addError("", "unable to allocate work memory"); return false;}
    return true;
}

NEDElement *NEDParser::parseNED()
{
    errors->clear();
    if (guessIsNEDInNewSyntax(nedsource->getFullText()))
        return ::doParseNED2(this, nedsource->getFullText());
    else
        return ::doParseNED1(this, nedsource->getFullText());
}

NEDElement *NEDParser::parseMSG()
{
    errors->clear();
    return ::doParseMSG2(this, nedsource->getFullText());
}

bool NEDParser::guessIsNEDInNewSyntax(const char *txt)
{
    // first, remove all comments and string literals
    char *buf = new char [strlen(txt)+1];
    const char *s;
    char *d;
    bool whitespaceOnly = true;
    for (s=txt, d=buf; *s; )
    {
        if (*s=='/' && *(s+1)=='/') {
            // if there's a comment, skip rest of the line
            s += 2;
            while (*s && *s!='\r' && *s!='\n')
                s++;
        }
        else if (*s=='"') {
            // leave out string literals as well
            s++;
            while (*s && *s!='\r' && *s!='\n' && *s!='"')
                if (*s++=='\\')
                    s++;
            if (*s=='"')
                s++;
        }
        else {
            if (*s && !opp_isspace(*s))
                whitespaceOnly = false;

            // copy everything else
            *d++ = *s++;

        }
    }
    *d = '\0';

    // Only in NED2 are curly braces {} and "@" allowed and widely used.
    //
    bool containsNED2Chars = strchr(buf,'{') || strchr(buf,'}') || strchr(buf,'@');

    // If needed, check whether it contains the keyword "package";
    // it is only used in NED2. We have to search "whole words only",
    // so plain strstr() is not enough.
    // Note: this is not bulletproof, because NED2 keywords were not
    // reserved in NED1.
    //
    bool containsPackageKeyword=false;
    if (!containsNED2Chars)
        for (const char *s = strstr(buf,"package"); s!=NULL; s = strstr(s+1,"package"))
            if (opp_isspace(s[strlen("package")]) && (s==buf || opp_isspace(s[-1])))
                {containsPackageKeyword=true; break;}

    // cleanup
    delete [] buf;

    return whitespaceOnly || containsNED2Chars || containsPackageKeyword;
}

void NEDParser::error(const char *msg, int line)
{
    std::stringstream os;
    os << filename << ":" << line;
    errors->addError(os.str().c_str(), "%s", msg);
}

NAMESPACE_END


