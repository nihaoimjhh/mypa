// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(BTN,2,0);
    VL_IN8(SW1,3,0);
    VL_IN8(SW2,3,0);
    VL_OUT8(LD,6,0);
    CData/*0:0*/ top__DOT____VdfgTmp_h7abdcc16__0;
    CData/*0:0*/ top__DOT____VdfgTmp_h76c634fb__0;
    CData/*0:0*/ top__DOT____VdfgTmp_h5a14e8fb__0;
    CData/*0:0*/ top__DOT____VdfgTmp_ha15450f1__0;
    CData/*0:0*/ top__DOT__add3__DOT__cout4;
    CData/*2:0*/ top__DOT__add3__DOT__l;
    CData/*0:0*/ top__DOT__sub3__DOT__insert_0__DOT__cout4;
    CData/*2:0*/ top__DOT__sub3__DOT__insert_0__DOT__l;
    CData/*0:0*/ top__DOT__c3__DOT__eq1;
    CData/*0:0*/ top__DOT__c3__DOT__eq2;
    CData/*0:0*/ top__DOT__c3__DOT__eq0;
    CData/*0:0*/ top__DOT__c3__DOT____VdfgTmp_h71ab6dfa__0;
    CData/*0:0*/ top__DOT__c3__DOT____VdfgTmp_h36219a96__0;
    CData/*0:0*/ top__DOT__c3__DOT____VdfgTmp_ha43d8be6__0;
    CData/*0:0*/ top__DOT__c3__DOT____VdfgTmp_ha34209dd__0;
    CData/*0:0*/ top__DOT__c3__DOT____VdfgTmp_hf557f565__0;
    CData/*0:0*/ top__DOT__c3__DOT____VdfgTmp_he1976823__0;
    CData/*1:0*/ __VdfgTmp_h48091d8f__0;
    CData/*1:0*/ __VdfgTmp_he0ed0bff__0;
    CData/*1:0*/ __VdfgTmp_h4b2d08f0__0;
    CData/*1:0*/ __VdfgTmp_hd800e939__0;
    CData/*1:0*/ __VdfgTmp_h26c8da6b__0;
    CData/*1:0*/ __VdfgTmp_h7f867a1a__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
