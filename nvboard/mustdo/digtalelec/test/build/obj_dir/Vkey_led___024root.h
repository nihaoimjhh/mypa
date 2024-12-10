// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkey_led.h for the primary calling header

#ifndef VERILATED_VKEY_LED___024ROOT_H_
#define VERILATED_VKEY_LED___024ROOT_H_  // guard

#include "verilated.h"

class Vkey_led__Syms;

class Vkey_led___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(SW,3,0);
    VL_OUT8(ledr0,0,0);
    VL_OUT8(ledr1,0,0);
    VL_OUT8(ledr2,0,0);
    VL_OUT8(ledr3,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vkey_led__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vkey_led___024root(Vkey_led__Syms* symsp, const char* v__name);
    ~Vkey_led___024root();
    VL_UNCOPYABLE(Vkey_led___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
