//==========================================================================
//  CHISTOGRAM.H - part of
//
//                     OMNeT++/OMNEST
//            Discrete System Simulation in C++
//
//
//  Declaration of the following classes:
//    cHistogramBase        : common base class for histogram classes
//      cEqdHistogramBase   : Equi-distant histograms
//        cLongHistogram    : long int distribution
//        cDoubleHistogram  : double distribution
//
//==========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#ifndef __CHISTOGRAM_H
#define __CHISTOGRAM_H

#include "cdensityestbase.h"

NAMESPACE_BEGIN


/**
 * Base class for histogram classes. It adds a vector of counters to
 * cDensityEstBase.
 *
 * @ingroup Statistics
 */
class SIM_API cHistogramBase : public cDensityEstBase
{
  protected:
    int num_cells;        // nr. of categories
    unsigned *cellv;      // array of counters

  protected:
    // abstract method in cDensityEstBase
    virtual void doMergeCellValues(const cDensityEstBase *other);

  public:
    /** @name Constructors, destructor, assignment. */
    //@{

    /**
     * Copy constructor.
     */
    cHistogramBase(const cHistogramBase& r) : cDensityEstBase(r)
        {setName(r.getName());cellv=NULL;operator=(r);}

    /**
     * Constructor.
     */
    cHistogramBase(const char *name, int numcells);

    /**
     * Destructor.
     */
    virtual ~cHistogramBase();

    /**
     * Assignment operator. The name member doesn't get copied; see cNamedObject's operator=() for more details.
     */
    cHistogramBase& operator=(const cHistogramBase& res);
    //@}

    /** @name Redefined cObject member functions. */
    //@{

    /* No dup() because this is an abstract class. */

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

    /** @name Redefined member functions from cStatistic and its subclasses. */
    //@{

    /**
     * Clears the results collected so far.
     */
    virtual void clearResult();

    /**
     * Transforms the table of pre-collected values into an internal
     * histogram structure.
     */
    virtual void transform();

    /**
     * Returns the number of histogram cells used.
     */
    virtual int getNumCells() const;

    /**
     * Writes the contents of the object into a text file.
     */
    virtual void saveToFile(FILE *) const;

    /**
     * Reads the object data from a file, in the format written out by saveToFile().
     */
    virtual void loadFromFile(FILE *);
    //@}

    /** @name New member functions. */
    //@{
    /**
     * Sets the number of cells. Cannot be called when the cells have been
     * set up already.
     */
    virtual void setNumCells(int numcells);
    //@}
};

//==========================================================================

/**
 * Base class for equal cell size histograms.
 *
 * @ingroup Statistics
 */
class SIM_API cEqdHistogramBase : public cHistogramBase
{
  protected:
    double cellsize;  // cell/category sizes; <=0 if unset

  public:
    /** @name Constructors, destructor, assignment. */
    //@{

    /**
     * Copy constructor.
     */
    cEqdHistogramBase(const cEqdHistogramBase& r) : cHistogramBase(r)
        {setName(r.getName());operator=(r);}

    /**
     * Constructor.
     */
    explicit cEqdHistogramBase(const char *name=NULL, int numcells=-1);

    /**
     * Assignment operator. The name member doesn't get copied; see cNamedObject's operator=() for more details.
     */
    cEqdHistogramBase& operator=(const cEqdHistogramBase& res);
    //@}

    /** @name Redefined cObject member functions. */
    //@{

    /* No dup() because this is an abstract class. */

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

  protected:
    /**
     * Called internally by collect(), this method collects a value
     * after the histogram has been transformed.
     */
    virtual void collectTransformed(double value);

    /**
     * Called internally by transform(), this method should determine and set up
     * the histogram range. It also calculates the cell size.
     */
    virtual void setupRange();

  public:
    /** @name Redefined member functions from cStatistic and its subclasses. */
    //@{

    /**
     * Returns the kth cell boundary.
     */
    virtual double getBasepoint(int k) const;

    /**
     * Returns the number of observations that fell into the kth histogram cell.
     */
    virtual double getCellValue(int k) const;

    /**
     * Returns the value of the Probability Density Function at a given x.
     */
    virtual double getPDF(double x) const;

