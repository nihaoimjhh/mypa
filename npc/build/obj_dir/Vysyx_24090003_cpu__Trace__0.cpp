// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24090003_cpu__Syms.h"


void Vysyx_24090003_cpu___024root__trace_chg_sub_0(Vysyx_24090003_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_24090003_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_24090003_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090003_cpu___024root*>(voidSelf);
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_24090003_cpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_24090003_cpu___024root__trace_chg_sub_0(Vysyx_24090003_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_24090003_cpu__DOT__reg_write_data),32);
        bufp->chgBit(oldp+1,(vlSelf->ysyx_24090003_cpu__DOT__reg_write_enable));
        bufp->chgBit(oldp+2,(vlSelf->ysyx_24090003_cpu__DOT__npc_write_enable));
        bufp->chgBit(oldp+3,(vlSelf->ysyx_24090003_cpu__DOT__spc_write_enable));
        bufp->chgIData(oldp+4,(vlSelf->ysyx_24090003_cpu__DOT__EXnpc),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_24090003_cpu__DOT__EXspc),32);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_24090003_cpu__DOT__EXrd),5);
        bufp->chgIData(oldp+7,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[0]),32);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[1]),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[2]),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[3]),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[4]),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[5]),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[6]),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[7]),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[8]),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[9]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[10]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[11]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[12]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[13]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[14]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[15]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[16]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[17]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[18]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[19]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[20]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[21]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[22]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[23]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[24]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[25]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[26]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[27]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[28]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[29]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[30]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[31]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+39,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers
                                [(0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers
                                [(0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+41,(((0x13U == (0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                                  ? ((0U == (7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                   >> 0xcU)))
                                      ? vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers
                                     [(0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                >> 0xfU))]
                                      : 0U) : 0U)),32);
        bufp->chgIData(oldp+42,(((0x13U == (0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                                  ? ((0U == (7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                   >> 0xcU)))
                                      ? ((0U == (IData)(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__alu_control))
                                          ? (((0x13U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                       >> 0xcU)))
                                                   ? 
                                                  vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                      >> 0xfU))]
                                                   : 0U)
                                               : 0U) 
                                             + ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                      >> 0xcU)))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                     >> 0x14U))
                                                  : 0U)
                                                 : 0U))
                                          : 0U) : 0U)
                                  : 0U)),32);
        bufp->chgIData(oldp+43,(((0U == (IData)(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__alu_control))
                                  ? (((0x13U == (0x7fU 
                                                 & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                                       ? ((0U == (7U 
                                                  & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                     >> 0xcU)))
                                           ? vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers
                                          [(0x1fU & 
                                            (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                             >> 0xfU))]
                                           : 0U) : 0U) 
                                     + ((0x13U == (0x7fU 
                                                   & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                                         ? ((0U == 
                                             (7U & 
                                              (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                               >> 0xcU)))
                                             ? (((- (IData)(
                                                            (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                   >> 0x14U))
                                             : 0U) : 0U))
                                  : 0U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+44,((((- (IData)((vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r),32);
        bufp->chgCData(oldp+46,((0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+47,((0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+48,((0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                          >> 7U))),5);
        bufp->chgCData(oldp+49,((0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r)),7);
        bufp->chgCData(oldp+50,((7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                       >> 0xcU))),3);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__pc_r),32);
        bufp->chgIData(oldp+52,(((0x13U == (0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                                  ? ((0U == (7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                   >> 0xcU)))
                                      ? (((- (IData)(
                                                     (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                            >> 0x14U))
                                      : 0U) : 0U)),32);
        bufp->chgCData(oldp+53,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__alu_control),3);
        bufp->chgBit(oldp+54,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__reg_write_data_enable_r));
        bufp->chgCData(oldp+55,(((0x13U == (0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                                  ? ((0U == (7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                   >> 0xcU)))
                                      ? (0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                  >> 7U))
                                      : 0U) : 0U)),5);
        bufp->chgIData(oldp+56,((((- (IData)((vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+57,((((- (IData)((vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                              >> 0x1fU))) 
                                  << 0xdU) | ((0x1000U 
                                               & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                  >> 0x13U)) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                          >> 7U))))))),32);
        bufp->chgIData(oldp+58,((0xfffff000U & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r)),32);
        bufp->chgIData(oldp+59,((((- (IData)((vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                        >> 0x14U)))))),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r),32);
    }
    bufp->chgBit(oldp+61,(vlSelf->cpu_clk));
    bufp->chgBit(oldp+62,(vlSelf->cpu_rs));
    bufp->chgIData(oldp+63,(vlSelf->addr_read_data),32);
    bufp->chgIData(oldp+64,(vlSelf->npc),32);
    bufp->chgIData(oldp+65,(vlSelf->addr_write_data),32);
    bufp->chgIData(oldp+66,(vlSelf->EXaddr),32);
    bufp->chgBit(oldp+67,(vlSelf->addr_write_enable));
    bufp->chgIData(oldp+68,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__spc_r),32);
}

void Vysyx_24090003_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root__trace_cleanup\n"); );
    // Init
    Vysyx_24090003_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090003_cpu___024root*>(voidSelf);
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
