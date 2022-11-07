//=========================================================================
//  CEXCEPTION.CC - part of
//
//                  OMNeT++/OMNEST
//           Discrete System Simulation in C++
//
//   Exception classes
//
//  Author: Andras Varga
//=========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // for exit()
#include <stdarg.h>  // for va_list
#include <signal.h>  // raise()
#include "cexception.h"
#include "csimulation.h"
#include "ccomponent.h"
#include "cmodule.h"
#include "cenvir.h"
#include "cconfiguration.h"
#include "commonutil.h"

USING_NAMESPACE

#if !defined(SPEC)
#if defined _MSC_VER
#define DEBUG_TRAP  __asm int 3  // Visual C++: debug interrupt
//SPEC correct syntax please #elif defined _WIN32 and defined __GNUC__
#elif defined (_WIN32) && defined (__GNUC__)
#define DEBUG_TRAP  asm("int $3\n")  // MinGW or Cygwin: debug interrupt with gnu syntax
#else
#define DEBUG_TRAP  raise(6)  // SIGABRT
#endif
#endif


#define BUFLEN 1024
static char buffer[BUFLEN];
static char buffer2[BUFLEN];


cException::cException() : std::exception()
{
    errorcode = eCUSTOM;
    storeCtx();
    msg = "n/a";
}

cException::cException(OppErrorCode errorcode...) : std::exception()
{
    va_list va;
    va_start(va, errorcode);
    init(NULL, errorcode, cErrorMessages::get(errorcode), va);
    va_end(va);
}

cException::cException(const char *msgformat...) : std::exception()
{
    va_list va;
    va_start(va, msgformat);
    init(NULL, eCUSTOM, msgformat, va);
    va_end(va);
}

cException::cException(const cObject *where, OppErrorCode errorcode...) : std::exception()
{
    va_list va;
    va_start(va, errorcode);
    init(where, errorcode, cErrorMessages::get(errorcode), va);
    va_end(va);
}

cException::cException(const cObject *where, const char *msgformat...) : std::exception()
{
    va_list va;
    va_start(va, msgformat);
    init(where, eCUSTOM, msgformat, va);
    va_end(va);
}

cException::cException(const cException& e)
{
    errorcode = e.errorcode;
    msg = e.msg;
    hascontext = e.hascontext;
    contextclassname = e.contextclassname;
    contextfullpath = e.contextfullpath;
    moduleid = e.moduleid;
}

void cException::storeCtx()
{
    cSimulation *sim = cSimulation::getActiveSimulation();
    if (!sim || !sim->getContext())
    {
        hascontext = false;
        moduleid = -1;
    }
    else
    {
        hascontext = true;
        contextclassname = sim->getContext()->getClassName();
        contextfullpath = sim->getContext()->getFullPath().c_str();
        moduleid = sim->getContextModule() ? sim->getContextModule()->getId() : -1;
    }
}

void cException::exitIfStartupError()
{
    if (!cStaticFlag::isSet())
    {
        // note: ev may not be available at this time
        fprintf(stderr, "<!> Error during startup/shutdown: %s. Aborting.", what());
        abort();
    }
}

void cException::init(const cObject *where, OppErrorCode errorcode, const char *fmt, va_list va)
{
    // store error code
    errorcode = errorcode;

    // print "(%s)%s:" conditionally:
    //  - if object is the module itself: skip
    //  - if object is local in module: use getFullName()
    //  - if object is somewhere else: use getFullPath()
    buffer[0] = '\0';
    cSimulation *sim = cSimulation::getActiveSimulation();
    cComponent *context = sim ? sim->getContext() : NULL;
    if (where && where!=context)
    {
        // try: if context's fullpath is same as module fullpath + object fullname, no need to print path
        sprintf(buffer2, "%s.%s", (context ? context->getFullPath().c_str() : ""), where->getFullName());
        bool needpath = strcmp(buffer2,where->getFullPath().c_str())!=0;
        sprintf(buffer, "(%s)%s: ", where->getClassName(), needpath ? where->getFullPath().c_str() : where->getFullName());
    }

    vsnprintf(buffer+strlen(buffer), BUFLEN-strlen(buffer), fmt, va);
#if defined(SPEC)
    buffer[BUFLEN-1] = '\0';
#else
    buffer[BUFLEN] = '\0';
#endif
    msg = buffer;

    // store context
    storeCtx();

    // if a global object's ctor/dtor throws an exception, there won't be
    // anyone around to catch it, so print it and abort here.
    exitIfStartupError();
}

