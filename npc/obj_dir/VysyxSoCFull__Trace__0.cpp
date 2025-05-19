// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VysyxSoCFull___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VysyxSoCFull___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VysyxSoCFull___024root__trace_chg_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0_sub_0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<8>/*255:0*/ __Vtemp_24;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [8U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
        bufp->chgBit(oldp+1,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+2,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
        bufp->chgBit(oldp+3,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
        bufp->chgBit(oldp+4,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
        bufp->chgBit(oldp+5,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+6,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__counter),8);
        bufp->chgCData(oldp+7,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data_in),8);
        bufp->chgCData(oldp+8,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__state),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+9,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
        bufp->chgIData(oldp+10,((((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [3U] << 0x18U) | 
                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [2U] << 0x10U)) 
                                 | ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                     [1U] << 8U) | 
                                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                    [0U]))),32);
        bufp->chgCData(oldp+11,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
        bufp->chgCData(oldp+12,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
        bufp->chgCData(oldp+13,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
        bufp->chgCData(oldp+14,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
        bufp->chgCData(oldp+15,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
        bufp->chgCData(oldp+16,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
        bufp->chgCData(oldp+17,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
        bufp->chgCData(oldp+18,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
        bufp->chgBit(oldp+19,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
        bufp->chgIData(oldp+20,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
        bufp->chgIData(oldp+21,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
        bufp->chgIData(oldp+22,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
        bufp->chgCData(oldp+23,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
        bufp->chgCData(oldp+24,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
        bufp->chgIData(oldp+25,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgCData(oldp+26,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize),3);
        bufp->chgCData(oldp+27,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize),3);
        bufp->chgCData(oldp+28,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb),4);
        bufp->chgBit(oldp+29,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
        bufp->chgBit(oldp+30,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
        bufp->chgBit(oldp+31,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+32,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
        bufp->chgBit(oldp+33,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
        bufp->chgBit(oldp+34,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
        bufp->chgBit(oldp+35,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgBit(oldp+36,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
        bufp->chgBit(oldp+37,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
        bufp->chgBit(oldp+38,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+39,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+40,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
        bufp->chgBit(oldp+41,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
        bufp->chgIData(oldp+42,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
        bufp->chgCData(oldp+43,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
        bufp->chgBit(oldp+44,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
        bufp->chgIData(oldp+45,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
        bufp->chgCData(oldp+46,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
        bufp->chgCData(oldp+47,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
        bufp->chgBit(oldp+48,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
        bufp->chgBit(oldp+49,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+50,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
        bufp->chgSData(oldp+51,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgCData(oldp+52,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
        bufp->chgCData(oldp+53,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
        bufp->chgCData(oldp+54,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
        bufp->chgCData(oldp+55,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
        bufp->chgCData(oldp+56,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
        bufp->chgCData(oldp+57,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
        bufp->chgCData(oldp+58,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
        bufp->chgCData(oldp+59,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
        bufp->chgCData(oldp+60,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
        bufp->chgCData(oldp+61,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
        bufp->chgCData(oldp+62,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
        bufp->chgCData(oldp+63,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
        bufp->chgCData(oldp+64,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
        bufp->chgCData(oldp+65,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
        bufp->chgCData(oldp+66,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
        bufp->chgCData(oldp+67,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
        bufp->chgQData(oldp+68,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
        bufp->chgBit(oldp+70,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
        bufp->chgBit(oldp+71,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgCData(oldp+72,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
        bufp->chgCData(oldp+73,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
        bufp->chgQData(oldp+74,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
        bufp->chgBit(oldp+76,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
        bufp->chgBit(oldp+77,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgQData(oldp+78,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
        bufp->chgBit(oldp+80,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
        bufp->chgBit(oldp+81,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
        bufp->chgCData(oldp+82,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
        bufp->chgCData(oldp+83,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                  ? 0U : 3U)),2);
        bufp->chgBit(oldp+84,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
        bufp->chgCData(oldp+85,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
        bufp->chgIData(oldp+86,((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                     ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                            [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                            >> 0x18U)
                                         : 0U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                   << 0x18U) | (0xff0000U 
                                                & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                      [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                      >> 0x10U)
                                                      : 0U)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                   << 0x10U))) 
                                 | ((0xff00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                   ? 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                   [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                   >> 8U)
                                                   : 0U)
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                << 8U)) 
                                    | (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                 ? 
                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                  ? 
                                                 vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
                                                  : 0U)
                                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))))),32);
        bufp->chgCData(oldp+87,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                  ? 0U : 3U)),2);
        bufp->chgBit(oldp+88,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
        bufp->chgBit(oldp+89,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
        bufp->chgBit(oldp+90,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
        bufp->chgCData(oldp+91,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
        bufp->chgCData(oldp+92,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
        bufp->chgCData(oldp+93,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
        bufp->chgCData(oldp+94,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
        bufp->chgIData(oldp+95,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
        bufp->chgBit(oldp+96,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
        bufp->chgBit(oldp+97,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
        bufp->chgBit(oldp+98,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
        bufp->chgBit(oldp+99,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
        bufp->chgBit(oldp+100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
        bufp->chgCData(oldp+104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
        bufp->chgBit(oldp+105,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
        bufp->chgCData(oldp+106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
        bufp->chgBit(oldp+107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
        bufp->chgCData(oldp+108,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
        bufp->chgCData(oldp+109,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
        bufp->chgCData(oldp+110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
        bufp->chgCData(oldp+111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
        bufp->chgCData(oldp+112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
        bufp->chgCData(oldp+113,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
        bufp->chgCData(oldp+114,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
        bufp->chgCData(oldp+115,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
        bufp->chgCData(oldp+116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
        bufp->chgCData(oldp+117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
        bufp->chgCData(oldp+118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
        bufp->chgCData(oldp+119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
        bufp->chgCData(oldp+120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
        bufp->chgCData(oldp+121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
        bufp->chgCData(oldp+122,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
        bufp->chgCData(oldp+123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
        bufp->chgCData(oldp+124,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
        bufp->chgCData(oldp+125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
        bufp->chgCData(oldp+126,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
        bufp->chgCData(oldp+127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
        bufp->chgCData(oldp+128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
        bufp->chgCData(oldp+129,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
        bufp->chgCData(oldp+130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
        bufp->chgCData(oldp+131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
        bufp->chgCData(oldp+132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
        bufp->chgCData(oldp+133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
        bufp->chgCData(oldp+134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
        bufp->chgCData(oldp+135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
        bufp->chgCData(oldp+136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
        bufp->chgCData(oldp+137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
        bufp->chgBit(oldp+138,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
        bufp->chgBit(oldp+139,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
        bufp->chgBit(oldp+140,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
        bufp->chgBit(oldp+141,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+142,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
        bufp->chgBit(oldp+143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
        bufp->chgCData(oldp+144,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
        bufp->chgBit(oldp+145,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
        bufp->chgBit(oldp+146,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
        bufp->chgBit(oldp+147,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
        bufp->chgCData(oldp+148,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
        bufp->chgBit(oldp+149,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
        bufp->chgBit(oldp+150,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
        bufp->chgBit(oldp+151,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
        bufp->chgCData(oldp+152,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
        bufp->chgBit(oldp+153,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid));
        bufp->chgCData(oldp+154,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
        bufp->chgBit(oldp+155,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+156,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+157,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+158,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+159,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+160,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+161,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
        bufp->chgCData(oldp+162,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
        bufp->chgCData(oldp+163,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
        bufp->chgBit(oldp+164,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
        bufp->chgBit(oldp+165,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
        bufp->chgBit(oldp+166,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
        bufp->chgBit(oldp+167,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
        bufp->chgCData(oldp+168,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
        bufp->chgSData(oldp+170,((0xffffU & ((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
        bufp->chgSData(oldp+171,((0xffffU & ((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
        bufp->chgBit(oldp+172,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
        bufp->chgBit(oldp+173,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
        bufp->chgBit(oldp+174,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
        bufp->chgBit(oldp+175,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
        bufp->chgBit(oldp+176,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
        bufp->chgBit(oldp+177,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
        bufp->chgBit(oldp+178,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
        bufp->chgBit(oldp+179,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
        bufp->chgBit(oldp+180,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
        bufp->chgBit(oldp+181,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
        bufp->chgBit(oldp+182,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
        bufp->chgBit(oldp+183,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
        bufp->chgBit(oldp+184,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
        bufp->chgBit(oldp+185,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
        bufp->chgBit(oldp+186,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
        bufp->chgBit(oldp+187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
        bufp->chgBit(oldp+188,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
        bufp->chgBit(oldp+189,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
        bufp->chgBit(oldp+190,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
        bufp->chgBit(oldp+191,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
        bufp->chgBit(oldp+192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
        bufp->chgBit(oldp+193,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
        bufp->chgBit(oldp+194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
        bufp->chgBit(oldp+195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
        bufp->chgBit(oldp+196,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
        bufp->chgBit(oldp+197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
        bufp->chgBit(oldp+198,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
        bufp->chgBit(oldp+199,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
        bufp->chgBit(oldp+200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
        bufp->chgBit(oldp+201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
        bufp->chgBit(oldp+202,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
        bufp->chgBit(oldp+203,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
        bufp->chgBit(oldp+204,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
        bufp->chgBit(oldp+205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+207,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgBit(oldp+208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
        bufp->chgCData(oldp+209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
        bufp->chgBit(oldp+210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
        bufp->chgBit(oldp+211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
        bufp->chgBit(oldp+212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
        bufp->chgBit(oldp+213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
        bufp->chgCData(oldp+214,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
        bufp->chgBit(oldp+215,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
        bufp->chgBit(oldp+216,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
        bufp->chgBit(oldp+217,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
        bufp->chgBit(oldp+218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid));
        bufp->chgBit(oldp+219,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+220,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+221,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+222,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+223,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+224,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+225,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
        bufp->chgCData(oldp+226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+228,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
        bufp->chgBit(oldp+229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
        bufp->chgBit(oldp+230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
        bufp->chgBit(oldp+231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+232,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
        bufp->chgBit(oldp+233,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
        bufp->chgBit(oldp+234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
        bufp->chgBit(oldp+235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+236,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
        bufp->chgBit(oldp+237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
        bufp->chgBit(oldp+238,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
        bufp->chgBit(oldp+239,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+240,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
        bufp->chgBit(oldp+241,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
        bufp->chgBit(oldp+242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
        bufp->chgBit(oldp+243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+244,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
        bufp->chgBit(oldp+245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
        bufp->chgBit(oldp+246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
        bufp->chgBit(oldp+247,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+248,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
        bufp->chgBit(oldp+249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
        bufp->chgBit(oldp+250,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
        bufp->chgBit(oldp+251,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+252,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
        bufp->chgBit(oldp+253,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
        bufp->chgBit(oldp+254,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
        bufp->chgBit(oldp+255,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+256,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
        bufp->chgBit(oldp+257,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
        bufp->chgBit(oldp+258,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
        bufp->chgBit(oldp+259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+260,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
        bufp->chgBit(oldp+261,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
        bufp->chgBit(oldp+262,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
        bufp->chgBit(oldp+263,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+264,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
        bufp->chgBit(oldp+265,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
        bufp->chgBit(oldp+266,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
        bufp->chgBit(oldp+267,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+268,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
        bufp->chgBit(oldp+269,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
        bufp->chgBit(oldp+270,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
        bufp->chgBit(oldp+271,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+272,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
        bufp->chgBit(oldp+273,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
        bufp->chgBit(oldp+274,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
        bufp->chgBit(oldp+275,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+276,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
        bufp->chgBit(oldp+277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
        bufp->chgBit(oldp+278,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
        bufp->chgBit(oldp+279,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+280,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
        bufp->chgBit(oldp+281,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
        bufp->chgBit(oldp+282,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
        bufp->chgBit(oldp+283,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+284,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
        bufp->chgBit(oldp+285,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
        bufp->chgBit(oldp+286,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
        bufp->chgBit(oldp+287,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+288,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
        bufp->chgBit(oldp+289,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
        bufp->chgBit(oldp+290,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
        bufp->chgBit(oldp+291,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+292,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
        bufp->chgBit(oldp+293,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
        bufp->chgBit(oldp+294,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
        bufp->chgBit(oldp+295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+296,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
        bufp->chgBit(oldp+297,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
        bufp->chgBit(oldp+298,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
        bufp->chgBit(oldp+299,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+300,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
        bufp->chgBit(oldp+301,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
        bufp->chgBit(oldp+302,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
        bufp->chgBit(oldp+303,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+304,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
        bufp->chgBit(oldp+305,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
        bufp->chgBit(oldp+306,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
        bufp->chgBit(oldp+307,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+308,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
        bufp->chgBit(oldp+309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
        bufp->chgBit(oldp+310,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
        bufp->chgBit(oldp+311,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+312,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
        bufp->chgBit(oldp+313,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
        bufp->chgBit(oldp+314,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
        bufp->chgBit(oldp+315,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+316,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
        bufp->chgBit(oldp+317,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
        bufp->chgBit(oldp+318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
        bufp->chgBit(oldp+319,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+320,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
        bufp->chgBit(oldp+321,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
        bufp->chgBit(oldp+322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
        bufp->chgBit(oldp+323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+324,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
        bufp->chgBit(oldp+325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
        bufp->chgBit(oldp+326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
        bufp->chgBit(oldp+327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+328,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
        bufp->chgBit(oldp+329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
        bufp->chgBit(oldp+330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
        bufp->chgBit(oldp+331,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+332,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
        bufp->chgBit(oldp+333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
        bufp->chgBit(oldp+334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
        bufp->chgBit(oldp+335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+336,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
        bufp->chgBit(oldp+337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
        bufp->chgBit(oldp+338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
        bufp->chgBit(oldp+339,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+340,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
        bufp->chgBit(oldp+341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
        bufp->chgBit(oldp+342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
        bufp->chgBit(oldp+343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+344,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
        bufp->chgBit(oldp+345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
        bufp->chgBit(oldp+346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
        bufp->chgBit(oldp+347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+348,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
        bufp->chgBit(oldp+349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
        bufp->chgBit(oldp+350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
        bufp->chgBit(oldp+351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+352,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
        bufp->chgBit(oldp+353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
        bufp->chgBit(oldp+354,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
        bufp->chgBit(oldp+355,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT___frontend_io_out_ready));
        bufp->chgIData(oldp+357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg),32);
        bufp->chgBit(oldp+358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_out_valid));
        bufp->chgIData(oldp+360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc),32);
        __Vtemp_2[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_0;
        __Vtemp_2[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_1;
        __Vtemp_2[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3)) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2))));
        __Vtemp_2[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2))) 
                                 >> 0x20U));
        __Vtemp_5[0U] = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit)
                          ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT____VdfgRegularize_h7011880f_0_3)
                              ? 0x4033U : (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U)))
                                             ? 0U : 
                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[
                                             (((IData)(0x1fU) 
                                               + (0x7fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))))) 
                                           | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[
                                              (3U & 
                                               (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U)))))
                          : 0U);
        __Vtemp_5[1U] = 0U;
        __Vtemp_5[2U] = 0U;
        __Vtemp_5[3U] = 0U;
        __Vtemp_5[4U] = 0U;
        if (((5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_20))) {
            __Vtemp_5[5U] = 0U;
            __Vtemp_5[6U] = 0U;
            __Vtemp_5[7U] = 0U;
        } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT____VdfgRegularize_h7011880f_0_3) {
            __Vtemp_5[5U] = 0x4033U;
            __Vtemp_5[6U] = 0x4033U;
            __Vtemp_5[7U] = 0x4033U;
        } else {
            __Vtemp_5[5U] = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U)))
                               ? 0U : (__Vtemp_2[(((IData)(0x1fU) 
                                                   + 
                                                   (0x7fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))))) 
                             | (__Vtemp_2[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U) 
                                                 >> 5U))] 
                                >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))));
            __Vtemp_5[6U] = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U)))
                               ? 0U : (__Vtemp_2[(((IData)(0x1fU) 
                                                   + 
                                                   (0x7fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))))) 
                             | (__Vtemp_2[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U) 
                                                 >> 5U))] 
                                >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))));
            __Vtemp_5[7U] = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U)))
                               ? 0U : (__Vtemp_2[(((IData)(0x1fU) 
                                                   + 
                                                   (0x7fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))))) 
                             | (__Vtemp_2[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U) 
                                                 >> 5U))] 
                                >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))));
        }
        bufp->chgIData(oldp+361,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state), 5U)))
                                    ? 0U : (__Vtemp_5[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state), 5U))))) 
                                  | (__Vtemp_5[(7U 
                                                & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state), 5U) 
                                                   >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state), 5U))))),32);
        bufp->chgIData(oldp+362,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_14)
                                   ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM)
                                            ? (0xfffffff0U 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc)
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__singleReadAddr))),32);
        bufp->chgCData(oldp+363,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_14)
                                   ? 0U : (3U & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM)))))),8);
        bufp->chgCData(oldp+364,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_14)
                                   ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM))),2);
        bufp->chgBit(oldp+365,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_13)) 
                                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)))));
        bufp->chgBit(oldp+366,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_17)) 
                                & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)))));
        bufp->chgBit(oldp+367,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid));
        bufp->chgBit(oldp+368,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                                 ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu)
                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid))
                                 : ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                                    & ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid)) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid)))))));
        bufp->chgBit(oldp+369,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable));
        bufp->chgIData(oldp+370,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__frontend__DOT__icache_frontend_reg_pc),32);
        bufp->chgCData(oldp+371,((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__frontend__DOT__icache_frontend_reg_pc 
                                        >> 4U))),2);
        bufp->chgIData(oldp+372,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__frontend__DOT__icache_frontend_reg_pc 
                                  >> 6U)),26);
        bufp->chgCData(oldp+373,((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__frontend__DOT__icache_frontend_reg_pc 
                                        >> 2U))),2);
        bufp->chgBit(oldp+374,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__redirect_pending));
        bufp->chgQData(oldp+375,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icacheMissCounter),64);
        bufp->chgCData(oldp+377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index),2);
        bufp->chgIData(oldp+378,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_tag),26);
        bufp->chgCData(oldp+379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset),2);
        bufp->chgBit(oldp+380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_redirect_valid));
        bufp->chgIData(oldp+381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_0),32);
        bufp->chgIData(oldp+382,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_1),32);
        bufp->chgIData(oldp+383,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_2),32);
        bufp->chgIData(oldp+384,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_3),32);
        bufp->chgIData(oldp+385,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_0),32);
        bufp->chgIData(oldp+386,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_1),32);
        bufp->chgIData(oldp+387,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_2),32);
        bufp->chgIData(oldp+388,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_3),32);
        bufp->chgIData(oldp+389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_0),32);
        bufp->chgIData(oldp+390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_1),32);
        bufp->chgIData(oldp+391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_2),32);
        bufp->chgIData(oldp+392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_3),32);
        bufp->chgIData(oldp+393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_0),32);
        bufp->chgIData(oldp+394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_1),32);
        bufp->chgIData(oldp+395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_2),32);
        bufp->chgIData(oldp+396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_3),32);
        bufp->chgIData(oldp+397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_0),32);
        bufp->chgIData(oldp+398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_1),32);
        bufp->chgIData(oldp+399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_2),32);
        bufp->chgIData(oldp+400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_3),32);
        bufp->chgIData(oldp+401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_0),32);
        bufp->chgIData(oldp+402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_1),32);
        bufp->chgIData(oldp+403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_2),32);
        bufp->chgIData(oldp+404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_3),32);
        bufp->chgIData(oldp+405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_0),32);
        bufp->chgIData(oldp+406,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_1),32);
        bufp->chgIData(oldp+407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_2),32);
        bufp->chgIData(oldp+408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_3),32);
        bufp->chgIData(oldp+409,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_0),32);
        bufp->chgIData(oldp+410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_1),32);
        bufp->chgIData(oldp+411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_2),32);
        bufp->chgIData(oldp+412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_3),32);
        bufp->chgBit(oldp+413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hits_1));
        bufp->chgBit(oldp+414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit));
        bufp->chgIData(oldp+415,((0xfffffff0U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc)),32);
        bufp->chgBit(oldp+416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM));
        bufp->chgIData(oldp+417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__singleReadAddr),32);
        bufp->chgCData(oldp+418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt),2);
        bufp->chgBit(oldp+419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay));
        bufp->chgIData(oldp+420,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_0),32);
        bufp->chgIData(oldp+421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_1),32);
        bufp->chgIData(oldp+422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2),32);
        bufp->chgIData(oldp+423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3),32);
        bufp->chgCData(oldp+424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state),3);
        bufp->chgBit(oldp+425,((1U & (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_0) 
                                         << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_0) 
                                                   << 2U)) 
                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_0) 
                                           << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_0))) 
                                      >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))));
        bufp->chgBit(oldp+426,((1U & (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_1) 
                                         << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_1) 
                                                   << 2U)) 
                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_1) 
                                           << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_1))) 
                                      >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))));
        __Vtemp_6[0U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_0)) 
                                  << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_0))));
        __Vtemp_6[1U] = (((IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0)) 
                                    << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0)))) 
                          << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_0)) 
                                                 << 0x1aU) 
                                                | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_0))) 
                                               >> 0x20U)));
        __Vtemp_6[2U] = (((IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0)) 
                                    << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0)))) 
                          >> 0xcU) | ((IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0)) 
                                                 << 0x1aU) 
                                                | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0))) 
                                               >> 0x20U)) 
                                      << 0x14U));
        __Vtemp_6[3U] = ((IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0)) 
                                    << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0))) 
                                  >> 0x20U)) >> 0xcU);
        bufp->chgIData(oldp+427,(((0x67U >= (0x7fU 
                                             & ((IData)(0x1aU) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))
                                   ? (0x3ffffffU & 
                                      (((0U == (0x1fU 
                                                & ((IData)(0x1aU) 
                                                   * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))
                                         ? 0U : (__Vtemp_6[
                                                 (((IData)(0x19U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x1aU) 
                                                       * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1aU) 
                                                      * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))))) 
                                       | (__Vtemp_6[
                                          (3U & (((IData)(0x1aU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)) 
                                                 >> 5U))] 
                                          >> (0x1fU 
                                              & ((IData)(0x1aU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))))
                                   : 0U)),26);
        __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_1)) 
                                  << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_1))));
        __Vtemp_7[1U] = (((IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1)) 
                                    << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1)))) 
                          << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_1)) 
                                                 << 0x1aU) 
                                                | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_1))) 
                                               >> 0x20U)));
        __Vtemp_7[2U] = (((IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1)) 
                                    << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1)))) 
                          >> 0xcU) | ((IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1)) 
                                                 << 0x1aU) 
                                                | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1))) 
                                               >> 0x20U)) 
                                      << 0x14U));
        __Vtemp_7[3U] = ((IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1)) 
                                    << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1))) 
                                  >> 0x20U)) >> 0xcU);
        bufp->chgIData(oldp+428,(((0x67U >= (0x7fU 
                                             & ((IData)(0x1aU) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))
                                   ? (0x3ffffffU & 
                                      (((0U == (0x1fU 
                                                & ((IData)(0x1aU) 
                                                   * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))
                                         ? 0U : (__Vtemp_7[
                                                 (((IData)(0x19U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x1aU) 
                                                       * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1aU) 
                                                      * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))))) 
                                       | (__Vtemp_7[
                                          (3U & (((IData)(0x1aU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)) 
                                                 >> 5U))] 
                                          >> (0x1fU 
                                              & ((IData)(0x1aU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))))
                                   : 0U)),26);
        bufp->chgBit(oldp+429,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22));
        bufp->chgCData(oldp+430,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_24),2);
        bufp->chgBit(oldp+431,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way));
        bufp->chgIData(oldp+432,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25),26);
        bufp->chgBit(oldp+433,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_0));
        bufp->chgBit(oldp+434,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_1));
        bufp->chgBit(oldp+435,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_0));
        bufp->chgBit(oldp+436,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_1));
        bufp->chgBit(oldp+437,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_0));
        bufp->chgBit(oldp+438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_1));
        bufp->chgBit(oldp+439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_0));
        bufp->chgBit(oldp+440,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_1));
        bufp->chgIData(oldp+441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_0),26);
        bufp->chgIData(oldp+442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_1),26);
        bufp->chgIData(oldp+443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_0),26);
        bufp->chgIData(oldp+444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_1),26);
        bufp->chgIData(oldp+445,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0),26);
        bufp->chgIData(oldp+446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1),26);
        bufp->chgIData(oldp+447,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0),26);
        bufp->chgIData(oldp+448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1),26);
        bufp->chgIData(oldp+449,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)
                                   ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
        bufp->chgCData(oldp+450,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)
                                   ? 2U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___UnifiedMemoryController_io_dmem_rw_size))),3);
        bufp->chgBit(oldp+451,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_5) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3))));
        bufp->chgCData(oldp+452,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_5)
                                   ? 0U : (0xfU & (
                                                   (5U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                                      : 1U)))))),4);
        bufp->chgBit(oldp+453,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                | ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3)
                                       : (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)))))));
        bufp->chgBit(oldp+454,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_6) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3))));
        bufp->chgIData(oldp+455,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                   ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
        bufp->chgBit(oldp+456,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_5) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))));
        bufp->chgBit(oldp+457,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_6) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))));
        bufp->chgIData(oldp+458,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_aw_addr),32);
        bufp->chgCData(oldp+459,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                   ? 2U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)
                                            ? 2U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___UnifiedMemoryController_io_dmem_rw_size)))),3);
        bufp->chgBit(oldp+460,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_5) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3)))));
        bufp->chgCData(oldp+461,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                   ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_5)
                                            ? 0U : 
                                           (0xfU & 
                                            ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                              : ((3U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                                   : 1U))))))),4);
        bufp->chgBit(oldp+462,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
                                & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                   | ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7)
                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3)
                                          : (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))))))));
        bufp->chgBit(oldp+463,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_6) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3)))));
        bufp->chgIData(oldp+464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr),32);
        bufp->chgCData(oldp+465,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_5)
                                   ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_14)
                                            ? 0U : 
                                           (3U & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM))))))),8);
        bufp->chgCData(oldp+466,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_5)
                                   ? 1U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_14)
                                            ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM)))),2);
        bufp->chgBit(oldp+467,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                                & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                                    ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_13)) 
                                       & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)))
                                    : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_5) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)))))));
        bufp->chgBit(oldp+468,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                                & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                                    ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_17)) 
                                       & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)))
                                    : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_6) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)))))));
        bufp->chgBit(oldp+469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid));
        bufp->chgBit(oldp+470,((1U & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                                       ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                           ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu))
                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_1))
                                       : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_1))))));
        bufp->chgCData(oldp+471,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state),2);
        bufp->chgBit(oldp+472,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu));
        bufp->chgIData(oldp+473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr),32);
        bufp->chgIData(oldp+474,(((0x200bff8U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)
                                   : ((0x200bffcU == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr)
                                       ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                                  >> 0x20U))
                                       : 0U))),32);
        bufp->chgQData(oldp+475,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime),64);
        bufp->chgBit(oldp+477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_valid));
        bufp->chgIData(oldp+479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_pc),32);
        bufp->chgBit(oldp+480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_ready));
        bufp->chgBit(oldp+481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_valid));
        bufp->chgIData(oldp+482,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst),32);
        bufp->chgIData(oldp+483,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc),32);
        bufp->chgIData(oldp+484,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_instance_io_result),32);
        bufp->chgIData(oldp+485,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csr_read)
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_rdata
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_instance_io_result)),32);
        bufp->chgIData(oldp+486,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_rs2_data),32);
        bufp->chgIData(oldp+487,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_redirect_target),32);
        bufp->chgCData(oldp+488,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_exu),5);
        bufp->chgBit(oldp+489,((3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst))));
        bufp->chgCData(oldp+490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state),2);
        bufp->chgQData(oldp+491,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__perf_jump_mispredict_count),64);
        bufp->chgIData(oldp+493,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_rs1_data),32);
        bufp->chgBit(oldp+494,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_branch_taken));
        bufp->chgIData(oldp+495,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1),32);
        bufp->chgIData(oldp+496,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2),32);
        bufp->chgBit(oldp+497,((0x73U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst))));
        bufp->chgBit(oldp+498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrw));
        bufp->chgBit(oldp+499,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrs));
        bufp->chgBit(oldp+500,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall));
        bufp->chgBit(oldp+501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_mret));
        bufp->chgBit(oldp+502,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csr_read));
        bufp->chgBit(oldp+503,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_exception_flow));
        bufp->chgBit(oldp+504,((0x63U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst))));
        bufp->chgCData(oldp+505,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op),5);
        bufp->chgCData(oldp+506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd),2);
        bufp->chgSData(oldp+507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr),12);
        bufp->chgSData(oldp+508,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr),12);
        bufp->chgIData(oldp+509,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata),32);
        bufp->chgBit(oldp+510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_wen));
        bufp->chgIData(oldp+511,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_rdata),32);
        bufp->chgIData(oldp+512,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus),32);
        bufp->chgIData(oldp+513,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec),32);
        bufp->chgIData(oldp+514,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc),32);
        bufp->chgIData(oldp+515,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause),32);
        bufp->chgIData(oldp+516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__delayedData),32);
        bufp->chgCData(oldp+517,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_lsu),5);
        bufp->chgBit(oldp+518,(((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                                & ((3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst)) 
                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc 
                                      == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_pc)))));
        bufp->chgIData(oldp+519,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                                 [(0xfU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+520,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                                 [(0xfU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                           >> 0x14U))]),32);
        bufp->chgCData(oldp+521,((0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+522,((0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+523,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst),32);
        bufp->chgBit(oldp+524,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_exu));
        bufp->chgBit(oldp+525,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_exu));
        bufp->chgBit(oldp+526,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_lsu));
        bufp->chgBit(oldp+527,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_lsu));
        bufp->chgBit(oldp+528,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__load_use_hazard));
        bufp->chgIData(oldp+529,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__exuResultReg),32);
        bufp->chgIData(oldp+530,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__lsuResultReg),32);
        bufp->chgBit(oldp+531,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_eq));
        bufp->chgBit(oldp+532,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_lt));
        bufp->chgBit(oldp+533,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_ltu));
        bufp->chgCData(oldp+534,((((0x13U == (0x7fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                   | ((0x33U == (0x7fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                      | ((0x23U == 
                                          (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                         | (3U == (0x7fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))))
                                   ? 0U : ((0x63U == 
                                            (0x7fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                            ? 2U : 
                                           ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                             ? 3U : 
                                            ((0x67U 
                                              != (0x7fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                             & ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                | (0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))))))),2);
        bufp->chgCData(oldp+535,(((0x13U == (0x7fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                   ? 1U : ((0x33U == 
                                            (0x7fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                            ? 3U : 
                                           ((0x23U 
                                             == (0x7fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                             ? 2U : 
                                            ((3U == 
                                              (0x7fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                             | ((~ 
                                                 ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                  | (0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))) 
                                                & (0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))))))),2);
        bufp->chgCData(oldp+536,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state),2);
        bufp->chgBit(oldp+537,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__io_in_ready_0));
        bufp->chgBit(oldp+538,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid));
        bufp->chgIData(oldp+539,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst),32);
        bufp->chgIData(oldp+540,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_pc),32);
        bufp->chgIData(oldp+541,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_result),32);
        bufp->chgBit(oldp+542,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore));
        bufp->chgBit(oldp+543,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad));
        bufp->chgIData(oldp+544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr),32);
        bufp->chgIData(oldp+545,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_rs2_data),32);
        bufp->chgBit(oldp+546,((0x23U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst))));
        bufp->chgCData(oldp+547,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control),3);
        bufp->chgCData(oldp+548,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),3);
        bufp->chgCData(oldp+549,(((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                   : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                       : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                           : 1U)))),8);
        bufp->chgCData(oldp+550,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___UnifiedMemoryController_io_dmem_rw_size),3);
        bufp->chgCData(oldp+551,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__base_mask),8);
        bufp->chgCData(oldp+552,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type),3);
        bufp->chgCData(oldp+553,((0xfU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst 
                                          >> 7U))),4);
        bufp->chgCData(oldp+554,((0xfU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+555,((0xfU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                          >> 0x14U))),4);
        bufp->chgIData(oldp+556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+558,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+559,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+561,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+562,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+563,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+564,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+565,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+566,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+567,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+568,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+571,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[15]),32);
        bufp->chgCData(oldp+572,((0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+573,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state),2);
        bufp->chgIData(oldp+574,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst),32);
        bufp->chgIData(oldp+575,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_pc),32);
        bufp->chgIData(oldp+576,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_result),32);
        bufp->chgIData(oldp+577,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_dmem_rdata),32);
        bufp->chgCData(oldp+578,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel),3);
        bufp->chgBit(oldp+579,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+580,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+581,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+582,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+583,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+584,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+585,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+586,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+587,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+588,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgCData(oldp+589,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+590,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+591,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+592,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgCData(oldp+593,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+594,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+595,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+596,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+597,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+598,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+599,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+600,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+601,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+602,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+603,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+604,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+605,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+606,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+607,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+608,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+609,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+610,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+612,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+613,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+614,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+617,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+618,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+619,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+620,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgBit(oldp+626,((IData)(((0x20000000U 
                                         == (0x30000000U 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                        & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
        bufp->chgBit(oldp+627,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+628,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+629,((IData)(((0U == (0x30000000U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                        & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
        bufp->chgBit(oldp+630,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast)))));
        bufp->chgBit(oldp+631,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                   >> 2U))));
        bufp->chgBit(oldp+632,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgBit(oldp+633,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                                & (0U == ((6U & (4U 
                                                 ^ 
                                                 (0x1eU 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                          | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x18U)))))));
        bufp->chgBit(oldp+634,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                   >> 1U))));
        bufp->chgBit(oldp+635,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [8U])))) {
        bufp->chgIData(oldp+636,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
        bufp->chgBit(oldp+637,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                       >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
        bufp->chgBit(oldp+638,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                       >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
        bufp->chgBit(oldp+639,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
        bufp->chgCData(oldp+640,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                        | (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                << 0x1eU) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                  << 0x1cU)) 
                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                  << 0x1aU) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                    << 0x18U))) 
                                             | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                  << 0x16U) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                    << 0x14U)) 
                                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                    << 0x12U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                      << 0x10U)))) 
                                            | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                  << 0xeU) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                    << 0xcU)) 
                                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                    << 0xaU) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                      << 8U))) 
                                               | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                    << 6U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                      << 4U)) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                      << 2U) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0))))) 
                                           >> (0x1fU 
                                               & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid), 1U)))))),2);
        bufp->chgIData(oldp+641,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                    ? ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata
                                        : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                    : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                               : 0U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                      [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                      >> 0x18U)
                                                      : 0U)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                   << 0x18U) 
                                                  | (0xff0000U 
                                                     & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                           >> 0x10U)
                                                           : 0U)
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                        << 0x10U))) 
                                                 | ((0xff00U 
                                                     & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                           >> 8U)
                                                           : 0U)
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
                                                            : 0U)
                                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))))
                                                 : 0U)))),32);
        bufp->chgBit(oldp+642,(((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                      << 0xfU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                        << 9U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                        << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                          << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))));
        bufp->chgBit(oldp+643,((1U & (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                           << 0xfU) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU)) 
                                         | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                             << 0xdU) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                               << 0xcU))) 
                                        | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                             << 0xbU) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                               << 0xaU)) 
                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                               << 9U) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                 << 8U)))) 
                                       | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                             << 7U) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                               << 6U)) 
                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                 << 4U))) 
                                          | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                      >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)))));
        bufp->chgBit(oldp+644,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                       >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
        bufp->chgBit(oldp+645,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+646,((0x7fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                              >> 1U)))));
        bufp->chgBit(oldp+647,((0x3fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+648,((0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 0xbU)))));
        bufp->chgBit(oldp+649,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 0xcU)))));
        bufp->chgBit(oldp+650,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+651,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+652,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xfU))));
        bufp->chgBit(oldp+653,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+654,((0x7fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                              >> 1U)))));
        bufp->chgBit(oldp+655,((0x3fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                              >> 2U)))));
        bufp->chgBit(oldp+656,((0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                              >> 3U)))));
        bufp->chgBit(oldp+657,((0x3fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                              >> 2U)))));
        bufp->chgBit(oldp+658,((0xfffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 4U)))));
        bufp->chgBit(oldp+659,((0x7ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 5U)))));
        bufp->chgBit(oldp+660,((0x3ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 6U)))));
        bufp->chgBit(oldp+661,((0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 7U)))));
        bufp->chgBit(oldp+662,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 8U)))));
        bufp->chgBit(oldp+663,((0x7fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 9U)))));
        bufp->chgBit(oldp+664,((0x3fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+665,((0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 0xbU)))));
        bufp->chgBit(oldp+666,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 0xcU)))));
        bufp->chgBit(oldp+667,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+668,((0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                              >> 3U)))));
        bufp->chgBit(oldp+669,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+670,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xfU))));
        bufp->chgBit(oldp+671,((0xfffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                             >> 4U)))));
        bufp->chgBit(oldp+672,((0x7ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                             >> 5U)))));
        bufp->chgBit(oldp+673,((0x3ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                             >> 6U)))));
        bufp->chgBit(oldp+674,((0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                             >> 7U)))));
        bufp->chgBit(oldp+675,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 8U)))));
        bufp->chgBit(oldp+676,((0x7fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 9U)))));
        bufp->chgCData(oldp+677,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                   ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                            ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp)))),2);
        bufp->chgBit(oldp+678,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)))));
        bufp->chgCData(oldp+679,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                   ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                            ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp)))),2);
        bufp->chgCData(oldp+680,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                   ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp))),2);
        bufp->chgBit(oldp+681,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid))));
        bufp->chgCData(oldp+682,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                   ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp))),2);
        bufp->chgBit(oldp+683,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast))));
        bufp->chgBit(oldp+684,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_6) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_memory_r_valid) 
                                       & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)) 
                                           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                              & (3U 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp)))) 
                                          | (2U == 
                                             ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                               ? 0U
                                               : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                                   ? 0U
                                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp))))))
                                    : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
                                           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)))) 
                                       & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)) 
                                           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                              & (3U 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp)))) 
                                          | (2U == 
                                             ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                               ? 0U
                                               : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                                   ? 0U
                                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp))))))))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgBit(oldp+685,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid))));
        bufp->chgBit(oldp+686,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
        bufp->chgBit(oldp+687,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_2) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_ready))));
        bufp->chgBit(oldp+688,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready)))));
        bufp->chgBit(oldp+689,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid))))));
        bufp->chgBit(oldp+690,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_ready))));
        bufp->chgBit(oldp+691,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready))));
        bufp->chgBit(oldp+692,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+693,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck));
        bufp->chgCData(oldp+694,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss),8);
        bufp->chgCData(oldp+695,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),2);
        bufp->chgIData(oldp+696,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
        bufp->chgBit(oldp+697,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
        bufp->chgCData(oldp+698,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bid),4);
        bufp->chgIData(oldp+699,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
        bufp->chgBit(oldp+700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast));
        bufp->chgBit(oldp+701,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
        bufp->chgBit(oldp+702,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+703,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+704,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                   ? 0xeU : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                              ? 0xbU
                                              : (0xfU 
                                                 & ((2U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x14U)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0x10U)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 0xcU)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 8U)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                         >> 4U)
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                          : 0U)))))))))),4);
        bufp->chgBit(oldp+705,((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+706,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+707,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+708,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+709,((0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgCData(oldp+710,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
        bufp->chgCData(oldp+711,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_counter),4);
        bufp->chgBit(oldp+712,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_done));
        bufp->chgCData(oldp+713,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                   ? (1U & (0x35U >> 
                                            (7U & ((IData)(7U) 
                                                   - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_counter)))))
                                   : 0U)),4);
        bufp->chgCData(oldp+714,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                   ? 0xfU : 0U)),4);
        bufp->chgBit(oldp+715,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgCData(oldp+716,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+717,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+718,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                         >> 1U) - (IData)(3U)))),2);
        bufp->chgBit(oldp+719,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+720,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+721,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+722,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
        bufp->chgSData(oldp+723,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),16);
        bufp->chgIData(oldp+724,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q) 
                                   << 0x10U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q))),32);
        bufp->chgBit(oldp+725,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
        bufp->chgIData(oldp+726,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
        bufp->chgCData(oldp+727,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
        bufp->chgIData(oldp+728,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
        bufp->chgBit(oldp+729,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
        bufp->chgBit(oldp+730,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
        bufp->chgCData(oldp+731,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
        bufp->chgCData(oldp+732,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
        bufp->chgCData(oldp+733,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
        bufp->chgBit(oldp+734,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
        bufp->chgBit(oldp+735,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
        bufp->chgBit(oldp+736,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
        bufp->chgBit(oldp+737,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgBit(oldp+738,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgCData(oldp+739,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr]),6);
        bufp->chgBit(oldp+740,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0)) 
                                & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
        bufp->chgBit(oldp+741,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0))));
        bufp->chgBit(oldp+742,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgBit(oldp+743,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
        bufp->chgBit(oldp+744,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
        bufp->chgCData(oldp+745,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
        bufp->chgCData(oldp+746,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
        bufp->chgCData(oldp+747,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
        bufp->chgCData(oldp+748,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
        bufp->chgCData(oldp+749,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
        bufp->chgCData(oldp+750,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
        bufp->chgCData(oldp+751,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
        bufp->chgBit(oldp+752,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgIData(oldp+753,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
        bufp->chgIData(oldp+754,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
        bufp->chgIData(oldp+755,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
        bufp->chgIData(oldp+756,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
        bufp->chgCData(oldp+757,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
        bufp->chgCData(oldp+758,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
        bufp->chgCData(oldp+759,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
        bufp->chgBit(oldp+760,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
        bufp->chgSData(oldp+761,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),16);
        bufp->chgCData(oldp+762,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),2);
        bufp->chgBit(oldp+763,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
        bufp->chgCData(oldp+764,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
        bufp->chgSData(oldp+765,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+766,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+767,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+768,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
        bufp->chgCData(oldp+769,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
        bufp->chgCData(oldp+770,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
        bufp->chgCData(oldp+771,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
        bufp->chgSData(oldp+772,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),16);
        bufp->chgSData(oldp+773,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),16);
        bufp->chgIData(oldp+774,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
        bufp->chgCData(oldp+775,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
        bufp->chgBit(oldp+776,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
        bufp->chgBit(oldp+777,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
        bufp->chgCData(oldp+778,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_adr_i),5);
        bufp->chgIData(oldp+779,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_dat_i),32);
        bufp->chgCData(oldp+780,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_sel_i),4);
        bufp->chgBit(oldp+781,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_we_i));
        bufp->chgBit(oldp+782,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_stb_i));
        bufp->chgBit(oldp+783,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_cyc_i));
        bufp->chgBit(oldp+784,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_ack_o));
        bufp->chgCData(oldp+785,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),4);
        bufp->chgSData(oldp+786,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+787,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+788,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+789,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+793,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 9U))));
        bufp->chgBit(oldp+794,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xaU))));
        bufp->chgCData(oldp+795,((0x7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+796,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 8U))));
        bufp->chgBit(oldp+797,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+798,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+799,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+800,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+801,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+802,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+803,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
        bufp->chgSData(oldp+804,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+805,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+806,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+807,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+808,((0xffU & ((0x800U 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0) 
                                               - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                               - (IData)(1U))))),8);
        bufp->chgCData(oldp+809,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+810,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
        bufp->chgBit(oldp+811,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
        bufp->chgBit(oldp+812,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                         >> 1U)))));
        bufp->chgBit(oldp+813,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+814,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+815,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U))));
        bufp->chgBit(oldp+816,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgBit(oldp+817,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+818,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+819,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+820,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+821,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+822,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgCData(oldp+823,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgSData(oldp+824,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgCData(oldp+825,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+826,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+827,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+828,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgSData(oldp+829,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgCData(oldp+830,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+831,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+832,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+833,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                      >> 7U))));
        bufp->chgBit(oldp+834,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 4U))));
        bufp->chgBit(oldp+835,((IData)((0x10U != (0x12U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+836,((IData)((0x11U == (0x11U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+837,((IData)((0x14U == (0x14U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+838,((IData)((0x18U == (0x18U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgCData(oldp+839,((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                     << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                               << 6U)) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                       << 5U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                 << 4U))) 
                                  | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                       << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))),8);
        bufp->chgBit(oldp+840,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+841,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+842,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2));
        bufp->chgBit(oldp+843,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3));
        bufp->chgBit(oldp+844,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4));
        bufp->chgBit(oldp+845,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+846,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+847,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+848,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+849,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+850,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+851,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+852,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+853,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+854,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+855,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+856,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+857,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+858,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+859,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+860,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+861,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+862,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+863,((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [1U] 
                                               | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [2U] 
                                                  | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [3U] 
                                                     | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [4U] 
                                                        | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                           [5U] 
                                                           | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                              [6U] 
                                                              | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                 [7U] 
                                                                 | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                    [8U] 
                                                                    | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                       [9U] 
                                                                       | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                          [0xaU] 
                                                                          | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                             [0xbU] 
                                                                             | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xcU] 
                                                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xdU] 
                                                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
        bufp->chgBit(oldp+864,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
        bufp->chgCData(oldp+865,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgCData(oldp+866,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+867,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+868,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgSData(oldp+869,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+870,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
        bufp->chgCData(oldp+871,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+872,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+873,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
        bufp->chgBit(oldp+874,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
        bufp->chgCData(oldp+875,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+876,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+877,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+878,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+879,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+880,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+881,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+882,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+883,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+884,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+885,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+886,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+887,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+888,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+889,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+890,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+891,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+892,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+893,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+894,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+895,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+896,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+897,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+898,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+899,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+900,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+901,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+902,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+903,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+904,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+905,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+906,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+907,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+908,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+909,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+910,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+911,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+912,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+913,((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+914,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+915,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+916,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                          - (IData)(1U)))),4);
        bufp->chgSData(oldp+917,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+918,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                           >> 2U))),8);
        bufp->chgCData(oldp+919,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+920,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+921,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+922,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+923,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+924,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+925,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+926,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+927,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+928,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+929,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+930,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+931,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+932,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+933,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+934,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+935,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+936,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+937,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+938,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U]),3);
        bufp->chgCData(oldp+939,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]),3);
        bufp->chgCData(oldp+940,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [2U]),3);
        bufp->chgCData(oldp+941,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [3U]),3);
        bufp->chgCData(oldp+942,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [4U]),3);
        bufp->chgCData(oldp+943,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [5U]),3);
        bufp->chgCData(oldp+944,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [6U]),3);
        bufp->chgCData(oldp+945,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [7U]),3);
        bufp->chgCData(oldp+946,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [8U]),3);
        bufp->chgCData(oldp+947,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [9U]),3);
        bufp->chgCData(oldp+948,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xaU]),3);
        bufp->chgCData(oldp+949,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xbU]),3);
        bufp->chgCData(oldp+950,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xcU]),3);
        bufp->chgCData(oldp+951,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xdU]),3);
        bufp->chgCData(oldp+952,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xeU]),3);
        bufp->chgCData(oldp+953,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xfU]),3);
        bufp->chgCData(oldp+954,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                           >> 3U))),8);
        bufp->chgCData(oldp+955,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+956,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+957,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+958,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+959,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+960,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+961,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+962,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+963,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+964,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+965,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        bufp->chgBit(oldp+966,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__inactive));
        bufp->chgBit(oldp+967,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+968,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__active_bank),4);
        bufp->chgSData(oldp+969,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__active_row[0]),13);
        bufp->chgSData(oldp+970,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__active_row[1]),13);
        bufp->chgSData(oldp+971,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__active_row[2]),13);
        bufp->chgSData(oldp+972,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__active_row[3]),13);
        bufp->chgCData(oldp+973,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_length_code),3);
        bufp->chgCData(oldp+974,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__cas_latency_code),3);
        bufp->chgCData(oldp+975,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_length),4);
        bufp->chgSData(oldp+976,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__dq_out),16);
        bufp->chgBit(oldp+977,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__dq_en));
        bufp->chgCData(oldp+978,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__state),3);
        bufp->chgCData(oldp+979,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__delay_counter),4);
        bufp->chgCData(oldp+980,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_counter),4);
        bufp->chgSData(oldp+981,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__current_col),9);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+982,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+983,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter),8);
        bufp->chgCData(oldp+984,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+985,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr),24);
        bufp->chgIData(oldp+986,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data),32);
        bufp->chgBit(oldp+987,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                & (0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+988,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
        bufp->chgBit(oldp+989,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
        bufp->chgBit(oldp+990,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite));
        bufp->chgIData(oldp+991,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
        bufp->chgCData(oldp+992,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
        bufp->chgBit(oldp+993,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr));
        bufp->chgBit(oldp+994,((IData)(((0x20000000U 
                                         == (0x30000000U 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)))));
        bufp->chgIData(oldp+995,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
        bufp->chgBit(oldp+996,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgIData(oldp+997,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
        bufp->chgBit(oldp+998,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+999,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
        bufp->chgBit(oldp+1000,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
        bufp->chgBit(oldp+1001,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
        bufp->chgBit(oldp+1002,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
        bufp->chgBit(oldp+1003,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
        bufp->chgBit(oldp+1004,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
        bufp->chgBit(oldp+1005,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+1006,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+1007,((0U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+1008,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+1009,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+1010,((2U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+1011,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
        bufp->chgBit(oldp+1012,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
        bufp->chgIData(oldp+1013,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
        bufp->chgBit(oldp+1014,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
        bufp->chgIData(oldp+1015,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
        bufp->chgCData(oldp+1016,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp),2);
        bufp->chgBit(oldp+1017,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
        bufp->chgBit(oldp+1018,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
        bufp->chgIData(oldp+1019,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
        bufp->chgCData(oldp+1020,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr) 
                                   << 1U)),2);
        bufp->chgBit(oldp+1021,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
        bufp->chgIData(oldp+1022,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
        bufp->chgCData(oldp+1023,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
        bufp->chgCData(oldp+1024,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
        bufp->chgBit(oldp+1025,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
        bufp->chgIData(oldp+1026,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
        bufp->chgBit(oldp+1027,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
        bufp->chgIData(oldp+1028,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata),32);
        bufp->chgBit(oldp+1029,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast));
        bufp->chgBit(oldp+1030,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
        bufp->chgCData(oldp+1031,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+1032,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
        bufp->chgIData(oldp+1033,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgIData(oldp+1034,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
        bufp->chgCData(oldp+1035,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
        bufp->chgCData(oldp+1036,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
        bufp->chgIData(oldp+1037,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgBit(oldp+1038,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
        bufp->chgIData(oldp+1039,((0xfffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
        bufp->chgIData(oldp+1040,((0xfffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
        bufp->chgBit(oldp+1041,((0x7800U == (0x7fffU 
                                             & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0xdU)))));
        bufp->chgSData(oldp+1042,((0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1043,((0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 2U))),11);
        bufp->chgIData(oldp+1044,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
        bufp->chgBit(oldp+1045,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+1046,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+1047,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgBit(oldp+1048,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+1049,((0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+1050,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgCData(oldp+1051,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
        bufp->chgCData(oldp+1052,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
        bufp->chgIData(oldp+1053,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
        bufp->chgIData(oldp+1054,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
        bufp->chgBit(oldp+1055,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+1056,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
        bufp->chgBit(oldp+1057,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+1058,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgCData(oldp+1059,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+1060,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+1061,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgCData(oldp+1062,((0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1063,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                   >> 0x18U)),8);
        bufp->chgIData(oldp+1064,(((0xffff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                       << 8U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
        bufp->chgIData(oldp+1065,((0xfffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
        bufp->chgIData(oldp+1066,((0xffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
        bufp->chgCData(oldp+1067,((0xffU & ((IData)(7U) 
                                            + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
        bufp->chgCData(oldp+1068,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                             : 0U))),8);
        bufp->chgIData(oldp+1069,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
        bufp->chgIData(oldp+1070,((0x3000000U | (0xffffffU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))),32);
        bufp->chgBit(oldp+1071,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access));
        bufp->chgBit(oldp+1072,(((0x10001000U <= (0x3fffffffU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                 & (0x10001fffU >= 
                                    (0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
        bufp->chgCData(oldp+1073,((7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
        bufp->chgCData(oldp+1074,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+1075,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+1076,((((((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                      | (0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
        bufp->chgBit(oldp+1077,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
        bufp->chgIData(oldp+1078,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata),32);
        bufp->chgBit(oldp+1079,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
        bufp->chgBit(oldp+1080,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
        bufp->chgBit(oldp+1081,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
        bufp->chgBit(oldp+1082,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
        bufp->chgBit(oldp+1083,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
        bufp->chgCData(oldp+1084,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid),4);
        bufp->chgBit(oldp+1085,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
        bufp->chgBit(oldp+1086,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
        bufp->chgCData(oldp+1087,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid),4);
        bufp->chgBit(oldp+1088,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
        bufp->chgBit(oldp+1089,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
        bufp->chgBit(oldp+1090,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
        bufp->chgBit(oldp+1091,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
        bufp->chgCData(oldp+1092,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
        bufp->chgBit(oldp+1093,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
        bufp->chgBit(oldp+1094,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
        bufp->chgBit(oldp+1095,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast));
        bufp->chgBit(oldp+1096,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+1097,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgBit(oldp+1098,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+1099,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+1100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+1101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+1102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+1103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready));
        bufp->chgBit(oldp+1104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
        bufp->chgBit(oldp+1105,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready));
        bufp->chgBit(oldp+1106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
        bufp->chgBit(oldp+1107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
        bufp->chgBit(oldp+1108,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
        bufp->chgBit(oldp+1109,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
        bufp->chgCData(oldp+1110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid),4);
        bufp->chgCData(oldp+1111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp),2);
        bufp->chgBit(oldp+1112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
        bufp->chgCData(oldp+1113,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid),4);
        bufp->chgCData(oldp+1114,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp),2);
        bufp->chgBit(oldp+1115,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast));
        bufp->chgSData(oldp+1116,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)))),16);
        bufp->chgSData(oldp+1117,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)))),16);
        bufp->chgBit(oldp+1118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
        bufp->chgCData(oldp+1119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
        bufp->chgCData(oldp+1120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
        bufp->chgCData(oldp+1121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
        bufp->chgBit(oldp+1122,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
        bufp->chgBit(oldp+1123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
        bufp->chgBit(oldp+1124,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
        bufp->chgBit(oldp+1125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
        bufp->chgBit(oldp+1126,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
        bufp->chgCData(oldp+1127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
        bufp->chgCData(oldp+1128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
        bufp->chgCData(oldp+1129,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
        bufp->chgBit(oldp+1130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
        bufp->chgBit(oldp+1131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
        bufp->chgBit(oldp+1132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
        bufp->chgBit(oldp+1133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
        bufp->chgBit(oldp+1134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready));
        bufp->chgBit(oldp+1135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready));
        bufp->chgBit(oldp+1136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
        bufp->chgBit(oldp+1137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
        bufp->chgSData(oldp+1138,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)))),16);
        bufp->chgSData(oldp+1139,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)))),16);
        bufp->chgBit(oldp+1140,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+1141,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
        bufp->chgCData(oldp+1142,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
        bufp->chgCData(oldp+1143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
        bufp->chgBit(oldp+1144,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+1145,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+1146,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
        bufp->chgBit(oldp+1147,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+1148,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+1149,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
        bufp->chgBit(oldp+1150,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+1151,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+1152,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
        bufp->chgCData(oldp+1153,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+1154,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
        bufp->chgBit(oldp+1155,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
        bufp->chgBit(oldp+1156,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
        bufp->chgBit(oldp+1157,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
        bufp->chgBit(oldp+1158,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+1159,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+1160,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
        bufp->chgBit(oldp+1161,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)))));
        bufp->chgBit(oldp+1162,((0x7fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                            & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                >> 1U) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgBit(oldp+1163,((0x3fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                              >> 0xaU) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgBit(oldp+1164,((0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                              >> 0xbU) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgBit(oldp+1165,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                             >> 0xcU) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgBit(oldp+1166,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                           >> 0xdU) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgBit(oldp+1167,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                           >> 0xeU) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgBit(oldp+1168,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+1169,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)))));
        bufp->chgBit(oldp+1170,((0x7fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                            & (((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                               >> 1U)))));
        bufp->chgBit(oldp+1171,((0x3fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                            & (((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                               >> 2U)))));
        bufp->chgBit(oldp+1172,((0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                            & (((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                               >> 3U)))));
        bufp->chgBit(oldp+1173,((0x3fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                            & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                >> 2U) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgBit(oldp+1174,((0xfffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                              >> 4U)))));
        bufp->chgBit(oldp+1175,((0x7ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                              >> 5U)))));
        bufp->chgBit(oldp+1176,((0x3ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                              >> 6U)))));
        bufp->chgBit(oldp+1177,((0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1178,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                             >> 8U)))));
        bufp->chgBit(oldp+1179,((0x7fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                             >> 9U)))));
        bufp->chgBit(oldp+1180,((0x3fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+1181,((0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                             >> 0xbU)))));
        bufp->chgBit(oldp+1182,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+1183,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                          >> 0xdU)))));
        bufp->chgBit(oldp+1184,((0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                            & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                >> 3U) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgBit(oldp+1185,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                          >> 0xeU)))));
        bufp->chgBit(oldp+1186,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+1187,((0xfffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                               >> 4U) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgBit(oldp+1188,((0x7ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                               >> 5U) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgBit(oldp+1189,((0x3ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                               >> 6U) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgBit(oldp+1190,((0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                               >> 7U) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgBit(oldp+1191,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                              >> 8U) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgBit(oldp+1192,((0x7fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                              >> 9U) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))))));
        bufp->chgIData(oldp+1193,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_data),32);
        bufp->chgBit(oldp+1194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_last));
        bufp->chgBit(oldp+1195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_valid));
        bufp->chgBit(oldp+1196,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_memory_r_valid));
        bufp->chgIData(oldp+1197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_r_data),32);
        bufp->chgBit(oldp+1198,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_r_valid));
        bufp->chgIData(oldp+1199,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data),32);
        bufp->chgCData(oldp+1200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
        bufp->chgCData(oldp+1201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
        bufp->chgCData(oldp+1202,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
        bufp->chgBit(oldp+1203,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
        bufp->chgBit(oldp+1204,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
        bufp->chgBit(oldp+1205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
        bufp->chgCData(oldp+1206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
        bufp->chgBit(oldp+1207,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
        bufp->chgBit(oldp+1208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
        bufp->chgCData(oldp+1209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w),4);
        bufp->chgBit(oldp+1210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w));
        bufp->chgBit(oldp+1211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
        bufp->chgBit(oldp+1212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
        bufp->chgBit(oldp+1213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
        bufp->chgCData(oldp+1214,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
        bufp->chgIData(oldp+1215,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
        bufp->chgCData(oldp+1216,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
        bufp->chgBit(oldp+1217,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
        bufp->chgBit(oldp+1218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
        bufp->chgBit(oldp+1219,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
        bufp->chgIData(oldp+1220,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
        bufp->chgBit(oldp+1221,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                 & (0x14U == (0x1cU 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
        bufp->chgBit(oldp+1222,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                 & (0x10U == (0x1cU 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
        bufp->chgCData(oldp+1223,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
        bufp->chgBit(oldp+1224,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                 & (0x18U == (0x1cU 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
        bufp->chgCData(oldp+1225,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
        bufp->chgCData(oldp+1226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
        bufp->chgCData(oldp+1227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+1228,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
        bufp->chgBit(oldp+1229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
        bufp->chgBit(oldp+1230,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+1231,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 2U))));
        bufp->chgBit(oldp+1232,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1233,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgSData(oldp+1234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
        bufp->chgCData(oldp+1235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
        bufp->chgBit(oldp+1236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
        bufp->chgBit(oldp+1237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
        bufp->chgBit(oldp+1238,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
        bufp->chgBit(oldp+1239,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready));
        bufp->chgBit(oldp+1240,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready));
        bufp->chgBit(oldp+1241,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
        bufp->chgBit(oldp+1242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
        bufp->chgBit(oldp+1243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+1244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+1245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
        bufp->chgBit(oldp+1246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_ready));
        bufp->chgIData(oldp+1247,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w),32);
        bufp->chgBit(oldp+1248,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
        bufp->chgBit(oldp+1249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
        bufp->chgCData(oldp+1250,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
        bufp->chgCData(oldp+1251,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
        bufp->chgCData(oldp+1252,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
        bufp->chgCData(oldp+1253,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
        bufp->chgSData(oldp+1254,((0x1feU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                             >> 1U))),13);
        bufp->chgSData(oldp+1255,((0x1fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                              >> 0xcU))),13);
        bufp->chgCData(oldp+1256,((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                         >> 0xaU))),2);
        bufp->chgCData(oldp+1257,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
        bufp->chgIData(oldp+1258,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
        bufp->chgWData(oldp+1259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
        bufp->chgBit(oldp+1262,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_1) 
                                 & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                     >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
        bufp->chgBit(oldp+1263,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_3) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgBit(oldp+1264,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_7) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgBit(oldp+1265,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_7))));
        bufp->chgBit(oldp+1266,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_3))));
        bufp->chgBit(oldp+1267,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_6) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgBit(oldp+1268,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_6))));
        bufp->chgSData(oldp+1269,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__write_mask),16);
    }
    bufp->chgBit(oldp+1270,(vlSelfRef.clock));
    bufp->chgBit(oldp+1271,(vlSelfRef.reset));
    bufp->chgSData(oldp+1272,(vlSelfRef.externalPins_gpio_out),16);
    bufp->chgSData(oldp+1273,(vlSelfRef.externalPins_gpio_in),16);
    bufp->chgCData(oldp+1274,(vlSelfRef.externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+1275,(vlSelfRef.externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+1276,(vlSelfRef.externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+1277,(vlSelfRef.externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+1278,(vlSelfRef.externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+1279,(vlSelfRef.externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+1280,(vlSelfRef.externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+1281,(vlSelfRef.externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+1282,(vlSelfRef.externalPins_ps2_clk));
    bufp->chgBit(oldp+1283,(vlSelfRef.externalPins_ps2_data));
    bufp->chgCData(oldp+1284,(vlSelfRef.externalPins_vga_r),8);
    bufp->chgCData(oldp+1285,(vlSelfRef.externalPins_vga_g),8);
    bufp->chgCData(oldp+1286,(vlSelfRef.externalPins_vga_b),8);
    bufp->chgBit(oldp+1287,(vlSelfRef.externalPins_vga_hsync));
    bufp->chgBit(oldp+1288,(vlSelfRef.externalPins_vga_vsync));
    bufp->chgBit(oldp+1289,(vlSelfRef.externalPins_vga_valid));
    bufp->chgBit(oldp+1290,(vlSelfRef.externalPins_uart_rx));
    bufp->chgBit(oldp+1291,(vlSelfRef.externalPins_uart_tx));
    bufp->chgCData(oldp+1292,(vlSelfRef.io_wbu_state_debug),2);
    bufp->chgIData(oldp+1293,(vlSelfRef.io_pc_debug),32);
    bufp->chgIData(oldp+1294,(vlSelfRef.io_inst_debug),32);
    bufp->chgCData(oldp+1295,(vlSelfRef.io_ifu_state_debug),3);
    bufp->chgCData(oldp+1296,(vlSelfRef.io_lsu_state_debug),3);
    bufp->chgBit(oldp+1297,(vlSelfRef.io_lsu_is_ld_or_st_debug));
    bufp->chgIData(oldp+1298,(vlSelfRef.io_lsu_reg_inst_debug),32);
    bufp->chgIData(oldp+1299,(vlSelfRef.io_dmem_wdata_debug),32);
    bufp->chgIData(oldp+1300,(vlSelfRef.io_dmem_rdata_debug),32);
    bufp->chgIData(oldp+1301,(vlSelfRef.io_lsu_reg_dmem_addr_debug),32);
    bufp->chgBit(oldp+1302,(vlSelfRef.io_wb_wen_debug));
    bufp->chgCData(oldp+1303,(vlSelfRef.io_wb_sel_debug),2);
    bufp->chgIData(oldp+1304,(vlSelfRef.io_wbu_reg_dmem_rdata_debug),32);
    bufp->chgIData(oldp+1305,(vlSelfRef.io_wbu_reg_inst_debug),32);
    bufp->chgIData(oldp+1306,(vlSelfRef.io_wbu_reg_pc_debug),32);
    bufp->chgIData(oldp+1307,(vlSelfRef.io_lsu_reg_pc_debug),32);
    bufp->chgCData(oldp+1308,(vlSelfRef.io_Arbiter_state_debug),2);
    bufp->chgIData(oldp+1309,(vlSelfRef.io_wb_data_debug),32);
    bufp->chgCData(oldp+1310,(vlSelfRef.io_lsu_memory_ar_size),3);
    bufp->chgCData(oldp+1311,(vlSelfRef.io_icache_state_debug),3);
    bufp->chgCData(oldp+1312,(vlSelfRef.io_idu_state_debug),2);
    bufp->chgBit(oldp+1313,(vlSelfRef.io_jump_mispredict_debug));
    bufp->chgCData(oldp+1314,(vlSelfRef.io_exu_state_debug),2);
    bufp->chgQData(oldp+1315,(vlSelfRef.io_perf_jump_mispredict_count),64);
    bufp->chgQData(oldp+1317,(vlSelfRef.io_icache_miss_count),64);
    bufp->chgIData(oldp+1319,(vlSelfRef.io_idu_rs1_data_debug),32);
    bufp->chgIData(oldp+1320,(vlSelfRef.io_idu_rs2_data_debug),32);
    bufp->chgBit(oldp+1321,(vlSelfRef.io_idu_branch_taken_debug));
    bufp->chgBit(oldp+1322,(((IData)(vlSelfRef.ysyxSoCFull__DOT___bitrev_miso) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) 
                                | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                     & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                     ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata
                                     : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                   >> 0x1fU)))));
    bufp->chgBit(oldp+1323,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                              ? ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                                 & (IData)(vlSelfRef.clock))
                              : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)))));
    bufp->chgBit(oldp+1324,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                              ? ((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                                 | (IData)(vlSelfRef.reset))
                              : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n)))));
    bufp->chgBit(oldp+1325,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->chgSData(oldp+1326,(vlSelfRef.ysyxSoCFull__DOT___dq_wire),16);
    bufp->chgBit(oldp+1327,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->chgIData(oldp+1328,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->chgBit(oldp+1329,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access)
                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_ack_o)
                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o))));
    bufp->chgCData(oldp+1330,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp)
                                 : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))),2);
    bufp->chgBit(oldp+1331,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0))));
    bufp->chgIData(oldp+1332,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                 ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                      ? ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                      : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                 : 0U) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                   ? 
                                                  (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                        >> 0x18U)
                                                        : 0U)
                                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                     << 0x18U) 
                                                    | (0xff0000U 
                                                       & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                             ? 
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                             [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                             >> 0x10U)
                                                             : 0U)
                                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                          << 0x10U))) 
                                                   | ((0xff00U 
                                                       & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                             ? 
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                             [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                             >> 8U)
                                                             : 0U)
                                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                             ? 
                                                            ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                              ? 
                                                             vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                             [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
                                                              : 0U)
                                                             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))))
                                                   : 0U)))
                                 : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                          [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]
                                           : 0U))),32);
    bufp->chgBit(oldp+1333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->chgIData(oldp+1334,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_5)
                                ? 0U : vlSelfRef.io_dmem_wdata_debug)),32);
    bufp->chgIData(oldp+1335,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_5)
                                         ? 0U : vlSelfRef.io_dmem_wdata_debug))),32);
    bufp->chgCData(oldp+1336,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                ? 2U : (IData)(vlSelfRef.io_lsu_memory_ar_size))),3);
    bufp->chgIData(oldp+1337,(((IData)(vlSelfRef.io_jump_mispredict_debug)
                                ? 0x4033U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)),32);
    __Vtemp_17[0U] = (IData)((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                >> 0xcU))) 
                               << 0x2cU) | (QData)((IData)(vlSelfRef.io_idu_rs1_data_debug))));
    __Vtemp_17[1U] = (IData)(((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                 >> 0xcU))) 
                                << 0x2cU) | (QData)((IData)(vlSelfRef.io_idu_rs1_data_debug))) 
                              >> 0x20U));
    __Vtemp_17[2U] = (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                   >> 0x1fU))) << 0xcU) 
                      | ((0x800U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                    << 4U)) | ((0x7e0U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                     >> 7U)))));
    __Vtemp_17[3U] = (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                   >> 0x1fU))) << 0x14U) 
                      | ((0xff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst) 
                         | ((0x800U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                     >> 0x14U)))));
    bufp->chgIData(oldp+1338,((((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                              (((0x13U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                | ((0x33U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                   | ((0x23U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                      | (3U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))))
                                                                ? 0U
                                                                : 
                                                               ((0x63U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                 ? 2U
                                                                 : 
                                                                ((0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                  ? 3U
                                                                  : 
                                                                 ((0x67U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                  & ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                     | (0x37U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U)))
                                 ? 0U : (__Vtemp_17[
                                         (((IData)(0x1fU) 
                                           + (0x7fU 
                                              & VL_SHIFTL_III(7,7,32, 
                                                              (((0x13U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                | ((0x33U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                   | ((0x23U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                      | (3U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))))
                                                                ? 0U
                                                                : 
                                                               ((0x63U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                 ? 2U
                                                                 : 
                                                                ((0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                  ? 3U
                                                                  : 
                                                                 ((0x67U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                  & ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                     | (0x37U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(7,7,32, 
                                                             (((0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                               | ((0x33U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                  | ((0x23U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                     | (3U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))))
                                                               ? 0U
                                                               : 
                                                              ((0x63U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                ? 2U
                                                                : 
                                                               ((0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                 ? 3U
                                                                 : 
                                                                ((0x67U 
                                                                  != 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                 & ((0x17U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                    | (0x37U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U))))) 
                               | (__Vtemp_17[(3U & 
                                              (VL_SHIFTL_III(7,7,32, 
                                                             (((0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                               | ((0x33U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                  | ((0x23U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                     | (3U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))))
                                                               ? 0U
                                                               : 
                                                              ((0x63U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                ? 2U
                                                                : 
                                                               ((0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                 ? 3U
                                                                 : 
                                                                ((0x67U 
                                                                  != 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                 & ((0x17U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                    | (0x37U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U) 
                                               >> 5U))] 
                                  >> (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                            (((0x13U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                              | ((0x33U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                 | ((0x23U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                    | (3U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))))
                                                              ? 0U
                                                              : 
                                                             ((0x63U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                               ? 2U
                                                               : 
                                                              ((0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                ? 3U
                                                                : 
                                                               ((0x67U 
                                                                 != 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                & ((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                   | (0x37U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U))))),32);
    __Vtemp_19[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_pc;
    __Vtemp_19[1U] = (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                   >> 0x1fU))) << 0xcU) 
                      | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                         >> 0x14U));
    __Vtemp_19[2U] = (IData)((((QData)((IData)(vlSelfRef.io_idu_rs2_data_debug)) 
                               << 0x20U) | (QData)((IData)(
                                                           (((- (IData)(
                                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                                         >> 0x1fU))) 
                                                             << 0xcU) 
                                                            | ((0xfe0U 
                                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                                   >> 0x14U)) 
                                                               | (0x1fU 
                                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                                     >> 7U))))))));
    __Vtemp_19[3U] = (IData)(((((QData)((IData)(vlSelfRef.io_idu_rs2_data_debug)) 
                                << 0x20U) | (QData)((IData)(
                                                            (((- (IData)(
                                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                                          >> 0x1fU))) 
                                                              << 0xcU) 
                                                             | ((0xfe0U 
                                                                 & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                                    >> 0x14U)) 
                                                                | (0x1fU 
                                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                                      >> 7U))))))) 
                              >> 0x20U));
    bufp->chgIData(oldp+1339,((((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                              ((0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                ? 1U
                                                                : 
                                                               ((0x33U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                 ? 3U
                                                                 : 
                                                                ((0x23U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                  ? 2U
                                                                  : 
                                                                 ((3U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                  | ((~ 
                                                                      ((0x63U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                       | (0x6fU 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))) 
                                                                     & (0x67U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U)))
                                 ? 0U : (__Vtemp_19[
                                         (((IData)(0x1fU) 
                                           + (0x7fU 
                                              & VL_SHIFTL_III(7,7,32, 
                                                              ((0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                ? 1U
                                                                : 
                                                               ((0x33U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                 ? 3U
                                                                 : 
                                                                ((0x23U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                  ? 2U
                                                                  : 
                                                                 ((3U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                  | ((~ 
                                                                      ((0x63U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                       | (0x6fU 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))) 
                                                                     & (0x67U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(7,7,32, 
                                                             ((0x13U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                               ? 1U
                                                               : 
                                                              ((0x33U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                ? 3U
                                                                : 
                                                               ((0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                 ? 2U
                                                                 : 
                                                                ((3U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                 | ((~ 
                                                                     ((0x63U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                      | (0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))) 
                                                                    & (0x67U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U))))) 
                               | (__Vtemp_19[(3U & 
                                              (VL_SHIFTL_III(7,7,32, 
                                                             ((0x13U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                               ? 1U
                                                               : 
                                                              ((0x33U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                ? 3U
                                                                : 
                                                               ((0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                 ? 2U
                                                                 : 
                                                                ((3U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                 | ((~ 
                                                                     ((0x63U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                      | (0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))) 
                                                                    & (0x67U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U) 
                                               >> 5U))] 
                                  >> (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                            ((0x13U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                              ? 1U
                                                              : 
                                                             ((0x33U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                               ? 3U
                                                               : 
                                                              ((0x23U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                ? 2U
                                                                : 
                                                               ((3U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                | ((~ 
                                                                    ((0x63U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                     | (0x6fU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))) 
                                                                   & (0x67U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U))))),32);
    __Vtemp_24[0U] = (((- (IData)((1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data 
                                         >> 7U)))) 
                       << 8U) | (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data));
    __Vtemp_24[1U] = (((- (IData)((1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data 
                                         >> 0xfU)))) 
                       << 0x10U) | (0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data));
    __Vtemp_24[2U] = (IData)((QData)((IData)(vlSelfRef.io_dmem_rdata_debug)));
    __Vtemp_24[3U] = (IData)(((QData)((IData)(vlSelfRef.io_dmem_rdata_debug)) 
                              >> 0x20U));
    __Vtemp_24[4U] = (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data);
    __Vtemp_24[5U] = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data);
    __Vtemp_24[6U] = 0U;
    __Vtemp_24[7U] = 0U;
    bufp->chgIData(oldp+1340,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_3) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_4))
                                ? (((0U == (0x1fU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control), 5U)))
                                     ? 0U : (__Vtemp_24[
                                             (((IData)(0x1fU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control), 5U))))) 
                                   | (__Vtemp_24[(7U 
                                                  & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control), 5U) 
                                                     >> 5U))] 
                                      >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control), 5U))))
                                : vlSelfRef.io_dmem_rdata_debug)),32);
    bufp->chgBit(oldp+1341,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->chgBit(oldp+1342,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                             & (IData)(vlSelfRef.clock))));
    bufp->chgBit(oldp+1343,(((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                             | (IData)(vlSelfRef.reset))));
    bufp->chgBit(oldp+1344,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgCData(oldp+1345,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready))
                                ? (0x20U | ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)) 
                                            << 4U))
                                : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready))
                                    ? 0x10U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w) 
                                                << 5U) 
                                               | (((0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->chgBit(oldp+1346,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->chgBit(oldp+1347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->chgBit(oldp+1348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->chgSData(oldp+1349,(((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])),11);
    bufp->chgCData(oldp+1350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->chgBit(oldp+1351,(vlSelfRef.ysyxSoCFull__DOT___bitrev_miso));
    bufp->chgBit(oldp+1352,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) 
                                   | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata
                                        : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->chgIData(oldp+1353,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->chgIData(oldp+1354,(((0xfffffeU & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->chgSData(oldp+1355,(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__masked_dq),16);
}

void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_cleanup\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