    /**
     * Returns the value of the Cumulated Density Function at a given x.
     */
    virtual double getCDF(double x) const;

    /**
     * Writes the contents of the object into a text file.
     */
    virtual void saveToFile(FILE *) const;

    /**
     * Reads the object data from a file, in the format written out by saveToFile().
     */
    virtual void loadFromFile(FILE *);
    //@}

    /** @name Cell size. */
    //@{
    /**
     * Sets the cell size. Cannot be called when the cells have been
     * set up already.
     */
    virtual void setCellSize(double d);

    /**
     * Returns the cell size, or 0 when unknow (i.e. the cells have not
     * been set up yet, and setCellSize() has not been called).
     */
    virtual double getCellSize() const {return cellsize;}
    //@}

};

//==========================================================================

/**
 * Equidistant histogram for integers. cLongHistogram is derived from
 * cEqdHistogramBase, which contains most of the functionality.
 *
 * The histogram will be set up in the following way:
 *   - the cell size is - by definition - always integer.
 *   - currently, cell boundaries are at halves (for example 9.5, 10.5);
 *     this may change in further releases.
 *   - the number of cells is exactly <i>num_cells</i>, if specified
 *     using setNumCells() or as an argument to the constructor;
 *   - if the number of cells is not specified, there will be one cell
 *     for every integer in the histogram range, but maximum 10,000 cells.
 *     Above 10,000, a >1 integer cell size will be chosen so that
 *     <i>num_cells</i> gets below 10,000.
 *   - the histogram range can be specified explicitly (via setRange()),
 *     or can be determined automatically, after collecting a number of
 *     initial observations (setRangeAuto(), setRangeAutoUpper(),
 *     setRangeAutoLower()).
 *   - the number of inition observations to collect for range determination
 *     can be set via setNumFirstVals().
 *   - if both <i>num_cells</i> and a histogram range (explicit or auto) was
 *     specified, the histogram range will be inflated to be an integer
 *     multiple of <i>num_cells</i> (so that cell size can be integer).
 *
 * Examples:
 *
 * This histogram will determine the range from the first few observations,
 * then it will try to keep maintain 1 cell for each integer value in the
 * range. If there would be more than 10,000 cells that way, it will make
 * 2 or 3 or 4 etc. wide cells to reduce the number of cells below 10,000.
 *
 * \code
 * cLongHistogram hist("hist");
 * \endcode
 *
 * The following histogram will maintain one cell for every integer 0,1,...500.
 *
 * \code
 * cLongHistogram hist("hist");
 * hist.setRange(0,500);
 * \endcode
 *
 * The next one will set up 100 cells, and the range will be auto-determined from
 * the first few observations. If the range is <100 wide, every cell will be
 * 1 wide; with the range width in 100..200, cells will be 2 wide, etc.
 *
 * \code
 * cLongHistogram hist("hist");
 * hist.setNumCells(100);
 * \endcode
 *
 * If you know that the numbers will be nonnegative, but you don't
 * know their ranges, you can use the following (which will set up 20
 * cells, with the range 0..20, or 0..40, or 0..60 etc, depending on
 * the range of the initial observations):
 *
 * \code
 * cLongHistogram hist("hist");
 * hist.setRangeAutoUpper(0);
 * hist.setNumCells(20);
 * \endcode
 *
 *
 * @ingroup Statistics
 */
class SIM_API cLongHistogram : public cEqdHistogramBase
{
  protected:
    virtual void getAttributesToRecord(opp_string_map& attributes);

  public:
    /** @name Constructors, destructor, assignment. */
    //@{

    /**
     * Copy constructor.
     */
    cLongHistogram(const cLongHistogram& r) : cEqdHistogramBase(r)
        {setName(r.getName());operator=(r);}

    /**
     * Constructor.
     */
    explicit cLongHistogram(const char *name=NULL, int numcells=-1);

    /**
     * Destructor.
     */
    virtual ~cLongHistogram();

    /**
     * Assignment is not supported by this class: this method throws a cRuntimeError when called.
     */
    cLongHistogram& operator=(const cLongHistogram&)  {copyNotSupported();return *this;}
    //@}

