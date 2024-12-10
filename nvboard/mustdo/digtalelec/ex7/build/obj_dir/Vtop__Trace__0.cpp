// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__my_ascii__DOT__ascii),8);
        bufp->chgSData(oldp+1,(vlSelf->top__DOT__my_keyboard__DOT__buffer),10);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+4,((IData)((4U == (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    }
    bufp->chgBit(oldp+5,(vlSelf->clk));
    bufp->chgBit(oldp+6,(vlSelf->rst));
    bufp->chgBit(oldp+7,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+8,(vlSelf->ps2_data));
    bufp->chgCData(oldp+9,(vlSelf->zero1),7);
    bufp->chgCData(oldp+10,(vlSelf->zero2),7);
    bufp->chgCData(oldp+11,(vlSelf->outdata),8);
    bufp->chgBit(oldp+12,(vlSelf->LD));
    bufp->chgCData(oldp+13,(vlSelf->count),8);
    bufp->chgCData(oldp+14,(vlSelf->count_high),7);
    bufp->chgCData(oldp+15,(vlSelf->count_low),7);
    bufp->chgCData(oldp+16,(vlSelf->key_code_high),7);
    bufp->chgCData(oldp+17,(vlSelf->key_code_low),7);
    bufp->chgCData(oldp+18,(vlSelf->ascii_high),7);
    bufp->chgCData(oldp+19,(vlSelf->ascii_low),7);
    bufp->chgBit(oldp+20,(vlSelf->top__DOT__state));
    bufp->chgBit(oldp+21,(vlSelf->top__DOT__next_state));
    bufp->chgCData(oldp+22,(vlSelf->top__DOT__key_code),8);
    bufp->chgBit(oldp+23,(vlSelf->top__DOT__tep));
    bufp->chgBit(oldp+24,((1U & (~ (IData)(vlSelf->rst)))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
