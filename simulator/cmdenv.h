//==========================================================================
//  CMDENV.H - part of
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

#ifndef __CMDENV_H
#define __CMDENV_H

#include "csimulation.h"
#include "envirbase.h"

NAMESPACE_BEGIN

class Speedometer;

/**
 * Command line user interface.
 */
class CMDENV_API Cmdenv : public EnvirBase
{
   protected:
     // new simulation options:
     opp_string opt_configname;
     opp_string opt_runstoexec;
     size_t opt_extrastack;
     opp_string opt_outputfile;

     bool opt_expressmode;
     bool opt_interactive;
     bool opt_autoflush; // all modes
     bool opt_modulemsgs;  // if normal mode
     bool opt_eventbanners; // if normal mode
     bool opt_eventbanner_details; // if normal mode
     bool opt_messagetrace; // if normal mode
     long opt_status_frequency_ms; // if express mode
     bool opt_perfdisplay; // if express mode

     // set to true on SIGINT/SIGTERM signals
     static bool sigint_received;

     // stream to write output to
     FILE *fout;

   protected:
     virtual void sputn(const char *s, int n);
     virtual void putsmsg(const char *s);
     virtual bool askyesno(const char *question);
     virtual void printEventBanner(cSimpleModule *mod);
     virtual void doStatusUpdate(Speedometer& speedometer);

   public:
     Cmdenv();
     virtual ~Cmdenv();

     // redefined virtual funcs:
     virtual void moduleCreated(cModule *newmodule);
     virtual void messageSent_OBSOLETE(cMessage *msg, cGate *directToGate);
     virtual void simulationEvent(cMessage *msg);
     virtual bool isGUI() const {return false;}
     virtual cEnvir& flush();
     virtual std::string gets(const char *prompt, const char *defaultReply);
     virtual bool idle();
     virtual unsigned getExtraStackForEnvir() const;

   protected:
     virtual void run();
     virtual void printUISpecificHelp();

     virtual void readOptions();
     virtual void readPerRunOptions();
     virtual void askParameter(cPar *par);

     // new functions:
     void help();
     void simulate();
     const char *progressPercentage();

     void installSignalHandler();
     void deinstallSignalHandler();
     static void signalHandler(int signum);
};

NAMESPACE_END


#endif

