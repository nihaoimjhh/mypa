// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090003_cpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090003_cpu___024root.h"

void Vysyx_24090003_cpu___024root___eval_act(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_24090003_cpu___024root___nba_sequent__TOP__0(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r 
        = vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r;
    if (vlSelf->cpu_rs) {
        vlSelf->__Vdly__ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r = 0x80000000U;
        vlSelf->__Vdly__ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r = 0x80000000U;
        vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__spc_r = 0x80000000U;
    } else {
        if (vlSelf->ysyx_24090003_cpu__DOT__npc_write_enable) {
            vlSelf->__Vdly__ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r 
                = vlSelf->ysyx_24090003_cpu__DOT__EXnpc;
        } else if ((1U & (~ (IData)(vlSelf->ysyx_24090003_cpu__DOT__npc_write_enable)))) {
            vlSelf->__Vdly__ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r 
                = ((IData)(4U) + vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__pc_r);
        }
        if (vlSelf->ysyx_24090003_cpu__DOT__spc_write_enable) {
            vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__spc_r 
                = vlSelf->ysyx_24090003_cpu__DOT__EXspc;
        } else if ((1U & (~ (IData)(vlSelf->ysyx_24090003_cpu__DOT__spc_write_enable)))) {
            vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__spc_r = 0U;
        }
    }
}

VL_INLINE_OPT void Vysyx_24090003_cpu___024root___nba_sequent__TOP__1(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__gpr__v0;
    __Vdlyvdim0__ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__gpr__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__gpr__v0;
    __Vdlyvval__ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__gpr__v0 = 0;
    // Body
    __Vdlyvval__ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__gpr__v0 
        = ((IData)(vlSelf->ysyx_24090003_cpu__DOT__reg_write_enable)
            ? vlSelf->ysyx_24090003_cpu__DOT__reg_write_data
            : vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__gpr
           [vlSelf->ysyx_24090003_cpu__DOT__EXrd]);
    __Vdlyvdim0__ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__gpr__v0 
        = vlSelf->ysyx_24090003_cpu__DOT__EXrd;
    vlSelf->addr_write_data = 0U;
    vlSelf->EXaddr = 0U;
    vlSelf->addr_write_enable = 0U;
    vlSelf->ysyx_24090003_cpu__DOT__npc_write_enable = 0U;
    vlSelf->ysyx_24090003_cpu__DOT__EXnpc = vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__pc_r;
    vlSelf->ysyx_24090003_cpu__DOT__spc_write_enable = 0U;
    vlSelf->ysyx_24090003_cpu__DOT__EXspc = vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__pc_r;
    if (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__reg_write_data_enable_r) {
        vlSelf->ysyx_24090003_cpu__DOT__reg_write_enable = 1U;
    } else if ((1U & (~ (IData)(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__reg_write_data_enable_r)))) {
        vlSelf->ysyx_24090003_cpu__DOT__reg_write_enable = 0U;
    }
    if ((0x13U == (0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))) {
        if ((0U == (7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                          >> 0xcU)))) {
            vlSelf->ysyx_24090003_cpu__DOT__EXrd = 
                (0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                          >> 7U));
            vlSelf->ysyx_24090003_cpu__DOT__reg_write_data 
                = ((0U == (IData)(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__alu_control))
                    ? (((0x13U == (0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                         ? ((0U == (7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                          >> 0xcU)))
                             ? vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__gpr
                            [(0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                       >> 0xfU))] : 0U)
                         : 0U) + vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__operand2_r)
                    : 0U);
        } else {
            vlSelf->ysyx_24090003_cpu__DOT__EXrd = 0U;
            vlSelf->ysyx_24090003_cpu__DOT__reg_write_data = 0U;
        }
    } else {
        vlSelf->ysyx_24090003_cpu__DOT__EXrd = 0U;
        vlSelf->ysyx_24090003_cpu__DOT__reg_write_data = 0U;
    }
    vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__gpr[__Vdlyvdim0__ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__gpr__v0] 
        = __Vdlyvval__ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__gpr__v0;
}

void Vysyx_24090003_cpu___024root____Vdpiimwrap_ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__finish_simulation_TOP();

VL_INLINE_OPT void Vysyx_24090003_cpu___024root___nba_sequent__TOP__2(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->cpu_rs) {
        vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__pc_r = 0x80000000U;
        vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r = 0U;
    } else {
        vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__pc_r 
            = vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r;
        vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
            = vlSelf->addr_read_data;
    }
    vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r 
        = vlSelf->__Vdly__ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r;
    vlSelf->npc = vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r;
    if ((IData)((0x73U == (0x707fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r)))) {
        Vysyx_24090003_cpu___024root____Vdpiimwrap_ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__finish_simulation_TOP();
    }
    vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__reg_write_data_enable_r 
        = (IData)((0x13U == (0x707fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r)));
    if ((0x13U == (0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))) {
        if ((0U == (7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                          >> 0xcU)))) {
            vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__operand2_r 
                = (((0x13U == (0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                     ? 1U : 0U) ? (((- (IData)((vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                >> 0x14U))
                    : 1U);
            vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__alu_control = 0U;
        } else {
            vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__operand2_r = 0U;
        }
    } else {
        vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__operand2_r = 0U;
    }
}

void Vysyx_24090003_cpu___024root___eval_nba(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24090003_cpu___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24090003_cpu___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24090003_cpu___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vysyx_24090003_cpu___024root___eval_triggers__act(Vysyx_24090003_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_cpu___024root___dump_triggers__act(Vysyx_24090003_cpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_cpu___024root___dump_triggers__nba(Vysyx_24090003_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24090003_cpu___024root___eval(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_24090003_cpu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_24090003_cpu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/jinghanhui/mypa/npc/vsrc/ysyx_24090003_cpu.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_24090003_cpu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24090003_cpu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/jinghanhui/mypa/npc/vsrc/ysyx_24090003_cpu.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_24090003_cpu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_24090003_cpu___024root___eval_debug_assertions(Vysyx_24090003_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cpu_clk & 0xfeU))) {
        Verilated::overWidthError("cpu_clk");}
    if (VL_UNLIKELY((vlSelf->cpu_rs & 0xfeU))) {
        Verilated::overWidthError("cpu_rs");}
}
#endif  // VL_DEBUG
