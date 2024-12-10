// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090003_cpu.h for the primary calling header

#include "verilated.h"

#include "Vysyx_24090003_cpu___024root.h"

VL_ATTR_COLD void Vysyx_24090003_cpu___024root___eval_static(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_24090003_cpu___024root___eval_initial(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__cpu_clk = vlSelf->cpu_clk;
    vlSelf->__Vtrigrprev__TOP__cpu_rs = vlSelf->cpu_rs;
}

VL_ATTR_COLD void Vysyx_24090003_cpu___024root___eval_final(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_24090003_cpu___024root___eval_triggers__stl(Vysyx_24090003_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_cpu___024root___dump_triggers__stl(Vysyx_24090003_cpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_cpu___024root___eval_stl(Vysyx_24090003_cpu___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24090003_cpu___024root___eval_settle(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_24090003_cpu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24090003_cpu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/jinghanhui/ysyx-workbench/npc/vsrc/ysyx_24090003_cpu.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_24090003_cpu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_cpu___024root___dump_triggers__stl(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24090003_cpu___024root___stl_sequent__TOP__0(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__reg_write_data_enable_r 
        = (IData)((0x13U == (0x707fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r)));
    if ((0x13U == (0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))) {
        if ((0U == (7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                          >> 0xcU)))) {
            vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__alu_control = 0U;
        }
    }
    vlSelf->npc = vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r;
}

VL_ATTR_COLD void Vysyx_24090003_cpu___024root___eval_stl(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_24090003_cpu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_cpu___024root___dump_triggers__act(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge cpu_clk or posedge cpu_rs)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge cpu_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_cpu___024root___dump_triggers__nba(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge cpu_clk or posedge cpu_rs)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge cpu_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24090003_cpu___024root___ctor_var_reset(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->cpu_clk = 0;
    vlSelf->cpu_rs = 0;
    vlSelf->addr_read_data = 0;
    vlSelf->npc = 0;
    vlSelf->addr_write_data = 0;
    vlSelf->EXaddr = 0;
    vlSelf->addr_write_enable = 0;
    vlSelf->ysyx_24090003_cpu__DOT__reg_write_data = 0;
    vlSelf->ysyx_24090003_cpu__DOT__reg_write_enable = 0;
    vlSelf->ysyx_24090003_cpu__DOT__npc_write_enable = 0;
    vlSelf->ysyx_24090003_cpu__DOT__spc_write_enable = 0;
    vlSelf->ysyx_24090003_cpu__DOT__EXnpc = 0;
    vlSelf->ysyx_24090003_cpu__DOT__EXspc = 0;
    vlSelf->ysyx_24090003_cpu__DOT__EXrd = 0;
    vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__pc_r = 0;
    vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r = 0;
    vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__spc_r = 0;
    vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r = 0;
    vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__alu_control = 0;
    vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__reg_write_data_enable_r = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[__Vi0] = 0;
    }
    vlSelf->__Vdly__ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r = 0;
    vlSelf->__Vtrigrprev__TOP__cpu_clk = 0;
    vlSelf->__Vtrigrprev__TOP__cpu_rs = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
