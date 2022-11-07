//==========================================================================
//  PACKING.H - part of
//                     OMNeT++/OMNEST
//            Discrete System Simulation in C++
//
//==========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#ifndef __PACKING_H
#define __PACKING_H

#include <vector>
#include <list>
#include <set>
#include <map>
#include "ccommbuffer.h"

NAMESPACE_BEGIN

//
// This file contains methods for generated parsimPack/parsimUnpack methods
//

//
// pack/unpack functions for primitive types
//
// Note: pack doesn't use "const", as the template rule somehow doesn't fire
// then (VC++ 7.1)
//
#define DOPACKING(T,R) \
          inline void doPacking(cCommBuffer *b, /*const*/ T R a) {b->pack(a);}  \
          inline void doPacking(cCommBuffer *b, /*const*/ T *a, int n) {b->pack(a,n);}  \
          inline void doUnpacking(cCommBuffer *b, T& a) {b->unpack(a);}  \
          inline void doUnpacking(cCommBuffer *b, T *a, int n) {b->unpack(a,n);}
#define _
DOPACKING(char,_)
DOPACKING(unsigned char,_)
DOPACKING(bool,_)
DOPACKING(short,_)
DOPACKING(unsigned short,_)
DOPACKING(int,_)
DOPACKING(unsigned int,_)
DOPACKING(long,_)
DOPACKING(unsigned long,_)
DOPACKING(float,_)
DOPACKING(double,_)
DOPACKING(long double,_)
DOPACKING(char *,_)
DOPACKING(SimTime,_)
DOPACKING(opp_string,&)
#undef _
#undef DOPACKING

//
// Default pack/unpack function for arrays
//
template<typename T>
void doPacking(cCommBuffer *b, /*const*/ T *t, int n)
{
    for (int i=0; i<n; i++)
        doPacking(b, t[i]);
}

template<typename T>
void doUnpacking(cCommBuffer *b, T *t, int n)
{
    for (int i=0; i<n; i++)
        doUnpacking(b, t[i]);
}


//
// Packing/unpacking an std::vector
//
template<typename T>
void doPacking(cCommBuffer *buffer, /*const*/ std::vector<T>& v)
{
    int n = v.size();
    doPacking(buffer, n);
    for (int i=0; i<n; i++)
        doPacking(buffer, v[i]);
}

template<typename T>
void doUnpacking(cCommBuffer *buffer, std::vector<T>& v)
{
    int n;
    doUnpacking(buffer, n);
    v.resize(n);
    for (int i=0; i<n; i++)
        doUnpacking(buffer, v[i]);
}

template<typename T, typename A>
void doPacking(cCommBuffer *buffer, /*const*/ std::vector<T,A>& v)
{
    int n = v.size();
    doPacking(buffer, n);
    for (int i=0; i<n; i++)
        doPacking(buffer, v[i]);
}

template<typename T, typename A>
void doUnpacking(cCommBuffer *buffer, std::vector<T,A>& v)
{
    int n;
    doUnpacking(buffer, n);
    v.resize(n);
    for (int i=0; i<n; i++)
        doUnpacking(buffer, v[i]);
}


//
// Packing/unpacking an std::list
//
template<typename T>
void doPacking(cCommBuffer *buffer, /*const*/ std::list<T>& l)
{
    doPacking(buffer, (int)l.size());
    for (typename std::list<T>::const_iterator it = l.begin(); it != l.end(); it++)
        doPacking(buffer, (T&)*it);
}

template<typename T>
void doUnpacking(cCommBuffer *buffer, std::list<T>& l)
{
    int n;
    doUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        l.push_back(T());
        doUnpacking(buffer, l.back());
    }
}

template<typename T, typename A>
void doPacking(cCommBuffer *buffer, /*const*/ std::list<T,A>& l)
{
    doPacking(buffer, (int)l.size());
    for (typename std::list<T,A>::const_iterator it = l.begin(); it != l.end(); it++)
        doPacking(buffer, (T&)*it);
}

