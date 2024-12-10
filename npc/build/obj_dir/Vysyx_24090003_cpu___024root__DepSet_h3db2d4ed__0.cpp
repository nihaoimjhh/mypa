// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090003_cpu.h for the primary calling header

#include "verilated.h"

#include "Vysyx_24090003_cpu__Syms.h"
#include "Vysyx_24090003_cpu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_cpu___024root___dump_triggers__act(Vysyx_24090003_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24090003_cpu___024root___eval_triggers__act(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->cpu_clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__cpu_clk))) 
                                      | ((IData)(vlSelf->cpu_rs) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__cpu_rs))));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->cpu_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__cpu_clk)));
    vlSelf->__Vtrigrprev__TOP__cpu_clk = vlSelf->cpu_clk;
    vlSelf->__Vtrigrprev__TOP__cpu_rs = vlSelf->cpu_rs;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24090003_cpu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
