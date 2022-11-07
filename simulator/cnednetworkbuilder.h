//==========================================================================
//  CNEDNETWORKBUILDER.H - part of
//
//                     OMNeT++/OMNEST
//            Discrete System Simulation in C++
//
//==========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 2002-2008 Andras Varga
  Copyright (C) 2006-2008 OpenSim Ltd.

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `terms' for details on this and other legal matters.
*--------------------------------------------------------------*/

#ifndef __CNETWORKBUILDER_H
#define __CNETWORKBUILDER_H

#include <string>
#include <map>
#include <vector>
#include "globals.h"
#include "cpar.h"
#include "nedelements.h"
#include "nedresourcecache.h"

NAMESPACE_BEGIN

class cModule;
class cGate;
class cChannel;
class cNEDDeclaration;

#define MAX_LOOP_NESTING 32


/**
 * Stateless object to assist in building the network, based on NED files.
 *
 * @ingroup NetworkBuilder
 */
class SIM_API cNEDNetworkBuilder
{
  protected:
    class ComponentTypeNames : public NEDResourceCache::INEDTypeNames {
      public:
        virtual bool contains(const char *qname) const  {return componentTypes.getInstance()->lookup(qname)!=NULL;}
        virtual int size() const  {return componentTypes.getInstance()->size();}
        virtual const char *get(int k) const  {return componentTypes.getInstance()->get(k)->getFullName();}
    };

  protected:
    // the current NED declaration we're working with. Stored here to
    // avoid having to pass it around as a parameter.
    cNEDDeclaration *currentDecl;

    // stack of loop variables in NED "for" loops
    struct {const char *varname; int value;} loopVarStack[MAX_LOOP_NESTING];
    int loopVarSP;

    // submodule pointers. This is an optimization because cModule::getSubmodule()
    // is slow if there are very large submodule vectors.
    typedef std::vector<cModule*> ModulePtrVector;
    typedef std::map<std::string,ModulePtrVector> SubmodMap;
    SubmodMap submodMap;

  protected:
    cModule *_submodule(cModule *parentmodp, const char *submodname, int idx=-1);
    void addSubmodulesAndConnections(cModule *modp);
    bool superTypeAllowsUnconnected(cNEDDeclaration *decl) const;
    void buildRecursively(cModule *modp, cNEDDeclaration *decl);
    std::string resolveComponentType(const NEDLookupContext& context, const char *nedtypename);
    cModuleType *findAndCheckModuleType(const char *modtypename, cModule *modp, const char *submodname);
    cModuleType *findAndCheckModuleTypeLike(const char *modTypeName, const char *likeType, cModule *modp, const char *submodname);
    std::vector<std::string> findTypeWithInterface(const char *nedtypename, const char *interfaceqname);

    std::string getSubmoduleTypeName(cModule *modp, SubmoduleElement *submod, int index = -1);
    void addSubmodule(cModule *modp, SubmoduleElement *submod);
    static cPar::Type translateParamType(int t);
    static cGate::Type translateGateType(int t);
    void doParams(cComponent *component, ParametersElement *paramsNode, bool isSubcomponent);
    void doParam(cComponent *component, ParamElement *paramNode, bool isSubcomponent);
    void doGates(cModule *component, GatesElement *gatesNode, bool isSubcomponent);
    void doGate(cModule *component, GateElement *gateNode, bool isSubcomponent);
    void doGateSizes(cModule *component, GatesElement *gatesNode, bool isSubcomponent);
    void doGateSize(cModule *component, GateElement *gateNode, bool isSubcomponent);
    void assignSubcomponentParams(cComponent *subcomponent, NEDElement *subcomponentNode);
    void setupSubmoduleGateVectors(cModule *submodule, NEDElement *submoduleNode);

    void addConnectionOrConnectionGroup(cModule *modp, NEDElement *connOrConnGroup);
    void doConnOrConnGroupBody(cModule *modp, NEDElement *connOrConnGroup, NEDElement *loopOrCondition);
    void doLoopOrCondition(cModule *modp, NEDElement *loopOrCondition);
    void doAddConnOrConnGroup(cModule *modp, NEDElement *connOrConnGroup);
    void doAddConnection(cModule *modp, ConnectionElement *conn);
    void doConnectGates(cModule *modp, cGate *srcg, cGate *destg, ConnectionElement *conn);
    cGate *resolveGate(cModule *parentmodp, const char *modname, ExpressionElement *modindexp,
                       const char *gatename, ExpressionElement *gateindexp, int subg, bool isplusplus);
    void resolveInoutGate(cModule *parentmodp, const char *modname, ExpressionElement *modindexp,
                       const char *gatename, ExpressionElement *gateindexp, bool isplusplus,
                       cGate *&gate1, cGate *&gate2);
    cModule *resolveModuleForConnection(cModule *parentmodp, const char *modname, ExpressionElement *modindexp);
    std::string getChannelTypeName(cModule *modp, cGate *srcgate, ChannelSpecElement *channelspec, const char *channelname);
    cChannel *createChannel(ChannelSpecElement *channelspec, cModule *parentmodp, cGate *srcgate);

    cChannelType *findAndCheckChannelType(const char *channeltypename, cModule *modp);
    cChannelType *findAndCheckChannelTypeLike(const char *channeltypename, const char *likeType, cModule *modp);
    ExpressionElement *findExpression(NEDElement *node, const char *exprname);
    cParImpl *getOrCreateExpression(ExpressionElement *exprNode, cPar::Type type, const char *unit, bool inSubcomponentScope);
    long evaluateAsLong(ExpressionElement *exprNode, cComponent *context, bool inSubcomponentScope);
    bool evaluateAsBool(ExpressionElement *exprNode, cComponent *context, bool inSubcomponentScope);
    std::string evaluateAsString(ExpressionElement *exprNode, cComponent *context, bool inSubcomponentScope);

  public:
    /** Constructor */
    cNEDNetworkBuilder() {}

    /**
     * Adds parameters and gates from the given NED declaration. Gate vectors
     * will be created with zero size, and a further call to setupGateVectors()
     * will be needed once parameter values have been finalized. (This method is
     * also used with channels, with the "gates" part being a no-op then.)
     * Invoked from cDynamicModule.
     */
    void addParametersAndGatesTo(cComponent *component, cNEDDeclaration *decl);

    /**
     * Sets gate vector sizes on the module, using the given NED declaration.
     * This should be called AFTER all parameters have been set, because gate
     * vector sizes may depend on parameter values. Invoked from cDynamicModule.
     */
    void setupGateVectors(cModule *module, cNEDDeclaration *decl);

    /**
     * Builds submodules and internal connections, based on the info in the
     * passed NEDElement tree. Invoked from cDynamicModule.
     */
    void buildInside(cModule *module, cNEDDeclaration *decl);
};

NAMESPACE_END


#endif





