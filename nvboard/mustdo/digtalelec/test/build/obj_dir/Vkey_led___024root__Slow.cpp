// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkey_led.h for the primary calling header

#include "verilated.h"

#include "Vkey_led__Syms.h"
#include "Vkey_led___024root.h"

void Vkey_led___024root___ctor_var_reset(Vkey_led___024root* vlSelf);

Vkey_led___024root::Vkey_led___024root(Vkey_led__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vkey_led___024root___ctor_var_reset(this);
}

void Vkey_led___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vkey_led___024root::~Vkey_led___024root() {
}
