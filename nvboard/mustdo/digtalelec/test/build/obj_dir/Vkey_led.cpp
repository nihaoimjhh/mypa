// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vkey_led.h"
#include "Vkey_led__Syms.h"

//============================================================
// Constructors

Vkey_led::Vkey_led(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vkey_led__Syms(contextp(), _vcname__, this)}
    , SW{vlSymsp->TOP.SW}
    , ledr0{vlSymsp->TOP.ledr0}
    , ledr1{vlSymsp->TOP.ledr1}
    , ledr2{vlSymsp->TOP.ledr2}
    , ledr3{vlSymsp->TOP.ledr3}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vkey_led::Vkey_led(const char* _vcname__)
    : Vkey_led(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vkey_led::~Vkey_led() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vkey_led___024root___eval_debug_assertions(Vkey_led___024root* vlSelf);
#endif  // VL_DEBUG
void Vkey_led___024root___eval_static(Vkey_led___024root* vlSelf);
void Vkey_led___024root___eval_initial(Vkey_led___024root* vlSelf);
void Vkey_led___024root___eval_settle(Vkey_led___024root* vlSelf);
void Vkey_led___024root___eval(Vkey_led___024root* vlSelf);

void Vkey_led::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vkey_led::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vkey_led___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vkey_led___024root___eval_static(&(vlSymsp->TOP));
        Vkey_led___024root___eval_initial(&(vlSymsp->TOP));
        Vkey_led___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vkey_led___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vkey_led::eventsPending() { return false; }

uint64_t Vkey_led::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vkey_led::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vkey_led___024root___eval_final(Vkey_led___024root* vlSelf);

VL_ATTR_COLD void Vkey_led::final() {
    Vkey_led___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vkey_led::hierName() const { return vlSymsp->name(); }
const char* Vkey_led::modelName() const { return "Vkey_led"; }
unsigned Vkey_led::threads() const { return 1; }
