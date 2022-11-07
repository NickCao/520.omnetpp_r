//==========================================================================
//  CPACKETQUEUE.H - part of
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

#ifndef __CPACKETQUEUE_H
#define __CPACKETQUEUE_H

#include "cqueue.h"
#include "cmessage.h"

NAMESPACE_BEGIN


/**
 * A queue class specialized for cPacket objects. The added value
 * is that this class keeps track of the total queue length in bits
 * as well.
 *
 * @ingroup Containers
 */
class SIM_API cPacketQueue : public cQueue
{
  private:
    int64 bitlength;

  protected:
    // internal
    void addLen(cPacket *pkt);

  public:
    /** @name Constructors, destructor, assignment. */
    //@{
    /**
     * Constructor.
     */
    cPacketQueue(const char *name=NULL, CompareFunc cmp=NULL);

    /**
     * Copy constructor. Contained objects that are owned by the queue
     * will be duplicated so that the new queue will have its own copy
     * of them.
     */
    cPacketQueue(const cPacketQueue& queue);

    /**
     * Assignment operator. Duplication and assignment work all right with cPacketQueue.
     * Contained objects that are owned by the queue will be duplicated
     * so that the new queue will have its own copy of them.
     *
     * The name member doesn't get copied; see cNamedObject's operator=() for more details.
     */
    cPacketQueue& operator=(const cPacketQueue& queue);
    //@}

    /** @name Redefined cObject member functions. */
    //@{

    /**
     * Duplication and assignment work all right with cPacketQueue.
     * Contained objects that are owned by the queue will be duplicated
     * so that the new queue will have its own copy of them.
     */
    virtual cPacketQueue *dup() const  {return new cPacketQueue(*this);}

    /**
     * Produces a one-line description of the object's contents.
     * See cObject for more details.
     */
    virtual std::string info() const;

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

    /** @name Setup, insertion and removal functions. */
    //@{
    /**
     * Adds an element to the back of the queue. Trying to insert a
     * NULL pointer is an error (throws cRuntimeError). The given
     * object must be an instance of cPacket.
     */
    virtual void insert(cPacket *pkt);

    /**
     * Inserts exactly before the given object. If the given position
     * does not exist or if you try to insert a NULL pointer,
     * cRuntimeError is thrown. The given object must be an instance
     * of cPacket.
     */
    virtual void insertBefore(cPacket *where, cPacket *pkt);

    /**
     * Inserts exactly after the given object. If the given position
     * does not exist or if you try to insert a NULL pointer,
     * cRuntimeError is thrown. The given object must be an instance
     * of cPacket.
     */
    virtual void insertAfter(cPacket *where, cPacket *pkt);

    /**
     * Unlinks and returns the object given. If the object is not in the
     * queue, NULL pointer is returned. The given object must be an instance
     * of cPacket.
     */
    virtual cPacket *remove(cPacket *pkt);

    /**
     * Unlinks and returns the front element in the queue. If the queue
     * is empty, cRuntimeError is thrown.
     */
    virtual cPacket *pop();
    //@}

    /** @name Query functions. */
    //@{
    /**
     * Returns the total size of the messages in the queue, in bits.
     * This is the sum of the message bit lengths; see cPacket::getBitLength().
     */
    int64 getBitLength() const  {return bitlength;}

    /**
     * Returns the sum of the message lengths in bytes, that is, getBitLength()/8.
     * If getBitLength() is not a multiple of 8, the result is rounded up.
     */
    int64 getByteLength() const  {return (bitlength+7)>>3;}

    /**
     * Returns pointer to the object at the front of the queue.
     * This is the element to be return by pop().
     * Returns NULL if the queue is empty.
     */
    virtual cPacket *front() const  {return (cPacket *)cQueue::front();}

    /**
     * Returns pointer to the last (back) element in the queue.
     * This is the element most recently added by insert().
     * Returns NULL if the queue is empty.
     */
    virtual cPacket *back() const  {return (cPacket *)cQueue::back();}

    /**
     * Returns the ith element in the queue, or NULL if i is out of range.
     * get(0) returns the front element. This method performs linear
     * search.
     */
    cPacket *get(int i) const  {return (cPacket *)cQueue::get(i);}
    //@}
};

NAMESPACE_END


#endif

