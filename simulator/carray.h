//==========================================================================
//  CARRAY.H - part of
//                     OMNeT++/OMNEST
//            Discrete System Simulation in C++
//
//
//  Declaration of the following classes:
//    cArray : flexible array to store cObject objects
//
//==========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#ifndef __CARRAY_H
#define __CARRAY_H

#include "cownedobject.h"

NAMESPACE_BEGIN


/**
 * Container object that holds objects derived from cObject.
 * cArray stores the pointers of the objects inserted instead of making copies.
 * cArray works as an array, but if it gets full, it grows automatically by
 * a specified delta.
 *
 * Ownership of cOwnedObjects may be controlled by invoking setTakeOwnership()
 * prior to inserting objects. Objects that cannot track their ownership
 * (cObject but not cOwnedObject) are always treated as owned. Whether an
 * object is owned or not affects the operation of the destructor, clean(),
 * the copy constructor and the dup() method.
 *
 * @ingroup Containers
 */
class SIM_API cArray : public cOwnedObject
{
  public:
    /**
     * Walks along a cArray.
     */
    class Iterator
    {
      private:
        cArray *array;
        int k;

      public:
        /**
         * Constructor. Iterator will walk on the array passed as argument.
         * The starting object will be the first (if athead==true) or
         * the last (athead==false) object in the array, not counting empty slots.
         */
        Iterator(const cArray& a, bool athead=true)  {init(a, athead);}

        /**
         * Reinitializes the iterator object.
         */
        void init(const cArray& a, bool athead=true);

        /**
         * Returns the current object, or NULL if the iterator is not
         * at a valid position.
         */
        cObject *operator()()  {return array->get(k);}

        /**
         * Returns true if the iterator has reached either end of the array.
         */
        bool end() const   {return k<0 || k>=array->size();}

        /**
         * Returns the current object, then moves the iterator to the next item.
         * Empty slots in the array are skipped.
         * If the iterator has reached either end of the array, nothing happens;
         * you have to call init() again to restart iterating.
         * If elements are added or removed during interation, the behaviour
         * is undefined.
         */
        cObject *operator++(int);

        /**
         * Returns the current object, then moves the iterator to the previous item.
         * Empty slots in the array are skipped.
         * If the iterator has reached either end of the array, nothing happens;
         * you have to call init() again to restart iterating.
         * If elements are added or removed during interation, the behaviour
         * is undefined.
         */
        cObject *operator--(int);
    };

  private:
    enum {FL_TKOWNERSHIP = 4};
    cObject **vect;   // vector of objects
    int capacity;     // allocated size of vect[]
    int delta;        // if needed, grows by delta
    int firstfree;    // first free position in vect[]
    int last;         // last used position

  public:
    /** @name Constructors, destructor, assignment. */
    //@{

    /**
     * Copy constructor. Contained objects that are owned by cArray
     * will be duplicated so that the new cArray will have its own
     * copy of them.
     */
    cArray(const cArray& list);

    /**
     * Constructor. The initial capacity of the container and the delta
     * (by which the capacity will grow if it gets full) can be specified.
     */
    explicit cArray(const char *name=NULL, int capacity=0, int delta=10);

    /**
     * Destructor. The contained objects that were owned by the container
     * will be deleted.
     */
    virtual ~cArray();

    /**
     * Assignment operator. The name member doesn't get copied;
     * see cNamedObject's operator=() for more details.
     * Duplication and assignment work all right with cArray.
     * Contained objects that are owned by cArray will be duplicated
     * so that the new cArray will have its own copy of them.
     */
    cArray& operator=(const cArray& list);
    //@}

    /** @name Redefined cObject member functions */
    //@{

    /**
     * Duplication and assignment are supported by cArray.
     * Contained objects that are owned by cArray will be duplicated
     * so that the new cArray will have its own copy of them.
     */
    virtual cArray *dup() const  {return new cArray(*this);}

    /**
     * Produces a one-line description of the object's contents.
     * See cObject for more details.
     */
    virtual std::string info() const;

    /**
     * Calls v->visit(this) for each contained object.
     * See cObject for more details.
     */
    virtual void forEachChild(cVisitor *v);

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

    /** @name Container functions. */
    //@{

    /**
     * Returns the index of last used position+1. This only equals the
     * number of contained objects if there are no "holes" (NULL elements)
     * in the array.
     */
    int size() const {return last+1;}