    /** @name Redefined cObject member functions. */
    //@{

    /**
     * Creates and returns an exact copy of this object.
     * See cObject for more details.
     */
    virtual cLongHistogram *dup() const  {return new cLongHistogram(*this);}
    //@}

  protected:
    /**
     * Called internally by transform(), this method should determine and set up
     * the histogram range.
     */
    virtual void setupRange();

  public:
    /** @name Redefined member functions from cStatistic and its subclasses. */
    //@{

    /**
     * Collects one value. Internally, the double value is converted to a long
     * using floor() before any processing.
     */
    virtual void collect(double value);

    /**
     * Convenience method, delegates to collect(double).
     */
    virtual void collect(SimTime value) {collect(value.dbl());}

    /**
     * Returns a random number based on the distribution collected. If
     * no values have been collected, it returns 0; when in initial collection
     * phase, it returns one of the stored observations; after the histogram
     * has been set up, a random integer is returned.
     */
    virtual double random() const;
    //@}
};

//==========================================================================

/**
 * Equidistant histogram for doubles. cDoubleHistogram is derived from
 * cEqdHistogramBase which contains most of the functionality.
 *
 *   - the number of cells is exactly <i>num_cells</i>, if specified
 *     using setNumCells() or as an argument to the constructor;
 *   - if the number of cells is not specified, it will default to 10.
 *   - the histogram range can be specified explicitly (via setRange()),
 *     or can be determined automatically, after collecting a number of
 *     initial observations (setRangeAuto(), setRangeAutoUpper(),
 *     setRangeAutoLower()).
 *   - the number of inition observations to collect for range determination
 *     can be set via setNumFirstVals().
 *
 * Examples:
 *
 * The following histogram will determine the range from the first few
 * observations, then it set up 10 equal-size cells on it:
 *
 * \code
 * cDoubleHistogram hist("hist");
 * \endcode
 *
 * This one will create 30 cells, after determining the range from the
 * first few observations:
 *
 * \code
 * cDoubleHistogram hist("hist");
 * hist.setNumCells(30);
 * \endcode
 *
 * To explicitly control the cells, you can use the following:
 *
 * \code
 * cDoubleHistogram hist("hist");
 * hist.setRange(0,3);
 * hist.setNumCells(30);
 * \endcode
 *
 * If you only know that the numbers will be nonnegative, but you don't
 * know their ranges, you can use the following (which will set up 20
 * cells, between 0 and an auto-determined limit):
 *
 * \code
 * cDoubleHistogram hist("hist");
 * hist.setRangeAutoUpper(0);
 * hist.setNumCells(20);
 * \endcode
 *
 * @ingroup Statistics
 */
class SIM_API cDoubleHistogram : public cEqdHistogramBase
{
  protected:
    /**
     * Called internally by transform(), this method should determine and set up
     * the histogram range. It also calculates the cell size.
     */
    virtual void setupRange();

  public:
    /** @name Constructors, destructor, assignment. */
    //@{

    /**
     * Copy constructor
     */
    cDoubleHistogram(const cDoubleHistogram& r) : cEqdHistogramBase(r)
          {setName(r.getName());operator=(r);}

    /**
     * Constructor.
     */
    explicit cDoubleHistogram(const char *name=NULL, int numcells=-1);

    /**
     * Destructor.
     */
    virtual ~cDoubleHistogram();

    /**
     * Assignment is not supported by this class: this method throws a cRuntimeError when called.
     */
    cDoubleHistogram& operator=(const cDoubleHistogram&)  {copyNotSupported();return *this;}
    //@}

    /** @name Redefined cObject member functions. */
    //@{

    /**
     * Creates and returns an exact copy of this object.
     * See cObject for more details.
     */
    virtual cDoubleHistogram *dup() const  {return new cDoubleHistogram(*this);}
    //@}

    /** @name Redefined member functions from cStatistic and its subclasses. */
    //@{

    /**
     * Returns a random number based on the distribution collected. If
     * no values have been collected, it returns 0; when in initial collection
     * phase, it returns one of the stored observations; after the histogram
     * has been set up, a random integer is returned.
     */
    virtual double random() const;
    //@}
};

NAMESPACE_END


#endif

