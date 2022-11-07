//==========================================================================
//  AKAROARNG.H - part of
//                 OMNeT++/OMNEST
//              Discrete System Simulation in C++
//
// Contents:
//   class cAkaroaRNG
//
//  Author: Andras Varga
//
//==========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 2002-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#ifdef WITH_AKAROA

#ifndef __AKAROARNG_H
#define __AKAROARNG_H

#include "envirdefs.h"
#include "simkerneldefs.h"
#include "crng.h"
#include "cconfiguration.h"

NAMESPACE_BEGIN


/**
 * Wraps Akaroa's random number generator.
 *
 * Akaroa 2.7.4 provides only one RNG stream, and the available functions
 * are (from <tt>src/akaroa/random.H</tt>):
 *
 * <pre>
 * real AkRandomReal();      // float 0 < x < 1
 * unsigned long AkRandom(); // integer 0 < x < 2^31-1
 * </pre>
 *
 * The second (integer) form is probably better be avoided, because it is
 * coded as:
 *
 * <pre>
 * unsigned long AkRandom() {
 *     return (unsigned long)(AkRandomReal() * 0x7fffffff);
 * }
 * </pre>
 *
 * The <tt>doubleRand()</tt>, <tt>doubleRandNonz()</tt>, <tt>doubleRandIncl1()</tt>
 * methods in this class just invoke <tt>AkRandomReal()</tt>, so contrary to their
 * specifications they won't return either 0 or 1.
 */
class ENVIR_API cAkaroaRNG : public cRNG
{
  public:
    cAkaroaRNG() {}
    virtual ~cAkaroaRNG() {}

    /** Sets up the RNG. */
    virtual void initialize(int runNumber, int rngId, int numRngs,
                            int parsimProcId, int parsimNumPartitions,
                            cConfiguration *cfg);

    /** Tests correctness of the RNG */
    virtual void selfTest();

    /** Random integer in the range [0,intRandMax()] */
    virtual unsigned long intRand();

    /** Maximum value that can be returned by intRand() */
    virtual unsigned long intRandMax();

    /** Random integer in [0,n), n < intRandMax() */
    virtual unsigned long intRand(unsigned long n);

    /** Invokes AkRandomReal(), so sadly, it actually cannot return 0. */
    virtual double doubleRand();

    /** Invokes AkRandomReal(). */
    virtual double doubleRandNonz();

    /** Invokes AkRandomReal(), so sadly, it actually cannot return either 0 or 1. */
    virtual double doubleRandIncl1();
};

NAMESPACE_END

#endif

#endif
