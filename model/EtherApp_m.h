//
// Generated file, do not edit! Created by opp_msgc 4.0 from EtherApp.msg.
//

#ifndef _ETHERAPP_M_H_
#define _ETHERAPP_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0400
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{ ... }} section:

#include "INETDefs.h"
#define ETHERAPP_CLI_SAP  0xf0
#define ETHERAPP_SRV_SAP  0xf1
// end cplusplus



/**
 * Class generated from <tt>EtherApp.msg</tt> by opp_msgc.
 * <pre>
 * packet EtherAppReq
 * {
 *     long requestId;
 *     long responseBytes;
 * }
 * </pre>
 */
class EtherAppReq : public cPacket
{
  protected:
    long requestId_var;
    long responseBytes_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherAppReq&);

  public:
    EtherAppReq(const char *name=NULL, int kind=0);
    EtherAppReq(const EtherAppReq& other);
    virtual ~EtherAppReq();
    EtherAppReq& operator=(const EtherAppReq& other);
    virtual EtherAppReq *dup() const {return new EtherAppReq(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual long getRequestId() const;
    virtual void setRequestId(long requestId_var);
    virtual long getResponseBytes() const;
    virtual void setResponseBytes(long responseBytes_var);
};

inline void doPacking(cCommBuffer *b, EtherAppReq& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherAppReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>EtherApp.msg</tt> by opp_msgc.
 * <pre>
 * packet EtherAppResp
 * {
 *     int requestId;
 *     int numFrames;
 * }
 * </pre>
 */
class EtherAppResp : public cPacket
{
  protected:
    int requestId_var;
    int numFrames_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherAppResp&);

  public:
    EtherAppResp(const char *name=NULL, int kind=0);
    EtherAppResp(const EtherAppResp& other);
    virtual ~EtherAppResp();
    EtherAppResp& operator=(const EtherAppResp& other);
    virtual EtherAppResp *dup() const {return new EtherAppResp(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getRequestId() const;
    virtual void setRequestId(int requestId_var);
    virtual int getNumFrames() const;
    virtual void setNumFrames(int numFrames_var);
};

inline void doPacking(cCommBuffer *b, EtherAppResp& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherAppResp& obj) {obj.parsimUnpack(b);}


#endif // _ETHERAPP_M_H_