template<typename T, typename A>
void doUnpacking(cCommBuffer *buffer, std::list<T,A>& l)
{
    int n;
    doUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        l.push_back(T());
        doUnpacking(buffer, l.back());
    }
}

//
// Packing/unpacking an std::set
//
template<typename T>
void doPacking(cCommBuffer *buffer, /*const*/ std::set<T>& s)
{
    doPacking(buffer, (int)s.size());
    for (typename std::set<T>::const_iterator it = s.begin(); it != s.end(); it++)
        doPacking(buffer, (T&)*it);
}

template<typename T>
void doUnpacking(cCommBuffer *buffer, std::set<T>& s)
{
    int n;
    doUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        T x;
        doUnpacking(buffer, x);
        s.insert(x);
    }
}

template<typename T, typename Tr>
void doPacking(cCommBuffer *buffer, /*const*/ std::set<T,Tr>& s)
{
    doPacking(buffer, (int)s.size());
    for (typename std::set<T,Tr>::const_iterator it = s.begin(); it != s.end(); it++)
        doPacking(buffer, (T&)*it);
}

template<typename T, typename Tr>
void doUnpacking(cCommBuffer *buffer, std::set<T,Tr>& s)
{
    int n;
    doUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        T x;
        doUnpacking(buffer, x);
        s.insert(x);
    }
}

template<typename T, typename Tr, typename A>
void doPacking(cCommBuffer *buffer, /*const*/ std::set<T,Tr,A>& s)
{
    doPacking(buffer, (int)s.size());
    for (typename std::set<T,Tr,A>::const_iterator it = s.begin(); it != s.end(); it++)
        doPacking(buffer, *it);
}

template<typename T, typename Tr, typename A>
void doUnpacking(cCommBuffer *buffer, std::set<T,Tr,A>& s)
{
    int n;
    doUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        T x;
        doUnpacking(buffer, x);
        s.insert(x);
    }
}

//
// Packing/unpacking an std::map
//
template<typename K, typename V>
void doPacking(cCommBuffer *buffer, /*const*/ std::map<K,V>& m)
{
    doPacking(buffer, (int)m.size());
    for (typename std::map<K,V>::const_iterator it = m.begin(); it != m.end(); it++) {
        doPacking(buffer, (K&)it->first);
        doPacking(buffer, (V&)it->second);
    }
}

template<typename K, typename V>
void doUnpacking(cCommBuffer *buffer, std::map<K,V>& m)
{
    int n;
    doUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        K k; V v;
        doUnpacking(buffer, k);
        doUnpacking(buffer, v);
        m[k] = v;
    }
}

template<typename K, typename V, typename Tr>
void doPacking(cCommBuffer *buffer, /*const*/ std::map<K,V,Tr>& m)
{
    doPacking(buffer, (int)m.size());
    for (typename std::map<K,V,Tr>::const_iterator it = m.begin(); it != m.end(); it++) {
        doPacking(buffer, it->first);
        doPacking(buffer, it->second);
    }
}

template<typename K, typename V, typename Tr>
void doUnpacking(cCommBuffer *buffer, std::map<K,V,Tr>& m)
{
    int n;
    doUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        K k; V v;
        doUnpacking(buffer, k);
        doUnpacking(buffer, v);
        m[k] = v;
    }
}

template<typename K, typename V, typename Tr, typename A>
void doPacking(cCommBuffer *buffer, /*const*/ std::map<K,V,Tr,A>& m)
{
    doPacking(buffer, (int)m.size());
    for (typename std::map<K,V,Tr,A>::const_iterator it = m.begin(); it != m.end(); it++) {
        doPacking(buffer, it->first);
        doPacking(buffer, it->second);
    }
}

template<typename K, typename V, typename Tr, typename A>
void doUnpacking(cCommBuffer *buffer, std::map<K,V,Tr,A>& m)
{
    int n;
    doUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        K k; V v;
        doUnpacking(buffer, k);
        doUnpacking(buffer, v);
        m[k] = v;
    }
}

NAMESPACE_END

#endif

