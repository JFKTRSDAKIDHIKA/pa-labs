// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull___024root.h"

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static__TOP(VysyxSoCFull___024root* vlSelf);
VL_ATTR_COLD void VysyxSoCFull___024root____Vm_traceActivitySetAll(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull___024root___eval_static__TOP(vlSelf);
    VysyxSoCFull___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_spi_sck__0 
        = vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__flash__DOT__reset__0 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__bitrev__DOT__inactive__0 
        = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__inactive;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static__TOP(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static__TOP\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial__TOP(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_initial\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial__TOP(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_initial__TOP\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_inst_debug = 0U;
    vlSelfRef.io_ifu_state_debug = 0U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_final(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_final\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VysyxSoCFull___024root___eval_phase__stl(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_settle(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_settle\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ysyxSoCFull.v", 5898, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VysyxSoCFull___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VysyxSoCFull___024root___stl_sequent__TOP__0(vlSelf);
        VysyxSoCFull___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__ebreakHandler__DOT__simulation_exit_TOP();
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__get_register_values_TOP(VlUnpacked<IData/*31:0*/, 16> rf);
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hf7cf545c_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_he0576c59_0;
extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h126f45c6_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h3750983d_0;
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
extern const VlUnpacked<CData/*0:0*/, 512> VysyxSoCFull__ConstPool__TABLE_h11051989_0;
extern const VlUnpacked<CData/*1:0*/, 512> VysyxSoCFull__ConstPool__TABLE_hd74293cb_0;

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___stl_sequent__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_24;
    // Body
    if (VL_UNLIKELY(((0x100073U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)))) {
        VL_WRITEF_NX("EBREAK: Simulation exiting...\n",0);
        Verilated::runFlushCallbacks();
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__ebreakHandler__DOT__simulation_exit_TOP();
    }
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__get_register_values_TOP(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf);
    vlSelfRef.io_wbu_state_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state;
    vlSelfRef.io_lsu_state_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state;
    vlSelfRef.io_lsu_reg_inst_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst;
    vlSelfRef.io_lsu_reg_dmem_addr_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr;
    vlSelfRef.io_wbu_reg_dmem_rdata_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_dmem_rdata;
    vlSelfRef.io_wbu_reg_inst_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst;
    vlSelfRef.io_wbu_reg_pc_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_pc;
    vlSelfRef.io_lsu_reg_pc_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_pc;
    vlSelfRef.io_Arbiter_state_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state;
    vlSelfRef.io_icache_state_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state;
    vlSelfRef.io_idu_state_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state;
    vlSelfRef.io_exu_state_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___singleReadAddr_T 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___GEN_4 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___GEN_5 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___GEN_6 
        = (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2 
        = (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_6 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_13 
        = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = (0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w 
        = (4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w 
        = (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w 
        = (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelfRef.io_pc_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg;
    vlSelfRef.io_perf_jump_mispredict_count = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__perf_jump_mispredict_count;
    vlSelfRef.io_icache_miss_count = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icacheMissCounter;
    vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__write_mask 
        = ((((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))
              ? 0U : 0xffU) << 8U) | ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))
                                       ? 0U : 0xffU));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_length 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_length_code))
            ? 1U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_length_code))
                     ? 2U : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_length_code))
                              ? 4U : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_length_code))
                                       ? 8U : 1U))));
    vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__cas_latency 
        = vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__cas_latency_code;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2 
        = (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3 
        = (1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4 
        = (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelfRef.__Vtableidx2 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_hf7cf545c_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.__Vtableidx5 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_he0576c59_0
        [vlSelfRef.__Vtableidx5];
    vlSelfRef.__Vtableidx8 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h126f45c6_0
        [vlSelfRef.__Vtableidx8][0U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h126f45c6_0
        [vlSelfRef.__Vtableidx8][1U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h126f45c6_0
        [vlSelfRef.__Vtableidx8][2U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((0x400U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_valid 
        = ((~ ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state)) 
               | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state)))) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((0x200U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck)));
    vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_1 
        = (IData)((4U == (0xcU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0 
        = ((0x80U & ((~ (IData)((0U != (0x7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))))) 
                     << 7U)) | (0x7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelfRef.ysyxSoCFull__DOT___dq_wire = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                ? 0U
                                                : 0xffffU) 
                                              & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q)) 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                      ? 0U
                                                      : 0xffffU)) 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                     ? 0U
                                                     : 0xffffU))) 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                 ? 0U
                                                 : 0xffffU)) 
                                            | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__dq_en)
                                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__dq_out)
                                                  : 0U) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__dq_en)
                                                    ? 0xffffU
                                                    : 0U)) 
                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__dq_en)
                                                   ? 0xffffU
                                                   : 0U)));
    vlSelfRef.__Vtableidx1 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h3750983d_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss = (0xffU 
                                                & (~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                                                    & ((- (IData)(
                                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                      >> 0xdU)))) 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                         >> 0xdU)))))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_2 
        = (IData)((0U == (0xcU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bid 
        = (0xfU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_valid 
        = ((~ ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)) 
               | ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)) 
                  | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state))))) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_2 
        = ((0x67U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
           | (0x6fU == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_3 
        = ((0x13U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
           | ((0x33U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
              | ((0x17U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
                 | (0x37U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_op_T_51 
        = (0x1fU & ((0x33U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst))
                     ? ((0x27U >= (0x3fU & ((IData)(5U) 
                                            * (7U & 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                >> 0xcU)))))
                         ? (IData)(((((QData)((IData)(
                                                      (0x868U 
                                                       | (0x20U 
                                                          != 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                           >> 0x19U))))) 
                                      << 0x19U) | (QData)((IData)(
                                                                  (0x4314e0U 
                                                                   | (0x20U 
                                                                      == 
                                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                                       >> 0x19U)))))) 
                                    >> (0x3fU & ((IData)(5U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                     >> 0xcU))))))
                         : 0U) : ((0x13U == (0x7fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst))
                                   ? ((0x27U >= (0x3fU 
                                                 & ((IData)(5U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                        >> 0xcU)))))
                                       ? (IData)(((0x10d0000000ULL 
                                                   | (QData)((IData)(
                                                                     (0x4314e0U 
                                                                      | ((0x20U 
                                                                          != 
                                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                                           >> 0x19U)) 
                                                                         << 0x19U))))) 
                                                  >> 
                                                  (0x3fU 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                          >> 0xcU))))))
                                       : 0U) : (((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
                                                 | ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
                                                    | ((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
                                                       | (0x37U 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)))))
                                                 ? 0U
                                                 : 0xfU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable 
        = (IData)((0x100fU == (0x707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_5 
        = ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
           | (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_2 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
           | (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_1)) 
                              << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_1))));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1)) 
                                << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1)))) 
                      << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_1)) 
                                             << 0x1aU) 
                                            | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_1))) 
                                           >> 0x20U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1)) 
                                << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1)))) 
                      >> 0xcU) | ((IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1)) 
                                             << 0x1aU) 
                                            | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1))) 
                                           >> 0x20U)) 
                                  << 0x14U));
    __Vtemp_1[3U] = ((IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1)) 
                                << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1))) 
                              >> 0x20U)) >> 0xcU);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hits_1 
        = ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_1) 
               << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_1) 
                         << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_1) 
                                     << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_1))) 
            >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)) 
           & (((0x67U >= (0x7fU & ((IData)(0x1aU) * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))
                ? (0x3ffffffU & (((0U == (0x1fU & ((IData)(0x1aU) 
                                                   * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))
                                   ? 0U : (__Vtemp_1[
                                           (((IData)(0x19U) 
                                             + (0x7fU 
                                                & ((IData)(0x1aU) 
                                                   * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x1aU) 
                                                     * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))))) 
                                 | (__Vtemp_1[(3U & 
                                               (((IData)(0x1aU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)) 
                                                >> 5U))] 
                                    >> (0x1fU & ((IData)(0x1aU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))))
                : 0U) == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_tag));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_lsu 
        = (((0x63U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst)) 
            | (0x23U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst)))
            ? 0U : (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst 
                             >> 7U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_6 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_rs2_data 
           << (0x18U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                        << 3U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_1_2 
        = (IData)((0x73U == (0x707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_exu 
        = (((0x63U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
            | (0x23U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)))
            ? 0U : (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                             >> 7U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_16 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast 
        = (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr] 
                 >> 4U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0 
        = (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr] 
                 >> 5U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control 
        = ((5U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst 
                         >> 0xcU))) ? 5U : ((1U == 
                                             (7U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst 
                                               >> 0xcU)))
                                             ? 1U : 
                                            ((4U == 
                                              (7U & 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst 
                                                >> 0xcU)))
                                              ? 4U : 
                                             ((0U == 
                                               (7U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst 
                                                   >> 0xcU)))
                                               ? 0U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst 
                                                       >> 0xcU))) 
                                                  << 1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type 
        = (((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                    >> 0x1cU)) & (0x10001000U > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr))
            ? 0U : (((0xeffffffU < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr) 
                     & (0x10000000U > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr))
                     ? 1U : (((0x2fffffffU < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr) 
                              & (0x40000000U > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr))
                              ? 2U : (((0x10000fffU 
                                        < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr) 
                                       & (0x10002000U 
                                          > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr))
                                       ? 3U : (((0x9fffffffU 
                                                 < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr) 
                                                & (3U 
                                                   != 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                    >> 0x1eU)))
                                                ? 5U
                                                : 6U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM 
        = ((0x9fffffffU < (0xfffffff0U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc)) 
           & (3U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc 
                     >> 0x1eU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_13 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_7 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
           | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           | (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))
               ? (3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst))
               : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))
                   ? (3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst))
                   : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                      & (3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_ready 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_valid));
    vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_7 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
               >> 1U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0xffU & ((0x800U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                     ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0) 
                        - ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U)))) : ((0x200U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT__masked_dq 
        = ((((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))
              ? 0U : (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT___dq_wire) 
                               >> 8U))) << 8U) | ((1U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT___dq_wire))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset = 
        (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss));
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__inactive 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss) 
                 >> 7U));
    vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_3 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_2) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_6 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
               >> 1U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_2));
    vlSelfRef.externalPins_uart_tx = (IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                               >> 4U) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__io_in_ready_0 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_valid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 5U)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len = 0U;
    }
    vlSelfRef.io_wb_wen_debug = (((0x73U == (0x7fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
                                  | ((0x67U == (0x7fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
                                     | ((0x6fU == (0x7fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
                                        | ((3U == (0x7fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_3))))) 
                                 & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_2) {
        vlSelfRef.io_wb_sel_debug = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel = 1U;
    } else if ((0x73U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst))) {
        vlSelfRef.io_wb_sel_debug = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel = 4U;
    } else if ((0x63U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst))) {
        vlSelfRef.io_wb_sel_debug = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel = 0U;
    } else if ((3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst))) {
        vlSelfRef.io_wb_sel_debug = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel = 3U;
    } else {
        vlSelfRef.io_wb_sel_debug = (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_3), 1U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_3) 
               << 1U);
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op 
        = (((0x63U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
            | ((0x67U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
               | (0x6fU == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst))))
            ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_op_T_51));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csr_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrw) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrs));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_0_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w) 
           & (4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
    __Vtemp_3[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_3;
    __Vtemp_3[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_3;
    __Vtemp_3[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_3)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_3))));
    __Vtemp_3[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_3)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_3))) 
                             >> 0x20U));
    __Vtemp_5[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_2;
    __Vtemp_5[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_2;
    __Vtemp_5[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_2)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_2))));
    __Vtemp_5[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_2)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_2))) 
                             >> 0x20U));
    __Vtemp_7[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_1;
    __Vtemp_7[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_1;
    __Vtemp_7[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_1)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_1))));
    __Vtemp_7[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_1)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_1))) 
                             >> 0x20U));
    __Vtemp_8[1U] = (IData)((((QData)((IData)((((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                 ? 0U
                                                 : 
                                                (__Vtemp_3[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0x7fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                               | (__Vtemp_3[
                                                  (3U 
                                                   & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))))) 
                              << 0x20U) | (QData)((IData)(
                                                          (((0U 
                                                             == 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                             ? 0U
                                                             : 
                                                            (__Vtemp_5[
                                                             (((IData)(0x1fU) 
                                                               + 
                                                               (0x7fU 
                                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                              >> 5U)] 
                                                             << 
                                                             ((IData)(0x20U) 
                                                              - 
                                                              (0x1fU 
                                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                           | (__Vtemp_5[
                                                              (3U 
                                                               & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                                  >> 5U))] 
                                                              >> 
                                                              (0x1fU 
                                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))))));
    __Vtemp_8[2U] = (IData)(((((QData)((IData)((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp_3[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                | (__Vtemp_3[
                                                   (3U 
                                                    & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                              ? 0U
                                                              : 
                                                             (__Vtemp_5[
                                                              (((IData)(0x1fU) 
                                                                + 
                                                                (0x7fU 
                                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                               >> 5U)] 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                            | (__Vtemp_5[
                                                               (3U 
                                                                & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                                   >> 5U))] 
                                                               >> 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))))) 
                             >> 0x20U));
    __Vtemp_10[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_0;
    __Vtemp_10[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_0;
    __Vtemp_10[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_0)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_0))));
    __Vtemp_10[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_0))) 
                              >> 0x20U));
    __Vtemp_13[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_3;
    __Vtemp_13[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_3;
    __Vtemp_13[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_3)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_3))));
    __Vtemp_13[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_3)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_3))) 
                              >> 0x20U));
    __Vtemp_15[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_2;
    __Vtemp_15[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_2;
    __Vtemp_15[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_2)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_2))));
    __Vtemp_15[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_2)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_2))) 
                              >> 0x20U));
    __Vtemp_17[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_1;
    __Vtemp_17[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_1;
    __Vtemp_17[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_1)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_1))));
    __Vtemp_17[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_1)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_1))) 
                              >> 0x20U));
    __Vtemp_18[1U] = (IData)((((QData)((IData)((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp_13[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                | (__Vtemp_13[
                                                   (3U 
                                                    & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                              ? 0U
                                                              : 
                                                             (__Vtemp_15[
                                                              (((IData)(0x1fU) 
                                                                + 
                                                                (0x7fU 
                                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                               >> 5U)] 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                            | (__Vtemp_15[
                                                               (3U 
                                                                & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                                   >> 5U))] 
                                                               >> 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))))));
    __Vtemp_18[2U] = (IData)(((((QData)((IData)((((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                   ? 0U
                                                   : 
                                                  (__Vtemp_13[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0x7fU 
                                                      & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                 | (__Vtemp_13[
                                                    (3U 
                                                     & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((0U 
                                                               == 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                               ? 0U
                                                               : 
                                                              (__Vtemp_15[
                                                               (((IData)(0x1fU) 
                                                                 + 
                                                                 (0x7fU 
                                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                                >> 5U)] 
                                                               << 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                             | (__Vtemp_15[
                                                                (3U 
                                                                 & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))))) 
                              >> 0x20U));
    __Vtemp_20[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_0;
    __Vtemp_20[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_0;
    __Vtemp_20[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_0)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_0))));
    __Vtemp_20[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_0))) 
                              >> 0x20U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hits_1) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[0U] 
            = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                 ? 0U : (__Vtemp_10[(((IData)(0x1fU) 
                                      + (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
               | (__Vtemp_10[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[1U] 
            = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                 ? 0U : (__Vtemp_7[(((IData)(0x1fU) 
                                     + (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
               | (__Vtemp_7[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[2U] 
            = __Vtemp_8[1U];
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[3U] 
            = __Vtemp_8[2U];
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[0U] 
            = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                 ? 0U : (__Vtemp_20[(((IData)(0x1fU) 
                                      + (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
               | (__Vtemp_20[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[1U] 
            = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                 ? 0U : (__Vtemp_17[(((IData)(0x1fU) 
                                      + (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
               | (__Vtemp_17[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[2U] 
            = __Vtemp_18[1U];
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[3U] 
            = __Vtemp_18[2U];
    }
    __Vtemp_22[0U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_0)) 
                               << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_0))));
    __Vtemp_22[1U] = (((IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0)) 
                                 << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0)))) 
                       << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_0)) 
                                              << 0x1aU) 
                                             | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_0))) 
                                            >> 0x20U)));
    __Vtemp_22[2U] = (((IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0)) 
                                 << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0)))) 
                       >> 0xcU) | ((IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0)) 
                                              << 0x1aU) 
                                             | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0))) 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp_22[3U] = ((IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0)) 
                                 << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0))) 
                               >> 0x20U)) >> 0xcU);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit 
        = (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_0) 
                << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_0) 
                          << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_0) 
                                      << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_0))) 
             >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)) 
            & (((0x67U >= (0x7fU & ((IData)(0x1aU) 
                                    * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))
                 ? (0x3ffffffU & (((0U == (0x1fU & 
                                           ((IData)(0x1aU) 
                                            * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))
                                    ? 0U : (__Vtemp_22[
                                            (((IData)(0x19U) 
                                              + (0x7fU 
                                                 & ((IData)(0x1aU) 
                                                    * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1aU) 
                                                      * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))))) 
                                  | (__Vtemp_22[(3U 
                                                 & (((IData)(0x1aU) 
                                                     * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)) 
                                                    >> 5U))] 
                                     >> (0x1fU & ((IData)(0x1aU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))))
                 : 0U) == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_tag)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hits_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_lsu 
        = ((0U != (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                            >> 0xfU))) & ((0x1fU & 
                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                            >> 0xfU)) 
                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_lsu)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_lsu 
        = ((0U != (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                            >> 0x14U))) & ((0x1fU & 
                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                             >> 0x14U)) 
                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_lsu)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_mret 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_1_2) 
           & (0x302U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                         >> 0x14U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_1_2) 
           & (0U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                     >> 0x14U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_exu 
        = ((0U != (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                            >> 0xfU))) & ((0x1fU & 
                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                            >> 0xfU)) 
                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_exu)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_exu 
        = ((0U != (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                            >> 0x14U))) & ((0x1fU & 
                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                             >> 0x14U)) 
                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_exu)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_17 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_16));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_20 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_16) 
           | ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
              | (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_1 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0)) 
              & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
            ? (0xfU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                               >> 0x2dU))) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_2_0 
        = (1U & ((((((0x8000U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                                 << 0xfU)) | (0x4000U 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                                                 << 0xeU))) 
                    | ((0x2000U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                   << 0xdU)) | (0x1000U 
                                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                                                   << 0xcU)))) 
                   | (((0x800U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                  << 0xbU)) | (0x400U 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                                                  << 0xaU))) 
                      | ((0x200U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                    << 9U)) | (0x100U 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                                                  << 8U))))) 
                  | ((((0x80U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                 << 7U)) | (0x40U & 
                                            ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                                             << 6U))) 
                      | ((0x20U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                   << 5U)) | (0x10U 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                                                 << 4U)))) 
                     | (((8U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                << 3U)) | (4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                 << 2U))) 
                        | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                  << 1U)) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full))))))) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (0xfU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                               >> 0x2dU))) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_0_0 
        = (1U & ((((((0x8000U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                                 << 0xfU)) | (0x4000U 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                                                 << 0xeU))) 
                    | ((0x2000U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                                   << 0xdU)) | (0x1000U 
                                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                                                   << 0xcU)))) 
                   | (((0x800U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                                  << 0xbU)) | (0x400U 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                                                  << 0xaU))) 
                      | ((0x200U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                                    << 9U)) | (0x100U 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                                                  << 8U))))) 
                  | ((((0x80U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                                 << 7U)) | (0x40U & 
                                            ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                                             << 6U))) 
                      | ((0x20U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                                   << 5U)) | (0x10U 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                                                 << 4U)))) 
                     | (((8U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                                << 3U)) | (4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                                                 << 2U))) 
                        | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                                  << 1U)) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full))))))) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__base_mask 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
            ? 1U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                     ? 3U : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                              ? 0xfU : 0U)));
    vlSelfRef.io_dmem_wdata_debug = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_6
                                      : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_6
                                          : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_6
                                              : ((0U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_rs2_data
                                                  : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_6))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_3 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type)) 
           | (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_4 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type)) 
           | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_14 
        = ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_13));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_7)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8 
        = ((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_7));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_15 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_6 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4) 
               | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)))) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_5 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)));
    vlSelfRef.io_wb_data_debug = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel))
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_result
                                   : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel))
                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_dmem_rdata
                                       : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel))
                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_result
                                           : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel))
                                               ? ((IData)(4U) 
                                                  + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_pc)
                                               : 0U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_instance_io_result 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1
            : ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                ? VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1, 
                                 (0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2))
                : ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                    ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                       >> (0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2))
                    : ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                        ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                           << (0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2))
                        : ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                            ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                               < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                            : ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                                ? VL_LTS_III(32, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                                : ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                                    ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                                       ^ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                                    : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                                        ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                                           | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                                        : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                                            ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                                            : ((1U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                                                ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                                                   - vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                                                    ? 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                                                    + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                                                    : 0U)))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall)
            ? 0x341U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                        >> 0x14U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_wen 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csr_read) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_mret)
            ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall)
                     ? 1U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrs)
                              ? 2U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrw))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csr_read) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_rs1_data;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr 
            = (0xfffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                         >> 0x14U));
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr 
            = (0xfffU & 0x305U);
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr 
            = (0xfffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_mret)
                          ? 0x341U : 0U));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_exception_flow 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_mret));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__load_use_hazard 
        = ((3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_exu) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_exu)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_20));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_20));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7 
        = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__base_mask) 
                    << (3U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___UnifiedMemoryController_io_dmem_rw_size 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_3) 
            | ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type)) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_4)))
            ? 2U : (((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control)) 
                     | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control)))
                     ? 1U : (2U & ((~ ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control)) 
                                       | (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control)))) 
                                   << 1U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid 
        = ((~ ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_15))) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_15) 
              & (0x23U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst))));
    __Vtemp_24[0U] = 0U;
    __Vtemp_24[1U] = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_14)
                       ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM)
                                ? (0xfffffff0U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc)
                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__singleReadAddr));
    __Vtemp_24[2U] = (IData)((QData)((IData)(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                               ? 0U
                                               : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr))));
    __Vtemp_24[3U] = (IData)(((QData)((IData)(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                                ? 0U
                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr))) 
                              >> 0x20U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr 
        = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state), 5U)))
             ? 0U : (__Vtemp_24[(((IData)(0x1fU) + 
                                  (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state), 5U))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state), 5U))))) 
           | (__Vtemp_24[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state), 5U) 
                                >> 5U))] >> (0x1fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state), 5U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN[0U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN[1U] 
        = (IData)((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                     | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN[2U] 
        = (IData)(((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                      | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus))) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))) 
                   >> 0x20U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN[3U] 
        = ((~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata) 
           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_0[0U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_0[1U] 
        = (IData)((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                     | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_0[2U] 
        = (IData)(((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                      | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec))) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))) 
                   >> 0x20U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_0[3U] 
        = ((~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata) 
           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_1[0U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_1[1U] 
        = (IData)((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                     | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_1[2U] 
        = (IData)(((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                      | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc))) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))) 
                   >> 0x20U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_1[3U] 
        = ((~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata) 
           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_2[0U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_2[1U] 
        = (IData)((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                     | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_2[2U] 
        = (IData)(((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                      | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause))) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))) 
                   >> 0x20U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_2[3U] 
        = ((~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata) 
           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_rdata 
        = ((0xf12U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr))
            ? 0x1700ac9U : ((0xf11U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr))
                             ? 0x79737978U : ((0x342U 
                                               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr))
                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause
                                               : ((0x341U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr))
                                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec
                                                    : 
                                                   ((0x300U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr))
                                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus
                                                     : 0U))))));
    vlSelfRef.io_idu_rs1_data_debug = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__load_use_hazard) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_lsu))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__lsuResultReg
                                        : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_exu)
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__exuResultReg
                                            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_lsu)
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__lsuResultReg
                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                                               [(0xfU 
                                                 & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                    >> 0xfU))])));
    vlSelfRef.io_idu_rs2_data_debug = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__load_use_hazard) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_lsu))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__lsuResultReg
                                        : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_exu)
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__exuResultReg
                                            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_lsu)
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__lsuResultReg
                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                                               [(0xfU 
                                                 & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                    >> 0x14U))])));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_out_valid 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit)
            : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_20)) 
               & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__io_in_ready_0 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_out_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT___frontend_io_out_ready 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state))
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__io_in_ready_0)
                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit))
            : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_20)) 
               & ((5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__io_in_ready_0))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_6 
        = (8U | ((((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__io_in_ready_0))
                     ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)) 
                   << 6U) | ((((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                               & ((3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst)) 
                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc 
                                     == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_pc)))
                               ? 3U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)) 
                             << 4U)) | ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__load_use_hazard)) 
                                               << 2U)) 
                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_out_valid)
                                            ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_23 
        = ((5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)));
    vlSelfRef.io_lsu_memory_ar_size = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                        ? 2U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___UnifiedMemoryController_io_dmem_rw_size));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_0 
        = (8U | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state) 
                  << 6U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid)
                             ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__io_in_ready_0 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid));
    vlSelfRef.io_lsu_is_ld_or_st_debug = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_7 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_redirect_target 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable)
            ? ((IData)(4U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc)
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_exception_flow)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_rdata
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_instance_io_result));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_lt 
        = VL_LTS_III(32, vlSelfRef.io_idu_rs1_data_debug, vlSelfRef.io_idu_rs2_data_debug);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_ltu 
        = (vlSelfRef.io_idu_rs1_data_debug < vlSelfRef.io_idu_rs2_data_debug);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_eq 
        = (vlSelfRef.io_idu_rs1_data_debug == vlSelfRef.io_idu_rs2_data_debug);
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_23) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_24 = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_tag;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_24 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_23)) 
              & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))
               ? (IData)(vlSelfRef.io_lsu_is_ld_or_st_debug)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_5 
        = ((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_7)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4) 
           | (((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
               & (3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_7)));
    vlSelfRef.io_jump_mispredict_debug = ((((0x6fU 
                                             == (0x7fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
                                            | ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
                                               | (((0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_branch_taken)) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_exception_flow)))) 
                                           & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_redirect_target 
                                              != ((IData)(4U) 
                                                  + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc))) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___io_out_bits_branch_taken_T_4 
        = (IData)(((0U == (0x7000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_eq)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_24)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_24)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_3 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_24)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_12 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_13 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_12 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_12 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid) 
               << 1U);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0 = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT____VdfgRegularize_h7011880f_0_3 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__redirect_pending) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_redirect_valid) 
              | (IData)(vlSelfRef.io_jump_mispredict_debug)));
    vlSelfRef.io_idu_branch_taken_debug = (1U & (((
                                                   ((0x80U 
                                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_ltu)) 
                                                        << 7U)) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_ltu) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_lt)) 
                                                          << 5U)) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_lt) 
                                                         << 4U))) 
                                                  | ((0xcU 
                                                      & ((- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___io_out_bits_branch_taken_T_4))) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_eq)) 
                                                            << 1U)) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___io_out_bits_branch_taken_T_4)))) 
                                                 >> 
                                                 (7U 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                     >> 0xcU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_4 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_5 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_7 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_8 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_2) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_10 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_3));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_11 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_3) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_20 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_12)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_21 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_13)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_16 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state) 
             << 6U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid)
                         ? 2U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid)) 
                       << 4U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_12) 
                                   << 2U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                              ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu)
                                                  ? 1U
                                                  : 2U)
                                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_12))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_aw_addr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
            ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)
                     ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN 
        = (((0U != ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                     ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)
                              ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                      >> 0x19U)))) 
            & (0x200ffffU > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_aw_addr)) 
           | ((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr 
                      >> 0x19U)) & (0x200ffffU > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_14 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_4)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_15 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_5)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_16 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_7)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_17 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_8)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_18 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_10)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_19 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_11)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? 1U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_5)
                     ? 1U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_14)
                              ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram)
                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_5)
                     ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_14)
                              ? 0U : (3U & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
        = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
                     ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 5U)) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize = 2U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr = 0U;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize = 2U;
        } else {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_5) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb = 0U;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata 
                    = vlSelfRef.io_dmem_wdata_debug;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb 
                    = (0xfU & ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                    : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                        : 1U))));
            }
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize 
                = vlSelfRef.io_lsu_memory_ar_size;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
        = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
                  ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
            ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0xdU)) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? 2U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                     ? 2U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)
                              ? 2U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___UnifiedMemoryController_io_dmem_rw_size))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
        = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                  ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_aw_addr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0xdU)) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr);
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
              & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                 | ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7)
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3)
                        : (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
              & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                  ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_17)) 
                     & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)))
                  : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_6) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_6) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_8_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr 
                       >> 0x1fU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
              & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                  ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_13)) 
                     & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)))
                  : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_5) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestARIO_T_11 
        = (0xfU & (0xaU ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                            ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr 
                                    >> 0x1cU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)) 
                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)) 
                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                             >> 0x1fU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11 
        = (0xfU & (0xaU ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                            ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                     ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)
                                              ? 0U : 
                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                              >> 0x1cU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_5) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                       >> 5U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xfU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                               >> 1U)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_8_0) 
           | (0U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_8_0) 
                      << 2U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                 ? 0U : (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr 
                                               >> 0x1cU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1 
        = (0U == ((4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestARIO_T_11) 
                         >> 1U)) | (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestARIO_T_11))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_0) 
           | (0U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_0) 
                      << 2U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                 ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                          ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                      >> 0x1cU))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1 
        = (0U == ((4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11) 
                         >> 1U)) | (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN 
        = ((((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count)) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last) 
                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count))) 
               << 0xfU) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last) 
                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count))) 
                           << 0xeU)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count))) 
                                         << 0xdU) | 
                                        ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count))) 
                                         << 0xcU))) 
            | ((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count)) 
                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                  & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count))) 
                 << 0xbU) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last) 
                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                              & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count))) 
                             << 0xaU)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count)) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last) 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count))) 
                                           << 9U) | 
                                          ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count)) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last) 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count))) 
                                           << 8U)))) 
           | (((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count)) 
                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                  & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count))) 
                 << 7U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last) 
                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count))) 
                           << 6U)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count)) 
                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last) 
                                            == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                        & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count))) 
                                       << 5U) | (((
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count)) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last) 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                  & (7U 
                                                     != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count))) 
                                                 << 4U))) 
              | ((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count)) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last) 
                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                    & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count))) 
                   << 3U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last) 
                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                              & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count))) 
                             << 2U)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count))) 
                                         << 1U) | (
                                                   ((0U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last) 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                   & (7U 
                                                      != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0 
        = ((((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count)) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last) 
                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count))) 
               << 0xfU) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last) 
                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count))) 
                           << 0xeU)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count))) 
                                         << 0xdU) | 
                                        ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count))) 
                                         << 0xcU))) 
            | ((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count)) 
                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                  & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count))) 
                 << 0xbU) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last) 
                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                              & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count))) 
                             << 0xaU)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count)) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last) 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count))) 
                                           << 9U) | 
                                          ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count)) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last) 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count))) 
                                           << 8U)))) 
           | (((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count)) 
                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                  & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count))) 
                 << 7U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last) 
                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count))) 
                           << 6U)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count)) 
                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last) 
                                            == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                        & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count))) 
                                       << 5U) | (((
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count)) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last) 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                  & (7U 
                                                     != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count))) 
                                                 << 4U))) 
              | ((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count)) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last) 
                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                    & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count))) 
                   << 3U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last) 
                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                              & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count))) 
                             << 2U)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count))) 
                                         << 1U) | (
                                                   ((0U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last) 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                   & (7U 
                                                      != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
        = (~ (((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                           | (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_1 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
        = (~ (((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                           | (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((6U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                         >> 0x1bU)) | (1U & (~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                >> 0x18U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((6U & (4U ^ (0x1eU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 0x1bU)))) 
                  | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                           >> 0x18U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((2U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                          >> 0x1cU)) | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & (4U ^ (0x1eU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                            >> 0x1bU)))) 
                      | (1U & (~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                  >> 0x18U))))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                       >> 0x1cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((6U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 0x1bU)) | (1U & (~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x18U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((2U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                          >> 0x1cU)) | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & (4U ^ (0x1eU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 0x1bU)))) 
                      | (1U & (~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                  >> 0x18U))))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((0U == ((6U & (4U ^ (0x1eU & 
                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 0x1bU)))) 
                               | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                        >> 0x18U)))) 
                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_2_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & ((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & ((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_0_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q) 
            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_0_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb)
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(
                                                                                (0x3fffffffU 
                                                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr), vlSelfRef.__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__3__rdata);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
            = vlSelfRef.__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__3__rdata;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready 
        = ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits)) 
                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                     >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w) 
            | (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h84ce0f54_3_0 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q;
    if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 1U)))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w)))) {
                    if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                          >> (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                    >> 0xaU))) & ((0x1fffU 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                                      >> 0xcU)) 
                                                  == 
                                                  vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                                  [
                                                  (3U 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                                      >> 0xaU))]))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 6U;
                    }
                }
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 7U;
            }
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 2U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w))) {
                if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                >> 0xaU))) & ((0x1fffU 
                                               & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                                  >> 0xcU)) 
                                              == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                              [(3U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                                   >> 0xaU))]))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 2U);
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 0U);
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r = 9U;
            } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w) {
                if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                >> 0xaU))) & ((0x1fffU 
                                               & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                                  >> 0xcU)) 
                                              == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                              [(3U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                                   >> 0xaU))]))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                                  >> (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                            >> 0xaU))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 8U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 3U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q) 
                       - (IData)(1U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & 0U);
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h84ce0f54_3_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata;
        vlSelfRef.__VdfgRegularize_hd87f99a1_0_69 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r;
        vlSelfRef.__VdfgRegularize_hd87f99a1_0_69 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) 
              | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
           & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_69) 
              >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
           & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_69) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_1)
                     ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                        >> 8U) : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                  >> 0x18U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)
            ? (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_69)
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
            ? 1U : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                     ? 1U : ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                              ? 1U : ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r)
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                     ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 0x18U) : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))
                     : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 8U) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = (0xffU & ((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                     ? ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                             ? (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                   << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                             << 6U)) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                     << 5U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U))) 
                                | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                     << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                             : 0U)) : ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                        ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                            ? ((0x80U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                               [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access 
        = (0x30000000U <= (0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == ((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                             >> 0x19U)) | ((8U & ((~ 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0x1cU)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                >> 0xeU)) 
                                              | (3U 
                                                 & (1U 
                                                    ^ 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                     >> 0xcU))))))) 
           | (3U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                           >> 0x1cU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = (0U == ((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & (2U 
                                                   ^ 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0xcU)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = (0U == ((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x10U)) 
                                               << 2U)) 
                                             | (3U 
                                                & (1U 
                                                   ^ 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0xcU)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel 
        = (IData)(((0U == (0x30000000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = (0U == ((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0xcU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0xffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
                     & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_69))
                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata
                     : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_1) 
                         & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 8U) : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_4) 
                                       & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                       ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                          >> 0x10U)
                                       : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
                                           & (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_69) 
                                               >> 3U) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size))))
                                           ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                              >> 0x18U)
                                           : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_4) 
                                               & (2U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                               ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                  >> 0x10U)
                                               : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0xffU & ((IData)(7U) 
                                       + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_dat_i;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_sel_i;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_we_i;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i 
            = (0x1fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_adr_i));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_stb_i;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_cyc_i;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i 
            = (0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
              | (IData)(((0x20000000U == (0x30000000U 
                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
            ? 3U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                     ? 8U : (0xfU & ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                      ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                         >> 0x14U) : 
                                     ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                       ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                          >> 0x10U)
                                       : ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                           ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                              >> 0xcU)
                                           : ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                               ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 8U)
                                               : ((6U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                     >> 4U)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                       >> 4U)
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                         >> 0x14U)
                                                         : 
                                                        ((0xdU 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                          >> 0x10U)
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                           >> 0x1cU)
                                                           : 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                           >> 0x18U)))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                         >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
            : ((1U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                             >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                : ((2U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                                 >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                    : ((3U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                                     >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                        : ((4U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                                         >> 2U))) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                                             >> 2U)))
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                                                 >> 2U)))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr) 
               << 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    vlSelfRef.__Vtableidx6 = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re) 
                                 << 8U) | ((0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                           << 7U)) 
                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) 
                                   << 6U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                                             << 5U))) 
                              | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel)
                                    ? 1U : 0U) << 3U) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_done) 
                                     << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    if (VysyxSoCFull__ConstPool__TABLE_h11051989_0[vlSelfRef.__Vtableidx6]) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
            = VysyxSoCFull__ConstPool__TABLE_hd74293cb_0
            [vlSelfRef.__Vtableidx6];
    }
    if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
                = (0xfU & 0xfU);
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
                = (0xfU & (1U & (0x35U >> (7U & ((IData)(7U) 
                                                 - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_counter))))));
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
                = (0xfU & 0U);
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
                = (0xfU & 0U);
        }
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                        ? 0xeU : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                   ? 0xbU : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                              ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x14U)
                                              : ((3U 
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
                                                      : 0U)))))))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0 
        = ((~ (IData)(vlSelfRef.reset)) & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o
             : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                            ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                << 0x18U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                              << 0x10U) 
                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                 << 8U) 
                                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                            : 0U) : 0U) | (((0U == 
                                             (3U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0x1cU)))
                                             ? (((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [3U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U)) 
                                                | ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [0U]))
                                             : 0U) 
                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                : 0U) 
                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                   : 0U) 
                                                 | ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                         >> 0x1cU)))
                                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                     : 0U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready 
        = (1U & (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_ack_o)
                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                    | (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                       | ((IData)(((0U == (0x30000000U 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                   & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                           : (0x16U 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))))) 
                          | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                             | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready)) 
                                   & (0x20000000U == 
                                      (0x30000000U 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
                = (0x16U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 
        = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h456d727f_0_0 
        = (((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready)) 
           | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel 
        = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
              & (0xcU == (0x1cU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))) 
             << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                        & (8U == (0x1cU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))) 
                       << 2U)) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                    & (4U == (0x1cU 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))) 
                                   << 1U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                             & (0U 
                                                == 
                                                (0x1cU 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h456d727f_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h456d727f_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel) 
           & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state) 
                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
            << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid) 
            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 
        = (((0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                                 << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 
        = (((0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                     << 2U)) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                                << 1U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready 
        = (((0x10U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                      << 2U)) | ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1)) 
                                 | (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                          | ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1)) 
                                             | (3U 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask) 
              << 3U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1 
        = (((0x10U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                      << 2U)) | ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2)) 
                                 | (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                          | ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                                             | (3U 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1) 
              << 3U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_r_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready 
        = (((4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid)) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask) 
              << 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_memory_r_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_r_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_2) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_r_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys 
        = (3U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready) 
                     >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_29 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_r_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? ((0x200bff8U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)
                : ((0x200bffcU == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr)
                    ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                               >> 0x20U)) : 0U)) : 
           (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
              ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                   ? ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata
                       : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                   : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                              : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                        ? (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
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
                                        : 0U))) : 0U) 
            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
               [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]
                : 0U)));
    vlSelfRef.io_dmem_rdata_debug = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                      ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_r_data);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)
             : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r)
                        : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id)
                                  : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                           ? 0U : 3U) : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
            ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp)
                 : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                           ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U) : 0U)) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bid)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0) 
            & ((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                     << 0xfU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                 << 0xeU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                               << 0xdU) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                 << 0xcU))) 
                  | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                       << 0xbU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                   << 0xaU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                 << 9U) 
                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                   << 8U)))) 
                 | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                       << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                 << 6U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                               << 4U))) 
                    | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                         << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                   << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last 
        = (1U & (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                      << 0xfU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                  << 0xeU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last) 
                                                  << 0xcU))) 
                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                        << 0xbU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                    << 0xaU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                                  << 9U) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last) 
                                                    << 8U)))) 
                  | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                        << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                  << 6U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last) 
                                                << 4U))) 
                     | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                          << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                    << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last))))) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)) 
           | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_5)
            ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_r_data);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_last 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_2) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_2_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data 
        = (vlSelfRef.io_dmem_rdata_debug >> (0x18U 
                                             & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                << 3U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_36 
        = (0x1000U | ((0xfc0000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state) 
                                     << 0x15U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state) 
                                                  << 0x12U))) 
                      | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_valid)
                             ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM)
                                 ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_last)
                                     ? 5U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state))
                                 : (4U | (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt))))
                             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                           << 9U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu)
                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid))
                                        : ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                                           & ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid)) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid)))))
                                       ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                                     << 6U)) | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_2) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_ready))
                                                   ? 3U
                                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)
                                                    : 2U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid) 
            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1 
        = (((4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                   << 1U)) | (((2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                                      << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1) 
              << 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1) 
                     >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid) 
            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                   ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                      >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                      ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                         >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))) 
              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bid)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
            ? (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                     | (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                             << 0x1eU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                          << 0x1cU)) 
                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                               << 0x1aU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                            << 0x18U))) 
                          | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                               << 0x16U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                            << 0x14U)) 
                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                 << 0x12U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                              << 0x10U)))) 
                         | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                               << 0xeU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                           << 0xcU)) 
                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                 << 0xaU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                             << 8U))) 
                            | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                 << 6U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                           << 4U)) 
                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                   << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0))))) 
                        >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid), 1U)))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready)));
    if (VL_UNLIKELY((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_6) 
                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)
                          ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_memory_r_valid) 
                             & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                    & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp)))) 
                                | (2U == ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                           ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp))))))
                          : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)))) 
                             & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)) 
                                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                                    & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp)))) 
                                | (2U == ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                           ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp))))))))))) {
        VL_WRITEF_NX("LSU memory access error...\n",0);
        Verilated::runFlushCallbacks();
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__ebreakHandler__DOT__simulation_exit_TOP();
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid) 
           & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h84ce0f54_3_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (0xf000000U == (0xfffe000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid)));
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_triggers__stl(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD bool VysyxSoCFull___024root___eval_phase__stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VysyxSoCFull___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VysyxSoCFull___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__ico\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__act\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge ysyxSoCFull.flash.reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge ysyxSoCFull.bitrev.inactive)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__nba(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__nba\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge ysyxSoCFull.flash.reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge ysyxSoCFull.bitrev.inactive)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root____Vm_traceActivitySetAll(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vm_traceActivitySetAll\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___ctor_var_reset(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->externalPins_gpio_out = VL_RAND_RESET_I(16);
    vlSelf->externalPins_gpio_in = VL_RAND_RESET_I(16);
    vlSelf->externalPins_gpio_seg_0 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_1 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_2 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_3 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_4 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_5 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_6 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_7 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->externalPins_ps2_data = VL_RAND_RESET_I(1);
    vlSelf->externalPins_vga_r = VL_RAND_RESET_I(8);
    vlSelf->externalPins_vga_g = VL_RAND_RESET_I(8);
    vlSelf->externalPins_vga_b = VL_RAND_RESET_I(8);
    vlSelf->externalPins_vga_hsync = VL_RAND_RESET_I(1);
    vlSelf->externalPins_vga_vsync = VL_RAND_RESET_I(1);
    vlSelf->externalPins_vga_valid = VL_RAND_RESET_I(1);
    vlSelf->externalPins_uart_rx = VL_RAND_RESET_I(1);
    vlSelf->externalPins_uart_tx = VL_RAND_RESET_I(1);
    vlSelf->io_wbu_state_debug = VL_RAND_RESET_I(2);
    vlSelf->io_pc_debug = VL_RAND_RESET_I(32);
    vlSelf->io_inst_debug = VL_RAND_RESET_I(32);
    vlSelf->io_ifu_state_debug = VL_RAND_RESET_I(3);
    vlSelf->io_lsu_state_debug = VL_RAND_RESET_I(3);
    vlSelf->io_lsu_is_ld_or_st_debug = VL_RAND_RESET_I(1);
    vlSelf->io_lsu_reg_inst_debug = VL_RAND_RESET_I(32);
    vlSelf->io_dmem_wdata_debug = VL_RAND_RESET_I(32);
    vlSelf->io_dmem_rdata_debug = VL_RAND_RESET_I(32);
    vlSelf->io_lsu_reg_dmem_addr_debug = VL_RAND_RESET_I(32);
    vlSelf->io_wb_wen_debug = VL_RAND_RESET_I(1);
    vlSelf->io_wb_sel_debug = VL_RAND_RESET_I(2);
    vlSelf->io_wbu_reg_dmem_rdata_debug = VL_RAND_RESET_I(32);
    vlSelf->io_wbu_reg_inst_debug = VL_RAND_RESET_I(32);
    vlSelf->io_wbu_reg_pc_debug = VL_RAND_RESET_I(32);
    vlSelf->io_lsu_reg_pc_debug = VL_RAND_RESET_I(32);
    vlSelf->io_Arbiter_state_debug = VL_RAND_RESET_I(2);
    vlSelf->io_wb_data_debug = VL_RAND_RESET_I(32);
    vlSelf->io_lsu_memory_ar_size = VL_RAND_RESET_I(3);
    vlSelf->io_icache_state_debug = VL_RAND_RESET_I(3);
    vlSelf->io_idu_state_debug = VL_RAND_RESET_I(2);
    vlSelf->io_jump_mispredict_debug = VL_RAND_RESET_I(1);
    vlSelf->io_exu_state_debug = VL_RAND_RESET_I(2);
    vlSelf->io_perf_jump_mispredict_count = VL_RAND_RESET_Q(64);
    vlSelf->io_icache_miss_count = VL_RAND_RESET_Q(64);
    vlSelf->io_idu_rs1_data_debug = VL_RAND_RESET_I(32);
    vlSelf->io_idu_rs2_data_debug = VL_RAND_RESET_I(32);
    vlSelf->io_idu_branch_taken_debug = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___bitrev_miso = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___asic_spi_sck = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___asic_spi_ss = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT___asic_spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___dq_wire = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestARIO_T_11 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0 = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_8_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready = VL_RAND_RESET_I(6);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1 = VL_RAND_RESET_I(6);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_r_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_r_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_aw_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_memory_r_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_exu = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_lsu = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_redirect_target = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT___frontend_io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__frontend__DOT__icache_frontend_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icacheMissCounter = VL_RAND_RESET_Q(64);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_tag = VL_RAND_RESET_I(26);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_redirect_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__redirect_pending = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_0 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_2 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_3 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_0 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_2 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_3 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_0 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_2 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_3 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_0 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_2 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_3 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_0 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_2 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_3 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_0 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_2 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_3 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_0 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_2 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_3 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_0 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_2 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_3 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hits_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__singleReadAddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_0 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_23 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_24 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25 = VL_RAND_RESET_I(26);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___singleReadAddr_T = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_36 = VL_RAND_RESET_I(24);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT____VdfgRegularize_h7011880f_0_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_0 = VL_RAND_RESET_I(26);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_1 = VL_RAND_RESET_I(26);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_0 = VL_RAND_RESET_I(26);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_1 = VL_RAND_RESET_I(26);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0 = VL_RAND_RESET_I(26);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1 = VL_RAND_RESET_I(26);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0 = VL_RAND_RESET_I(26);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1 = VL_RAND_RESET_I(26);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_exu = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_exu = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_lsu = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_lsu = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__load_use_hazard = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__exuResultReg = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__lsuResultReg = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_eq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_lt = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_ltu = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___io_out_bits_branch_taken_T_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__io_in_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_6 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_instance_io_result = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__perf_jump_mispredict_count = VL_RAND_RESET_Q(64);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrw = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrs = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_mret = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csr_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_exception_flow = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_op_T_51 = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__io_in_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_1_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN);
    VL_RAND_RESET_W(128, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_0);
    VL_RAND_RESET_W(128, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_1);
    VL_RAND_RESET_W(128, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___UnifiedMemoryController_io_dmem_rw_size = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_result = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__delayedData = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_6 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_7 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__base_mask = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_6 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__io_in_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_result = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_0 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_3 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_12 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_16 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = VL_RAND_RESET_I(10);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = VL_RAND_RESET_I(11);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_adr_i = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_dat_i = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_sel_i = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_we_i = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_stb_i = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_cyc_i = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wb_ack_o = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash_access = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = VL_RAND_RESET_I(14);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_counter = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = VL_RAND_RESET_I(24);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(11);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_0_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = VL_RAND_RESET_I(13);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = VL_RAND_RESET_I(17);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h456d727f_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_2_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 = VL_RAND_RESET_I(23);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 = VL_RAND_RESET_I(23);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h84ce0f54_3_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram = VL_RAND_RESET_Q(49);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram = VL_RAND_RESET_Q(49);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram = VL_RAND_RESET_Q(37);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__addr = VL_RAND_RESET_I(24);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__inactive = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__active_bank = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__active_row[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_length_code = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__cas_latency_code = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_length = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__cas_latency = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__masked_dq = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__write_mask = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__dq_out = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__dq_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__delay_counter = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__burst_counter = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT__current_col = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_6 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram_chip_0__DOT____VdfgRegularize_h49d81015_0_7 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_69 = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__3__rdata = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx5 = 0;
    vlSelf->__Vtableidx6 = 0;
    vlSelf->__Vtableidx8 = 0;
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = VL_RAND_RESET_I(17);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr = VL_RAND_RESET_I(24);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ysyxSoCFull__DOT___bitrev_miso = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_spi_sck__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__flash__DOT__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__bitrev__DOT__inactive__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
