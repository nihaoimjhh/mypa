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
    tracep->declBus(c+18,"BTN", false,-1, 2,0);
    tracep->declBus(c+19,"SW1", false,-1, 3,0);
    tracep->declBus(c+20,"SW2", false,-1, 3,0);
    tracep->declBus(c+21,"LD", false,-1, 6,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+18,"BTN", false,-1, 2,0);
    tracep->declBus(c+19,"SW1", false,-1, 3,0);
    tracep->declBus(c+20,"SW2", false,-1, 3,0);
    tracep->declBus(c+21,"LD", false,-1, 6,0);
    tracep->declBus(c+22,"resul0", false,-1, 6,0);
    tracep->declBus(c+23,"resul1", false,-1, 6,0);
    tracep->declBus(c+24,"resul2", false,-1, 6,0);
    tracep->declBus(c+25,"resul3", false,-1, 6,0);
    tracep->declBus(c+26,"resul4", false,-1, 6,0);
    tracep->declBus(c+27,"resul5", false,-1, 6,0);
    tracep->declBus(c+1,"resul6", false,-1, 6,0);
    tracep->declBus(c+2,"resul7", false,-1, 6,0);
    tracep->declBus(c+28,"sig0", false,-1, 6,0);
    tracep->declBus(c+29,"sig1", false,-1, 6,0);
    tracep->declBus(c+30,"sig2", false,-1, 6,0);
    tracep->declBus(c+31,"sig3", false,-1, 6,0);
    tracep->declBus(c+32,"sig4", false,-1, 6,0);
    tracep->declBus(c+33,"sig5", false,-1, 6,0);
    tracep->declBus(c+34,"sig6", false,-1, 6,0);
    tracep->declBus(c+35,"sig7", false,-1, 6,0);
    tracep->declBus(c+36,"temp0", false,-1, 6,0);
    tracep->declBus(c+37,"temp1", false,-1, 6,0);
    tracep->declBus(c+38,"temp2", false,-1, 6,0);
    tracep->declBus(c+39,"temp3", false,-1, 6,0);
    tracep->declBus(c+40,"temp4", false,-1, 6,0);
    tracep->declBus(c+41,"temp5", false,-1, 6,0);
    tracep->declBus(c+42,"temp6", false,-1, 6,0);
    tracep->declBus(c+43,"temp7", false,-1, 6,0);
    tracep->pushNamePrefix("add3 ");
    tracep->declBus(c+19,"SW1", false,-1, 3,0);
    tracep->declBus(c+20,"SW2", false,-1, 3,0);
    tracep->declBus(c+22,"LD", false,-1, 6,0);
    tracep->declBit(c+3,"cout1", false,-1);
    tracep->declBit(c+4,"cout2", false,-1);
    tracep->declBit(c+5,"cout3", false,-1);
    tracep->declBit(c+6,"cout4", false,-1);
    tracep->declBit(c+44,"s0", false,-1);
    tracep->declBit(c+45,"s1", false,-1);
    tracep->declBit(c+46,"s2", false,-1);
    tracep->declBit(c+47,"s3", false,-1);
    tracep->declBus(c+7,"l", false,-1, 2,0);
    tracep->pushNamePrefix("insert_0 ");
    tracep->declBit(c+48,"a", false,-1);
    tracep->declBit(c+49,"b", false,-1);
    tracep->declBit(c+67,"cin", false,-1);
    tracep->declBit(c+44,"sum", false,-1);
    tracep->declBit(c+3,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("insert_1 ");
    tracep->declBit(c+50,"a", false,-1);
    tracep->declBit(c+51,"b", false,-1);
    tracep->declBit(c+3,"cin", false,-1);
    tracep->declBit(c+45,"sum", false,-1);
    tracep->declBit(c+4,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("insert_2 ");
    tracep->declBit(c+52,"a", false,-1);
    tracep->declBit(c+53,"b", false,-1);
    tracep->declBit(c+4,"cin", false,-1);
    tracep->declBit(c+46,"sum", false,-1);
    tracep->declBit(c+5,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("insert_3 ");
    tracep->declBit(c+54,"a", false,-1);
    tracep->declBit(c+55,"b", false,-1);
    tracep->declBit(c+5,"cin", false,-1);
    tracep->declBit(c+47,"sum", false,-1);
    tracep->declBit(c+6,"cout", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("and3 ");
    tracep->declBus(c+19,"SW1", false,-1, 3,0);
    tracep->declBus(c+20,"SW2", false,-1, 3,0);
    tracep->declBus(c+25,"ld", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("c3 ");
    tracep->declBus(c+56,"SW1", false,-1, 2,0);
    tracep->declBus(c+57,"SW2", false,-1, 2,0);
    tracep->declBus(c+1,"LD", false,-1, 6,0);
    tracep->declBus(c+8,"gt", false,-1, 2,0);
    tracep->declBus(c+9,"lt", false,-1, 2,0);
    tracep->declBit(c+10,"eq1", false,-1);
    tracep->declBit(c+11,"eq2", false,-1);
    tracep->declBit(c+12,"eq0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eq3 ");
    tracep->declBus(c+56,"SW1", false,-1, 2,0);
    tracep->declBus(c+57,"SW2", false,-1, 2,0);
    tracep->declBus(c+2,"LD", false,-1, 6,0);
    tracep->declBus(c+8,"gt", false,-1, 2,0);
    tracep->declBus(c+9,"lt", false,-1, 2,0);
    tracep->declBit(c+10,"eq1", false,-1);
    tracep->declBit(c+11,"eq2", false,-1);
    tracep->declBit(c+12,"eq0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("not3 ");
    tracep->declBus(c+19,"SW1", false,-1, 3,0);
    tracep->declBus(c+24,"ld", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("or3 ");
    tracep->declBus(c+19,"SW1", false,-1, 3,0);
    tracep->declBus(c+20,"SW2", false,-1, 3,0);
    tracep->declBus(c+26,"ld", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub3 ");
    tracep->declBus(c+19,"SW1", false,-1, 3,0);
    tracep->declBus(c+20,"SW2", false,-1, 3,0);
    tracep->declBus(c+23,"LD", false,-1, 6,0);
    tracep->declBus(c+58,"SW2s", false,-1, 3,0);
    tracep->declBus(c+59,"SW0s", false,-1, 3,0);
    tracep->pushNamePrefix("insert_0 ");
    tracep->declBus(c+19,"SW1", false,-1, 3,0);
    tracep->declBus(c+58,"SW2", false,-1, 3,0);
    tracep->declBus(c+23,"LD", false,-1, 6,0);
    tracep->declBit(c+13,"cout1", false,-1);
    tracep->declBit(c+14,"cout2", false,-1);
    tracep->declBit(c+15,"cout3", false,-1);
    tracep->declBit(c+16,"cout4", false,-1);
    tracep->declBit(c+60,"s0", false,-1);
    tracep->declBit(c+61,"s1", false,-1);
    tracep->declBit(c+62,"s2", false,-1);
    tracep->declBit(c+63,"s3", false,-1);
    tracep->declBus(c+17,"l", false,-1, 2,0);
    tracep->pushNamePrefix("insert_0 ");
    tracep->declBit(c+48,"a", false,-1);
    tracep->declBit(c+64,"b", false,-1);
    tracep->declBit(c+67,"cin", false,-1);
    tracep->declBit(c+60,"sum", false,-1);
    tracep->declBit(c+13,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("insert_1 ");
    tracep->declBit(c+50,"a", false,-1);
    tracep->declBit(c+65,"b", false,-1);
    tracep->declBit(c+13,"cin", false,-1);
    tracep->declBit(c+61,"sum", false,-1);
    tracep->declBit(c+14,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("insert_2 ");
    tracep->declBit(c+52,"a", false,-1);
    tracep->declBit(c+66,"b", false,-1);
    tracep->declBit(c+14,"cin", false,-1);
    tracep->declBit(c+62,"sum", false,-1);
    tracep->declBit(c+15,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("insert_3 ");
    tracep->declBit(c+54,"a", false,-1);
    tracep->declBit(c+68,"b", false,-1);
    tracep->declBit(c+15,"cin", false,-1);
    tracep->declBit(c+63,"sum", false,-1);
    tracep->declBit(c+16,"cout", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("xor3 ");
    tracep->declBus(c+19,"SW1", false,-1, 3,0);
    tracep->declBus(c+20,"SW2", false,-1, 3,0);
    tracep->declBus(c+27,"ld", false,-1, 6,0);
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
    bufp->fullCData(oldp+1,(((0x70U & ((- (IData)(((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h71ab6dfa__0) 
                                                   | ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h36219a96__0) 
                                                      | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha43d8be6__0))))) 
                                       << 4U)) | (((IData)(vlSelf->top__DOT__c3__DOT__eq0) 
                                                   << 3U) 
                                                  | (7U 
                                                     & (- (IData)(
                                                                  ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha34209dd__0) 
                                                                   | ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_hf557f565__0) 
                                                                      | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_he1976823__0))))))))),7);
    bufp->fullCData(oldp+2,((0x7fU & (- (IData)((IData)(vlSelf->top__DOT__c3__DOT__eq0))))),7);
    bufp->fullBit(oldp+3,((1U & ((IData)(vlSelf->__VdfgTmp_he0ed0bff__0) 
                                 >> 1U))));
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelf->__VdfgTmp_h4b2d08f0__0) 
                                 >> 1U))));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                 >> 1U))));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__add3__DOT__cout4));
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__add3__DOT__l),3);
    bufp->fullCData(oldp+8,((((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h71ab6dfa__0) 
                              << 2U) | (((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h36219a96__0) 
                                         << 1U) | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha43d8be6__0)))),3);
    bufp->fullCData(oldp+9,((((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha34209dd__0) 
                              << 2U) | (((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_hf557f565__0) 
                                         << 1U) | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_he1976823__0)))),3);
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__c3__DOT__eq1));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__c3__DOT__eq2));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__c3__DOT__eq0));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->__VdfgTmp_h26c8da6b__0) 
                                  >> 1U))));
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelf->__VdfgTmp_h7f867a1a__0) 
                                  >> 1U))));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->__VdfgTmp_hd800e939__0) 
                                  >> 1U))));
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__cout4));
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__l),3);
    bufp->fullCData(oldp+18,(vlSelf->BTN),3);
    bufp->fullCData(oldp+19,(vlSelf->SW1),4);
    bufp->fullCData(oldp+20,(vlSelf->SW2),4);
    bufp->fullCData(oldp+21,(vlSelf->LD),7);
    bufp->fullCData(oldp+22,(((0x40U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->top__DOT__add3__DOT__l)))) 
                                        << 6U)) | (
                                                   ((IData)(
                                                            (((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                                              >> 1U) 
                                                             ^ (IData)(vlSelf->top__DOT__add3__DOT__cout4))) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT__add3__DOT__cout4) 
                                                       << 4U) 
                                                      | ((8U 
                                                          & ((((IData)(vlSelf->SW1) 
                                                               >> 3U) 
                                                              + 
                                                              (((IData)(vlSelf->SW2) 
                                                                >> 3U) 
                                                               + 
                                                               ((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                                                >> 1U))) 
                                                             << 3U)) 
                                                         | (IData)(vlSelf->top__DOT__add3__DOT__l)))))),7);
    bufp->fullCData(oldp+23,(((0x40U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__l)))) 
                                        << 6U)) | (
                                                   ((IData)(
                                                            (((IData)(vlSelf->__VdfgTmp_hd800e939__0) 
                                                              >> 1U) 
                                                             ^ (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__cout4))) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__cout4) 
                                                       << 4U) 
                                                      | ((8U 
                                                          & (((IData)(1U) 
                                                              + 
                                                              (((IData)(vlSelf->SW1) 
                                                                >> 3U) 
                                                               + 
                                                               ((IData)(vlSelf->__VdfgTmp_hd800e939__0) 
                                                                >> 1U))) 
                                                             << 3U)) 
                                                         | (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__l)))))),7);
    bufp->fullCData(oldp+24,((0xfU & (~ (IData)(vlSelf->SW1)))),7);
    bufp->fullCData(oldp+25,(((IData)(vlSelf->SW1) 
                              & (IData)(vlSelf->SW2))),7);
    bufp->fullCData(oldp+26,(((IData)(vlSelf->SW1) 
                              | (IData)(vlSelf->SW2))),7);
    bufp->fullCData(oldp+27,(((IData)(vlSelf->SW1) 
                              ^ (IData)(vlSelf->SW2))),7);
    bufp->fullCData(oldp+28,((0x7fU & (- (IData)(((~ (IData)(vlSelf->BTN)) 
                                                  & (IData)(vlSelf->top__DOT____VdfgTmp_h7abdcc16__0)))))),7);
    bufp->fullCData(oldp+29,((0x7fU & (- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h7abdcc16__0) 
                                                  & (IData)(vlSelf->BTN)))))),7);
    bufp->fullCData(oldp+30,((0x7fU & (- (IData)(((~ (IData)(vlSelf->BTN)) 
                                                  & (IData)(vlSelf->top__DOT____VdfgTmp_h76c634fb__0)))))),7);
    bufp->fullCData(oldp+31,((0x7fU & (- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h76c634fb__0) 
                                                  & (IData)(vlSelf->BTN)))))),7);
    bufp->fullCData(oldp+32,((0x7fU & (- (IData)(((~ (IData)(vlSelf->BTN)) 
                                                  & (IData)(vlSelf->top__DOT____VdfgTmp_h5a14e8fb__0)))))),7);
    bufp->fullCData(oldp+33,((0x7fU & (- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h5a14e8fb__0) 
                                                  & (IData)(vlSelf->BTN)))))),7);
    bufp->fullCData(oldp+34,((0x7fU & (- (IData)(((~ (IData)(vlSelf->BTN)) 
                                                  & (IData)(vlSelf->top__DOT____VdfgTmp_ha15450f1__0)))))),7);
    bufp->fullCData(oldp+35,((0x7fU & (- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_ha15450f1__0) 
                                                  & (IData)(vlSelf->BTN)))))),7);
    bufp->fullCData(oldp+36,(((- (IData)(((~ (IData)(vlSelf->BTN)) 
                                          & (IData)(vlSelf->top__DOT____VdfgTmp_h7abdcc16__0)))) 
                              & ((0x40U & ((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->top__DOT__add3__DOT__l)))) 
                                           << 6U)) 
                                 | (((IData)((((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                               >> 1U) 
                                              ^ (IData)(vlSelf->top__DOT__add3__DOT__cout4))) 
                                     << 5U) | (((IData)(vlSelf->top__DOT__add3__DOT__cout4) 
                                                << 4U) 
                                               | ((8U 
                                                   & ((((IData)(vlSelf->SW1) 
                                                        >> 3U) 
                                                       + 
                                                       (((IData)(vlSelf->SW2) 
                                                         >> 3U) 
                                                        + 
                                                        ((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                                         >> 1U))) 
                                                      << 3U)) 
                                                  | (IData)(vlSelf->top__DOT__add3__DOT__l))))))),7);
    bufp->fullCData(oldp+37,(((- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h7abdcc16__0) 
                                          & (IData)(vlSelf->BTN)))) 
                              & ((0x40U & ((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__l)))) 
                                           << 6U)) 
                                 | (((IData)((((IData)(vlSelf->__VdfgTmp_hd800e939__0) 
                                               >> 1U) 
                                              ^ (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__cout4))) 
                                     << 5U) | (((IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__cout4) 
                                                << 4U) 
                                               | ((8U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (((IData)(vlSelf->SW1) 
                                                         >> 3U) 
                                                        + 
                                                        ((IData)(vlSelf->__VdfgTmp_hd800e939__0) 
                                                         >> 1U))) 
                                                      << 3U)) 
                                                  | (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__l))))))),7);
    bufp->fullCData(oldp+38,((0xfU & ((- (IData)(((~ (IData)(vlSelf->BTN)) 
                                                  & (IData)(vlSelf->top__DOT____VdfgTmp_h76c634fb__0)))) 
                                      & (~ (IData)(vlSelf->SW1))))),7);
    bufp->fullCData(oldp+39,(((- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h76c634fb__0) 
                                          & (IData)(vlSelf->BTN)))) 
                              & ((IData)(vlSelf->SW1) 
                                 & (IData)(vlSelf->SW2)))),7);
    bufp->fullCData(oldp+40,(((- (IData)(((~ (IData)(vlSelf->BTN)) 
                                          & (IData)(vlSelf->top__DOT____VdfgTmp_h5a14e8fb__0)))) 
                              & ((IData)(vlSelf->SW1) 
                                 | (IData)(vlSelf->SW2)))),7);
    bufp->fullCData(oldp+41,(((- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h5a14e8fb__0) 
                                          & (IData)(vlSelf->BTN)))) 
                              & ((IData)(vlSelf->SW1) 
                                 ^ (IData)(vlSelf->SW2)))),7);
    bufp->fullCData(oldp+42,(((- (IData)(((~ (IData)(vlSelf->BTN)) 
                                          & (IData)(vlSelf->top__DOT____VdfgTmp_ha15450f1__0)))) 
                              & ((0x70U & ((- (IData)(
                                                      ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h71ab6dfa__0) 
                                                       | ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h36219a96__0) 
                                                          | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha43d8be6__0))))) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->top__DOT__c3__DOT__eq0) 
                                     << 3U) | (7U & 
                                               (- (IData)(
                                                          ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha34209dd__0) 
                                                           | ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_hf557f565__0) 
                                                              | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_he1976823__0)))))))))),7);
    bufp->fullCData(oldp+43,((0x7fU & ((- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_ha15450f1__0) 
                                                   & (IData)(vlSelf->BTN)))) 
                                       & (- (IData)((IData)(vlSelf->top__DOT__c3__DOT__eq0)))))),7);
    bufp->fullBit(oldp+44,((1U & ((IData)(vlSelf->SW1) 
                                  + (IData)(vlSelf->SW2)))));
    bufp->fullBit(oldp+45,((1U & (((IData)(vlSelf->SW1) 
                                   >> 1U) + (((IData)(vlSelf->SW2) 
                                              >> 1U) 
                                             + ((IData)(vlSelf->__VdfgTmp_he0ed0bff__0) 
                                                >> 1U))))));
    bufp->fullBit(oldp+46,((1U & (((IData)(vlSelf->SW1) 
                                   >> 2U) + (((IData)(vlSelf->SW2) 
                                              >> 2U) 
                                             + ((IData)(vlSelf->__VdfgTmp_h4b2d08f0__0) 
                                                >> 1U))))));
    bufp->fullBit(oldp+47,((1U & (((IData)(vlSelf->SW1) 
                                   >> 3U) + (((IData)(vlSelf->SW2) 
                                              >> 3U) 
                                             + ((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                                >> 1U))))));
    bufp->fullBit(oldp+48,((1U & (IData)(vlSelf->SW1))));
    bufp->fullBit(oldp+49,((1U & (IData)(vlSelf->SW2))));
    bufp->fullBit(oldp+50,((1U & ((IData)(vlSelf->SW1) 
                                  >> 1U))));
    bufp->fullBit(oldp+51,((1U & ((IData)(vlSelf->SW2) 
                                  >> 1U))));
    bufp->fullBit(oldp+52,((1U & ((IData)(vlSelf->SW1) 
                                  >> 2U))));
    bufp->fullBit(oldp+53,((1U & ((IData)(vlSelf->SW2) 
                                  >> 2U))));
    bufp->fullBit(oldp+54,((1U & ((IData)(vlSelf->SW1) 
                                  >> 3U))));
    bufp->fullBit(oldp+55,((1U & ((IData)(vlSelf->SW2) 
                                  >> 3U))));
    bufp->fullCData(oldp+56,((7U & (IData)(vlSelf->SW1))),3);
    bufp->fullCData(oldp+57,((7U & (IData)(vlSelf->SW2))),3);
    bufp->fullCData(oldp+58,((8U | (7U & ((IData)(1U) 
                                          + (~ (IData)(vlSelf->SW2)))))),4);
    bufp->fullCData(oldp+59,((0xfU & ((IData)(1U) + 
                                      (~ (IData)(vlSelf->SW2))))),4);
    bufp->fullBit(oldp+60,((1U & ((IData)(1U) + ((IData)(vlSelf->SW1) 
                                                 + 
                                                 (~ (IData)(vlSelf->SW2)))))));
    bufp->fullBit(oldp+61,((1U & (((IData)(vlSelf->SW1) 
                                   >> 1U) + ((7U & 
                                              (((IData)(1U) 
                                                + (~ (IData)(vlSelf->SW2))) 
                                               >> 1U)) 
                                             + ((IData)(vlSelf->__VdfgTmp_h26c8da6b__0) 
                                                >> 1U))))));
    bufp->fullBit(oldp+62,((1U & (((IData)(vlSelf->SW1) 
                                   >> 2U) + ((3U & 
                                              (((IData)(1U) 
                                                + (~ (IData)(vlSelf->SW2))) 
                                               >> 2U)) 
                                             + ((IData)(vlSelf->__VdfgTmp_h7f867a1a__0) 
                                                >> 1U))))));
    bufp->fullBit(oldp+63,((1U & ((IData)(1U) + (((IData)(vlSelf->SW1) 
                                                  >> 3U) 
                                                 + 
                                                 ((IData)(vlSelf->__VdfgTmp_hd800e939__0) 
                                                  >> 1U))))));
    bufp->fullBit(oldp+64,((1U & ((IData)(1U) + (~ (IData)(vlSelf->SW2))))));
    bufp->fullBit(oldp+65,((1U & (((IData)(1U) + (~ (IData)(vlSelf->SW2))) 
                                  >> 1U))));
    bufp->fullBit(oldp+66,((1U & (((IData)(1U) + (~ (IData)(vlSelf->SW2))) 
                                  >> 2U))));
    bufp->fullBit(oldp+67,(0U));
    bufp->fullBit(oldp+68,(1U));
}
