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
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(zero1,6,0);
    VL_OUT8(zero2,6,0);
    VL_OUT8(outdata,7,0);
    VL_OUT8(LD,0,0);
    VL_OUT8(count,7,0);
    VL_OUT8(count_high,6,0);
    VL_OUT8(count_low,6,0);
    VL_OUT8(key_code_high,6,0);
    VL_OUT8(key_code_low,6,0);
    VL_OUT8(ascii_high,6,0);
    VL_OUT8(ascii_low,6,0);
    CData/*0:0*/ top__DOT__state;
    CData/*0:0*/ top__DOT__next_state;
    CData/*7:0*/ top__DOT__key_code;
    CData/*0:0*/ top__DOT__tep;
    CData/*3:0*/ top__DOT__my_keyboard__DOT__count;
    CData/*2:0*/ top__DOT__my_keyboard__DOT__ps2_clk_sync;
    CData/*0:0*/ top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0;
    CData/*7:0*/ top__DOT__my_ascii__DOT__ascii;
    CData/*0:0*/ __Vdly__top__DOT__state;
    CData/*7:0*/ __Vdly__top__DOT__key_code;
    CData/*0:0*/ __Vtrigrprev__TOP__ps2_clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ top__DOT__my_keyboard__DOT__buffer;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

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
