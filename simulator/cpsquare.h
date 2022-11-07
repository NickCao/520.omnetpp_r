//==========================================================================
//  CPSQUARE.H - part of
//                     OMNeT++/OMNEST
//            Discrete System Simulation in C++
//
//
//  Declaration of the following classes:
//    cPSquare : calculates quantile values without storing the observations
//
//  Author: Babak Fakhamzadeh, TU Delft, Dec 1996
//
//==========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#ifndef __CPSQUARE_H
#define __CPSQUARE_H

#include "cdensityestbase.h"

NAMESPACE_BEGIN


/**
 * Implements the P<SUP>2</SUP> algorithm, which calculates quantile values
 * without storing the observations.
 *
 * @ingroup Statistics
 */
class SIM_API cPSquare : public cDensityEstBase
{
  protected:
    int numcells;      // number of observations
    long numobs;       // number of cells,
    int *n;            // array of positions
    double *q;         // array of heights

  protected:
    // abstract method in cDensityEstBase
    virtual void doMergeCellValues(const cDensityEstBase *other);

  public:
    /** @name Constructors, destructor, assignment. */
    //@{

    /**
     * Copy constructor.
     */
    cPSquare(const cPSquare& r);

    /**
     * Constructor.
     */
    explicit cPSquare(const char *name=NULL, int cells=10);

    /**
     * Destructor.
     */
    virtual ~cPSquare();

    /**
     * Assignment operator. The name member doesn't get copied; see cNamedObject's operator=() for more details.
     */
    cPSquare& operator=(const cPSquare& res);
    //@}

    /** @name Redefined cObject member functions. */
    //@{

    /**
     * Creates and returns an exact copy of this object.
     * See cObject for more details.
     */
    virtual cPSquare *dup() const  {return new cPSquare(*this);}

    /**
     * Produces a multi-line description of the object's contents.
     * See cObject for more details.
     */
    virtual std::string detailedInfo() const;

    /**
     * Serializes the object into an MPI send buffer.
     * Used by the simulation kernel for parallel execution.
     * See cObject for more details.
     */
    virtual void parsimPack(cCommBuffer *buffer);

    /**
     * Deserializes the object from an MPI receive buffer
     * Used by the simulation kernel for parallel execution.
     * See cObject for more details.
     */
    virtual void parsimUnpack(cCommBuffer *buffer);
    //@}

  private:
    // internal: issues error message
    void giveError();

  protected:
    /**
     * Called internally by collect(), this method updates the P2 data structure
     * with the new value.
     */
    virtual void collectTransformed(double val);

  public:
    /** @name Redefined member functions from cStatistic and its subclasses. */
    //@{

    /**
     * This method is not used with cPSquare, but it could not remain pure virtual.
     */
    virtual void transform() {}

    /**
     * setRange() and setNumFirstVals() methods are not used with cPSquare
     * (the algorithm doesn't require them), but they could not remain pure virtual.
     */
    virtual void setRange(double,double) {giveError();}

    /**
     * setRange() and setNumFirstVals() methods are not used with cPSquare
     * (the algorithm doesn't require them), but they could not remain pure virtual.
     */
    virtual void setRangeAuto(int,double) {giveError();}

    /**
     * setRange() and setNumFirstVals() methods are not used with cPSquare
     * (the algorithm doesn't require them), but they could not remain pure virtual.
     */
    virtual void setRangeAutoLower(double,int,double) {giveError();}

    /**
     * setRange() and setNumFirstVals() methods are not used with cPSquare
     * (the algorithm doesn't require them), but they could not remain pure virtual.
     */
    virtual void setRangeAutoUpper(double,int,double) {giveError();}

    /**
     * setRange() and setNumFirstVals() methods are not used with cPSquare
     * (the algorithm doesn't require them), but they could not remain pure virtual.
     */
    virtual void setNumFirstVals(int) {giveError();}

    /**
     * Returns the number of cells used.
     */
    virtual int getNumCells() const;

    /**
     * Returns the kth cell boundary. Note that because of the P2 algorithm,
     * cell boundaries are shifting during data collection, thus getCellValue() and
     * other methods based on getCellValue() and getBasepoint() return approximate values.
     */
    virtual double getBasepoint(int k) const;

    /**
     * Returns the number of observations that fell into the kth histogram cell.
     */
    virtual double getCellValue(int k) const;

    /**
     * Returns the value of the Cumulated Density Function at a given x.
     */
    virtual double getCDF(double x) const;

    /**
     * Returns the value of the Probability Density Function at a given x.
     */
    virtual double getPDF(double x) const;

    /**
     * Generates a random number based on the collected data. Uses the random number generator set by setGenK().
     */
    virtual double random() const;

    /**
     * Merging is not supported by this class. This method throws an error.
     */
    virtual void merge(const cStatistic *other);

    /**
     * Writes the contents of the object into a text file.
     */
    virtual void saveToFile(FILE *) const;

    /**
     * Reads the object data from a file, in the format written out by saveToFile().
     */
    virtual void loadFromFile(FILE *);
    //@}
};

NAMESPACE_END


#endif

