// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKEY_LED__SYMS_H_
#define VERILATED_VKEY_LED__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vkey_led.h"

// INCLUDE MODULE CLASSES
#include "Vkey_led___024root.h"

// SYMS CLASS (contains all model state)
class Vkey_led__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vkey_led* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vkey_led___024root             TOP;

    // CONSTRUCTORS
    Vkey_led__Syms(VerilatedContext* contextp, const char* namep, Vkey_led* modelp);
    ~Vkey_led__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
