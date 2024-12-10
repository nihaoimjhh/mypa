// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+8,"ps2_clk", false,-1);
    tracep->declBit(c+9,"ps2_data", false,-1);
    tracep->declBus(c+10,"zero1", false,-1, 6,0);
    tracep->declBus(c+11,"zero2", false,-1, 6,0);
    tracep->declBus(c+12,"outdata", false,-1, 7,0);
    tracep->declBit(c+13,"LD", false,-1);
    tracep->declBus(c+14,"count", false,-1, 7,0);
    tracep->declBus(c+15,"count_high", false,-1, 6,0);
    tracep->declBus(c+16,"count_low", false,-1, 6,0);
    tracep->declBus(c+17,"key_code_high", false,-1, 6,0);
    tracep->declBus(c+18,"key_code_low", false,-1, 6,0);
    tracep->declBus(c+19,"ascii_high", false,-1, 6,0);
    tracep->declBus(c+20,"ascii_low", false,-1, 6,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+8,"ps2_clk", false,-1);
    tracep->declBit(c+9,"ps2_data", false,-1);
    tracep->declBus(c+10,"zero1", false,-1, 6,0);
    tracep->declBus(c+11,"zero2", false,-1, 6,0);
    tracep->declBus(c+12,"outdata", false,-1, 7,0);
    tracep->declBit(c+13,"LD", false,-1);
    tracep->declBus(c+14,"count", false,-1, 7,0);
    tracep->declBus(c+15,"count_high", false,-1, 6,0);
    tracep->declBus(c+16,"count_low", false,-1, 6,0);
    tracep->declBus(c+17,"key_code_high", false,-1, 6,0);
    tracep->declBus(c+18,"key_code_low", false,-1, 6,0);
    tracep->declBus(c+19,"ascii_high", false,-1, 6,0);
    tracep->declBus(c+20,"ascii_low", false,-1, 6,0);
    tracep->declBus(c+26,"push", false,-1, 31,0);
    tracep->declBus(c+27,"loos", false,-1, 31,0);
    tracep->declBit(c+21,"state", false,-1);
    tracep->declBit(c+22,"next_state", false,-1);
    tracep->declBus(c+23,"key_code", false,-1, 7,0);
    tracep->declBit(c+24,"tep", false,-1);
    tracep->declBus(c+28,"temp", false,-1, 7,0);
    tracep->pushNamePrefix("my_ascii ");
    tracep->declBus(c+12,"count", false,-1, 7,0);
    tracep->declBus(c+19,"hex_high", false,-1, 6,0);
    tracep->declBus(c+20,"hex_low", false,-1, 6,0);
    tracep->declBit(c+21,"state", false,-1);
    tracep->declBus(c+1,"ascii", false,-1, 7,0);
    tracep->pushNamePrefix("my_turn ");
    tracep->declBus(c+12,"scancode", false,-1, 7,0);
    tracep->declBus(c+1,"ascii", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_codeSEG ");
    tracep->declBus(c+12,"count", false,-1, 7,0);
    tracep->declBus(c+17,"hex_high", false,-1, 6,0);
    tracep->declBus(c+18,"hex_low", false,-1, 6,0);
    tracep->declBit(c+21,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_countSEG ");
    tracep->declBus(c+14,"count", false,-1, 7,0);
    tracep->declBus(c+15,"hex_high", false,-1, 6,0);
    tracep->declBus(c+16,"hex_low", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+25,"resetn", false,-1);
    tracep->declBit(c+8,"ps2_clk", false,-1);
    tracep->declBit(c+9,"ps2_data", false,-1);
    tracep->declBus(c+12,"outdata", false,-1, 7,0);
    tracep->declBus(c+2,"buffer", false,-1, 9,0);
    tracep->declBus(c+3,"count", false,-1, 3,0);
    tracep->declBus(c+4,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+5,"sampling", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__my_ascii__DOT__ascii),8);
    bufp->fullSData(oldp+2,(vlSelf->top__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+5,((IData)((4U == (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullBit(oldp+6,(vlSelf->clk));
    bufp->fullBit(oldp+7,(vlSelf->rst));
    bufp->fullBit(oldp+8,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+9,(vlSelf->ps2_data));
    bufp->fullCData(oldp+10,(vlSelf->zero1),7);
    bufp->fullCData(oldp+11,(vlSelf->zero2),7);
    bufp->fullCData(oldp+12,(vlSelf->outdata),8);
    bufp->fullBit(oldp+13,(vlSelf->LD));
    bufp->fullCData(oldp+14,(vlSelf->count),8);
    bufp->fullCData(oldp+15,(vlSelf->count_high),7);
    bufp->fullCData(oldp+16,(vlSelf->count_low),7);
    bufp->fullCData(oldp+17,(vlSelf->key_code_high),7);
    bufp->fullCData(oldp+18,(vlSelf->key_code_low),7);
    bufp->fullCData(oldp+19,(vlSelf->ascii_high),7);
    bufp->fullCData(oldp+20,(vlSelf->ascii_low),7);
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__state));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__next_state));
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__key_code),8);
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__tep));
    bufp->fullBit(oldp+25,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullIData(oldp+26,(1U),32);
    bufp->fullIData(oldp+27,(0U),32);
    bufp->fullCData(oldp+28,(0U),8);
}