    /**
     * Makes the container empty. Contained objects that were owned by the
     * container will be deleted.
     */
    void clear();

    /**
     * Inserts the object into the array. Only the pointer of the object
     * will be stored. The return value is the object's index in the
     * array.
     */
    int add(cObject *obj);

    /**
     * Inserts the object into the array at the given position. If
     * the position is occupied, the function throws a cRuntimeError.
     * The return value is the object's index in the array.
     */
    int addAt(int m, cObject *obj);

    /**
     * Inserts the object into the array. If the array already contains
     * an object with the same name, it will be replaced (hashtable-like
     * behavior.) The replaced object, if it was owned by the container,
     * is deleted using discard().
     * The return value is the object's index in the array.
     */
    int set(cObject *obj);

    /**
     * Searches the array for the pointer of the object passed and returns
     * the index of the first match. If the object was not found, -1 is
     * returned.
     */
    int find(cObject *obj) const;

    /**
     * Returns the index of the first item in the array that has the
     * name pointed to by s (cObject::isName() is used.)
     * If no such item was found, -1 is returned.
     */
    int find(const char *objname) const;

    /**
     * Returns reference to the mth object in the array. Returns NULL
     * if the mth position is not used.
     */
    cObject *get(int m);

    /**
     * Returns reference to the first object in the array with name s.
     * Returns NULL if no object with the given name was found.
     */
    cObject *get(const char *objname);

    /**
     * Returns reference to the mth object in the array. Returns NULL
     * if the mth position is not used.
     */
    const cObject *get(int m) const;

    /**
     * Returns reference to the first object in the array with name s.
     * Returns NULL if no object with the given name was found.
     */
    const cObject *get(const char *objname) const;

    /**
     * The same as get(int). With the indexing operator,
     * cArray can be used as a vector.
     */
    cObject *operator[](int m)  {return get(m);}

    /**
     * The same as get(const char *). With the indexing operator,
     * cArray can be used as a vector.
     */
    cObject *operator[](const char *objname)  {return get(objname);}

    /**
     * The same as get(int). With the indexing operator,
     * cArray can be used as a vector.
     */
    const cObject *operator[](int m) const  {return get(m);}

    /**
     * The same as get(const char *). With the indexing operator,
     * cArray can be used as a vector.
     */
    const cObject *operator[](const char *objname) const  {return get(objname);}

    /**
     * Returns true if position m is used in the array, otherwise false.
     */
    bool exist(int m) const  {return m>=0 && m<=last && vect[m]!=NULL;}

    /**
     * Returns true if the array contains an object with the given name,
     * otherwise false.
     */
    bool exist(const char *objname) const  {return find(objname)!=-1;}

    /**
     * Removes the object given with its index/name/pointer from the
     * container. (If the object was owned by the container, drop()
     * is called.)
     */
    cObject *remove(int m);

    /**
     * Removes the object given with its index/name/pointer from the
     * container. (If the object was owned by the container, drop()
     * is called.)
     */
    cObject *remove(const char *objname);

    /**
     * Removes the object given with its index/name/pointer from the
     * container, and returns the same pointer. If the object was not
     * found, NULL is returned. (If the object was owned by the container, drop()
     * is called.)
     */
    cObject *remove(cObject *obj);
    //@}

    /** @name Ownership control flag.
     *
     * The ownership control flag is to be used by derived container classes.
     * If the flag is set, the container should take() any object that is
     * inserted into it.
     */
    //@{

    /**
     * Sets the flag which determines whether the container object should
     * automatically take ownership of the objects that are inserted into it.
     * It does not affect objects already in the queue. When an inserted
     * object is owned by the container, that means it will be deleted when
     * the container object is deleted or cleared, and will be duplicated when
     * the container object is duplicated or copied.
     *
     * Setting the flag to false does not affect the treatment of objects
     * that are NOT cOwnedObject. Since they do not support the ownership
     * protocol, they will always be treated by the container.
     */
    void setTakeOwnership(bool tk) {setFlag(FL_TKOWNERSHIP,tk);}

    /**
     * Returns the flag which determines whether the container object
     * should automatically take ownership of the objects that are inserted
     * into it. See setTakeOwnedship() for more details.
     */
    bool getTakeOwnership() const   {return flags&FL_TKOWNERSHIP;}
    //@}
};

NAMESPACE_END


#endif

