//=========================================================================
//  CMSGHEAP.CC - part of
//
//                  OMNeT++/OMNEST
//           Discrete System Simulation in C++
//
//   Member functions of
//    cMessageHeap : future event set, implemented as heap
//
//  Author: Andras Varga, based on the code from Gabor Lencse
//          (the original is taken from G. H. Gonnet's book pp. 273-274)
//
//=========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#if ! defined(SPEC)
#  include <stdio.h>          // sprintf
#  include <string.h>         // strlen
#  include <stdlib.h>         // qsort
#else
#   include <cstdio>           // sprintf
#   include <cstring>          // strlen
#   include "spec_qsort.h"
#   if defined(__SUNPRO_CC)
       // This C++ program includes <math.h> directly. Doing so in C++ on
       // Solaris creates a preprocessing error because of the ambiguity 
       // between std::exception (C++) and struct exception {} in <math.h>.
       // Setting  __MATHERR_RENAME_EXCEPTION avoids this ambiguity.
#      if !defined(__MATHERR_RENAME_EXCEPTION)
#         define __MATHERR_RENAME_EXCEPTION
#      endif
#   endif
#endif

#include <sstream>
#include "globals.h"
#include "cmessage.h"
#include "cmessageheap.h"

USING_NAMESPACE

Register_Class(cMessageHeap)


inline int operator <= (cMessage& a, cMessage& b)
{
    return (a.getArrivalTime() < b.getArrivalTime()) ? 1 :
           (a.getArrivalTime() > b.getArrivalTime()) ? 0 :
           (a.getSchedulingPriority() < b.getSchedulingPriority()) ? 1 :
           (a.getSchedulingPriority() > b.getSchedulingPriority()) ? 0 :
            a.getInsertOrder() <= b.getInsertOrder();
}

inline int operator > (cMessage& a, cMessage& b)
{
    return !(a<=b);
}

static int qsort_cmp_msgs(const void *p1, const void *p2)
{
    cMessage *m1 = *(cMessage **)p1;
    cMessage *m2 = *(cMessage **)p2;

    if (m1->getArrivalTime() < m2->getArrivalTime())
        return -1;
    if (m1->getArrivalTime() > m2->getArrivalTime())
        return 1;

    int dpri = m1->getSchedulingPriority() - m2->getSchedulingPriority();
    if (dpri) return dpri;

    return (m1->getInsertOrder() < m2->getInsertOrder()) ? -1 : 1;
}

//----

cMessageHeap::cMessageHeap(const char *name, int siz) : cOwnedObject(name, false)
{
    insertcntr = 0L;
    n = 0;
    size = siz;
    h = new cMessage *[size+1];    // +1 is necessary because h[0] is not used
}

cMessageHeap::cMessageHeap(const cMessageHeap& heap) : cOwnedObject()
{
    h=NULL; n=0;
    setName(heap.getName());
    operator=(heap);
}

cMessageHeap::~cMessageHeap()
{
    clear();
    delete [] h;
}

std::string cMessageHeap::info() const
{
    if (n==0)
        return std::string("empty");
    std::stringstream out;
    out << "length=" << n << " Tmin=" << h[1]->getArrivalTime();
    return out.str();
}

void cMessageHeap::forEachChild(cVisitor *v)
{
    sort();

    for (int i=1; i<=n; i++)
        if (h[i])
            v->visit(h[i]);
}

void cMessageHeap::clear()
{
    for (int i=1; i<=n; i++)
        dropAndDelete(h[i]);
    n=0;
}

cMessageHeap& cMessageHeap::operator=(const cMessageHeap& heap)
{
    if (this==&heap) return *this;

    clear();

    cOwnedObject::operator=(heap);

    n = heap.n;
    size = heap.size;
    delete [] h;
    h = new cMessage *[size+1];

    for (int i=1; i<=n; i++)
        take( h[i]=(cMessage *)heap.h[i]->dup() );
    return *this;
}

cMessage *cMessageHeap::peek(int m)
{
    // map 0..n-1 index range to heap's internal 1..n indices
    if (m<0 || m>=n)
        return NULL;
    return h[m+1];
}

void cMessageHeap::sort()
{
#ifdef SPEC    
    spec_qsort(h+1,n,sizeof(cMessage *),qsort_cmp_msgs);
#else    
    qsort(h+1,n,sizeof(cMessage *),qsort_cmp_msgs);
#endif
    for (int i=1; i<=n; i++) h[i]->heapindex=i;
}

void cMessageHeap::insert(cMessage *event)
{
    int i,j;

    event->insertordr = insertcntr++;

    if (++n > size)
    {
        size *= 2;
        cMessage **hnew = new cMessage *[size+1];
        for (i=1; i<=n-1; i++)
             hnew[i]=h[i];
        delete [] h;
        h = hnew;
    }

    take(event);

    for (j=n; j>1; j=i)
    {
        i = j>>1;
        if (*h[i] <= *event)   //direction
            break;

        (h[j]=h[i])->heapindex=j;
    }
    (h[j]=event)->heapindex=j;
}

void cMessageHeap::shiftup(int from)
{
    // restores heap structure (in a sub-heap)
    int i,j;
    cMessage *temp;

    i = from;
    while ((j=i<<1) <= n)
    {
        if (j<n && (*h[j] > *h[j+1]))   //direction
            j++;
        if (*h[i] > *h[j])  //is change necessary?
        {
            temp=h[j];
            (h[j]=h[i])->heapindex=j;
            (h[i]=temp)->heapindex=i;
            i=j;
        }
        else
            break;
    }
}

cMessage *cMessageHeap::peekFirst() const
{
    return n==0 ? NULL : h[1];
}

cMessage *cMessageHeap::removeFirst()
{
    if (n>0)
    {
        // first is taken out and replaced by the last one
        cMessage *event = h[1];
        (h[1]=h[n--])->heapindex=1;
        shiftup();
        drop(event);
        event->heapindex=-1;
        return event;
    }
    return NULL;
}

cMessage *cMessageHeap::remove(cMessage *event)
{
    // make sure it is really on the heap
    if (event->heapindex==-1)
        return NULL;

    // sanity check:
    // ASSERT(h[event->heapindex]==event);

    // last element will be used to fill the hole
    int father, out = event->heapindex;
    cMessage *fill = h[n--];
    while ((father=out>>1)!=0 && *h[father] > *fill)
    {
        (h[out]=h[father])->heapindex=out;  // father is moved down
        out=father;
    }
    (h[out]=fill)->heapindex=out;
    shiftup(out);
    drop(event);
    event->heapindex=-1;
    return event;
}

