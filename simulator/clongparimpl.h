//==========================================================================
//   CLONGPARIMPL.H  - part of
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

#ifndef __CLONGPARIMPL_H
#define __CLONGPARIMPL_H

#include "cparimpl.h"

NAMESPACE_BEGIN

/**
 * A cParImpl subclass that stores a module/channel parameter
 * of the type long.
 *
 * @ingroup Internals
 */
class SIM_API cLongParImpl : public cParImpl
{
  protected:
    // selector: flags & FL_ISEXPR
    union {
      cExpression *expr;
      long val;
    };

  protected:
    long evaluate(cComponent *context) const;
    void deleteOld();

  public:
    /** @name Constructors, destructor, assignment. */
    //@{

    /**
     * Constructor.
     */
    explicit cLongParImpl();

    /**
     * Copy constructor.
     */
    cLongParImpl(const cLongParImpl& other) {setName(other.getName()); operator=(other);}

    /**
     * Destructor.
     */
    virtual ~cLongParImpl();

    /**
     * Assignment operator.
     */
    void operator=(const cLongParImpl& otherpar);
    //@}

    /** @name Redefined cObject member functions */
    //@{

    /**
     * Creates and returns an exact copy of this object.
     */
    virtual cLongParImpl *dup() const  {return new cLongParImpl(*this);}

    /**
     * Serializes the object into a buffer.
     */
    virtual void parsimPack(cCommBuffer *buffer);

    /**
     * Deserializes the object from a buffer.
     */
    virtual void parsimUnpack(cCommBuffer *buffer);
    //@}

    /** @name Redefined cParImpl setter functions. */
    //@{

    /**
     * Raises an error: cannot convert bool to long.
     */
    virtual void setBoolValue(bool b);

    /**
     * Sets the value to the given constant.
     */
    virtual void setLongValue(long l);

    /**
     * Converts from double.
     */
    virtual void setDoubleValue(double d);

    /**
     * Raises an error: cannot convert string to long.
     */
    virtual void setStringValue(const char *s);

    /**
     * Raises an error: cannot convert XML to long.
     */
    virtual void setXMLValue(cXMLElement *node);

    /**
     * Sets the value to the given expression. This object will
     * assume the responsibility to delete the expression object.
     */
    virtual void setExpression(cExpression *e);
    //@}

    /** @name Redefined cParImpl getter functions. */
    //@{

    /**
     * Raises an error: cannot convert long to bool.
     */
    virtual bool boolValue(cComponent *context) const;

    /**
     * Returns the value of the parameter.
     */
    virtual long longValue(cComponent *context) const;

    /**
     * Converts the value to double.
     */
    virtual double doubleValue(cComponent *context) const;

    /**
     * Raises an error: cannot convert long to string.
     */
    virtual const char *stringValue(cComponent *context) const;

    /**
     * Raises an error: cannot convert long to string.
     */
    virtual std::string stdstringValue(cComponent *context) const;

    /**
     * Raises an error: cannot convert long to XML.
     */
    virtual cXMLElement *xmlValue(cComponent *context) const;

    /**
     * Returns pointer to the expression stored by the object, or NULL.
     */
    virtual cExpression *getExpression() const;
    //@}

    /** @name Type, prompt text, input flag, change flag. */
    //@{

    /**
     * Returns LONG.
     */
    virtual Type getType() const;

    /**
     * Returns true.
     */
    virtual bool isNumeric() const;
    //@}

    /** @name Redefined cParImpl misc functions. */
    //@{

    /**
     * Replaces for non-const values, replaces the stored expression with its
     * evaluation.
     */
    virtual void convertToConst(cComponent *context);

    /**
     * Returns the value in text form.
     */
    virtual std::string str() const;

    /**
     * Converts from text.
     */
    virtual void parse(const char *text);

    /**
     * Object comparison.
     */
    virtual int compare(const cParImpl *other) const;
    //@}
};

NAMESPACE_END


#endif