//---

cTerminationException::cTerminationException(OppErrorCode errorcode...)
{
    va_list va;
    va_start(va, errorcode);
    init(NULL, errorcode, cErrorMessages::get(errorcode), va);
    va_end(va);
}

cTerminationException::cTerminationException(const char *msgformat...)
{
    va_list va;
    va_start(va, msgformat);
    init(NULL, eCUSTOM, msgformat, va);
    va_end(va);
}

//---

cRuntimeError::cRuntimeError(OppErrorCode errorcode...)
{
    va_list va;
    va_start(va, errorcode);
    init(NULL, errorcode, cErrorMessages::get(errorcode), va);
    va_end(va);
    breakIntoDebuggerIfRequested();
}

cRuntimeError::cRuntimeError(const char *msgformat...)
{
    va_list va;
    va_start(va, msgformat);
    init(NULL, eCUSTOM, msgformat, va);
    va_end(va);
    breakIntoDebuggerIfRequested();
}

cRuntimeError::cRuntimeError(const cObject *where, OppErrorCode errorcode...)
{
    va_list va;
    va_start(va, errorcode);
    init(where, errorcode, cErrorMessages::get(errorcode), va);
    va_end(va);
    breakIntoDebuggerIfRequested();
}

cRuntimeError::cRuntimeError(const cObject *where, const char *msgformat...)
{
    va_list va;
    va_start(va, msgformat);
    init(where, eCUSTOM, msgformat, va);
    va_end(va);
    breakIntoDebuggerIfRequested();
}

void cRuntimeError::breakIntoDebuggerIfRequested()
{
    if (ev.debug_on_errors)
    {
        printf("\n"
               "RUNTIME ERROR. A cRuntimeError exception is about to be thrown, and you\n"
               "requested (by setting debug-on-errors=true in the ini file) that errors\n"
               "abort execution and break into the debugger.\n\n"
#ifdef _MSC_VER
               "If you see a [Debug] button on the Windows crash dialog and you have\n"
               "just-in-time debugging enabled, select it to get into the Visual Studio\n"
               "debugger. Otherwise, you should already have attached to this process from\n"
               "Visual Studio. Once in the debugger, see you can browse to the context of\n"
               "the error in the \"Call stack\" debug view.\n\n"
#else
               "You should now probably be running the simulation under gdb or another\n"
               "debugger. The simulation kernel will now raise a SIGABRT signal which will\n"
               "get you into the debugger. If you are not running under a debugger, you can\n"
               "still use the core dump for post-mortem debugging. Once in the debugger,\n"
               "view the call stack (in gdb: \"bt\" command) to see the context of the\n"
               "runtime error.\n\n"
#endif
               );
        if (!hascontext)
            printf("<!> Error: %s.\n", what());
        else if (getModuleID()==-1)
            printf("<!> Error in component (%s) %s: %s.\n",
                   getContextClassName(), getContextFullPath(), what());
        else
            printf("<!> Error in module (%s) %s (id=%d): %s.\n",
                   getContextClassName(), getContextFullPath(), getModuleID(), what());
        printf("\nTRAPPING on the exception above, due to a debug-on-errors=true configuration option. Is your debugger ready?\n");
        fflush(stdout);

#if !defined(SPEC)
        // cause debugger interrupt or signal
        DEBUG_TRAP;
#endif
    }
}


