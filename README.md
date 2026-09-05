# RV32E 顺序标量处理器核

用 Chisel 手写的 RV32E 顺序单发射标量处理器核，五级流水，带流水化指令缓存、数据前递、静态分支预测、机器模式异常与中断。挂在 ysyxSoC 上，经 NEMU 差分测试逐指令验证，能启动 RT-Thread。

复位向量 `0x30000000` 从 Flash 启动，二级 bootloader 把程序搬到 PSRAM 执行。仿真基于 Verilator，参考模型是 NEMU。

状态：RTL 冻结，功能验证通过，可 boot RT-Thread。前端完成，后端（28nm 物理设计）待做。

---

## 支持的指令集

- **RV32E**：32 位、16 个通用寄存器的基础整数指令集（算术、逻辑、移位、比较、分支、跳转、访存、LUI/AUIPC）。
- **Zicsr**：CSR 读写指令（csrrw / csrrs）。
- **fence.i**：取指屏障，触发 ICache 无效化。
- **系统指令**：ecall、mret、ebreak。

未实现：M（乘除）、A（原子）、浮点、压缩指令、MMU、Supervisor 模式。

---

## 流水线结构

<svg viewBox="0 0 960 420" xmlns="http://www.w3.org/2000/svg" font-family="-apple-system,Segoe UI,Roboto,sans-serif">
  <defs>
    <marker id="arr" markerWidth="9" markerHeight="9" refX="7" refY="3" orient="auto">
      <path d="M0,0 L7,3 L0,6 Z" fill="#475569"/>
    </marker>
    <marker id="arrb" markerWidth="9" markerHeight="9" refX="7" refY="3" orient="auto">
      <path d="M0,0 L7,3 L0,6 Z" fill="#b45309"/>
    </marker>
  </defs>

  <!-- pipeline stages -->
  <g>
    <rect x="20"  y="70" width="120" height="66" rx="8" fill="#eef2ff" stroke="#6366f1"/>
    <text x="80"  y="98"  text-anchor="middle" font-size="15" font-weight="600" fill="#312e81">IFU</text>
    <text x="80"  y="118" text-anchor="middle" font-size="11" fill="#4338ca">取指 / PC</text>

    <rect x="170" y="70" width="140" height="66" rx="8" fill="#eef2ff" stroke="#6366f1"/>
    <text x="240" y="94"  text-anchor="middle" font-size="15" font-weight="600" fill="#312e81">ICache</text>
    <text x="240" y="112" text-anchor="middle" font-size="10.5" fill="#4338ca">2 级流水 · 2 路组相联</text>
    <text x="240" y="126" text-anchor="middle" font-size="10.5" fill="#4338ca">4 组 × 16B · AXI 重填</text>

    <rect x="340" y="70" width="120" height="66" rx="8" fill="#ecfeff" stroke="#06b6d4"/>
    <text x="400" y="94"  text-anchor="middle" font-size="15" font-weight="600" fill="#155e75">IDU</text>
    <text x="400" y="112" text-anchor="middle" font-size="10.5" fill="#0e7490">译码 · 立即数</text>
    <text x="400" y="126" text-anchor="middle" font-size="10.5" fill="#0e7490">前递 · 分支判定</text>

    <rect x="490" y="70" width="120" height="66" rx="8" fill="#ecfeff" stroke="#06b6d4"/>
    <text x="550" y="94"  text-anchor="middle" font-size="15" font-weight="600" fill="#155e75">EXU</text>
    <text x="550" y="112" text-anchor="middle" font-size="10.5" fill="#0e7490">ALU · CSR</text>
    <text x="550" y="126" text-anchor="middle" font-size="10.5" fill="#0e7490">重定向判定</text>

    <rect x="640" y="70" width="120" height="66" rx="8" fill="#ecfeff" stroke="#06b6d4"/>
    <text x="700" y="94"  text-anchor="middle" font-size="15" font-weight="600" fill="#155e75">LSU</text>
    <text x="700" y="112" text-anchor="middle" font-size="10.5" fill="#0e7490">访存 FSM</text>
    <text x="700" y="126" text-anchor="middle" font-size="10.5" fill="#0e7490">AXI 读写</text>

    <rect x="790" y="70" width="120" height="66" rx="8" fill="#eef2ff" stroke="#6366f1"/>
    <text x="850" y="94"  text-anchor="middle" font-size="15" font-weight="600" fill="#312e81">WBU</text>
    <text x="850" y="112" text-anchor="middle" font-size="10.5" fill="#4338ca">写回选择</text>
    <text x="850" y="126" text-anchor="middle" font-size="10.5" fill="#4338ca">ebreak 处理</text>
  </g>

  <!-- forward arrows -->
  <line x1="140" y1="103" x2="168" y2="103" stroke="#475569" stroke-width="1.6" marker-end="url(#arr)"/>
  <line x1="310" y1="103" x2="338" y2="103" stroke="#475569" stroke-width="1.6" marker-end="url(#arr)"/>
  <line x1="460" y1="103" x2="488" y2="103" stroke="#475569" stroke-width="1.6" marker-end="url(#arr)"/>
  <line x1="610" y1="103" x2="638" y2="103" stroke="#475569" stroke-width="1.6" marker-end="url(#arr)"/>
  <line x1="760" y1="103" x2="788" y2="103" stroke="#475569" stroke-width="1.6" marker-end="url(#arr)"/>

  <!-- redirect feedback EXU -> IFU -->
  <path d="M550,70 L550,40 L80,40 L80,68" fill="none" stroke="#b45309" stroke-width="1.6" stroke-dasharray="5,4" marker-end="url(#arrb)"/>
  <text x="300" y="32" text-anchor="middle" font-size="11" fill="#b45309">redirect（分支/异常误预测冲刷）</text>

  <!-- register file -->
  <rect x="340" y="180" width="270" height="46" rx="8" fill="#f1f5f9" stroke="#94a3b8"/>
  <text x="475" y="200" text-anchor="middle" font-size="13" font-weight="600" fill="#334155">寄存器堆  16 × 32b</text>
  <text x="475" y="216" text-anchor="middle" font-size="10.5" fill="#64748b">DPI-C 导出供 difftest 比对</text>
  <line x1="400" y1="136" x2="400" y2="178" stroke="#475569" stroke-width="1.4" marker-end="url(#arr)"/>
  <line x1="560" y1="178" x2="560" y2="138" stroke="#475569" stroke-width="1.4" marker-end="url(#arr)"/>
  <!-- forwarding hint -->
  <path d="M700,136 L700,158 L620,158 L620,190 L612,190" fill="none" stroke="#0e7490" stroke-width="1.3" stroke-dasharray="4,3" marker-end="url(#arr)"/>
  <text x="672" y="152" font-size="10" fill="#0e7490">前递</text>

  <!-- memory system -->
  <rect x="200" y="280" width="560" height="60" rx="8" fill="#f0fdf4" stroke="#22c55e"/>
  <text x="480" y="304" text-anchor="middle" font-size="13" font-weight="600" fill="#166534">MemoryArbiter → Xbar</text>
  <text x="480" y="324" text-anchor="middle" font-size="11" fill="#15803d">CLINT（定时器/中断） · AXI4 主口 → ysyxSoC 外设总线（APB）</text>
  <!-- ICache & LSU down to mem -->
  <path d="M240,136 L240,260 L360,260 L360,278" fill="none" stroke="#475569" stroke-width="1.4" marker-end="url(#arr)"/>
  <path d="M700,136 L700,250 L600,250 L600,278" fill="none" stroke="#475569" stroke-width="1.4" marker-end="url(#arr)"/>
  <text x="250" y="252" font-size="10" fill="#64748b">取指 miss</text>
  <text x="612" y="244" font-size="10" fill="#64748b">load/store</text>

  <!-- peripherals -->
  <rect x="200" y="366" width="560" height="34" rx="8" fill="#fafafa" stroke="#cbd5e1"/>
  <text x="480" y="388" text-anchor="middle" font-size="10.5" fill="#475569">UART16550 · SPI · GPIO · PS2 · VGA · Flash · PSRAM · SDRAM</text>
  <line x1="480" y1="340" x2="480" y2="364" stroke="#475569" stroke-width="1.4" marker-end="url(#arr)"/>
</svg>

各级之间用 Chisel `Decoupled`（Valid/Ready）握手连接，是可背压的弹性流水线。

---

## 各级细节

**IFU（取指）**
维护 PC 寄存器，复位值 `0x30000000`。次地址逻辑 `next_pc = redirect_valid ? redirect_target : pc+4`，重定向优先。无内部状态机，只在下游 ready 时把 PC 递出。

**ICache（指令缓存，两级流水）**
- Frontend 级：解析地址成 index / tag / wordOffset，打一拍流水寄存器。
- Core 级：2 路组相联、4 组、每块 16B（4 字）。并行比对两路 tag + valid 得到命中；命中直接返回该字。
- 缺失重填由 6 状态 FSM 驱动（sIdle → sMemPrepare → sMemReq → sMemRead → sWaitGap → sUpdate）。落在 SDRAM 区间时用 AXI burst 一次读一个块（len = 块字数−1）；其他区间用单字读 + 间隔拍。
- `fence.i` 到来时清空全部 valid 位。带 miss 计数器。

**IDU（译码）**
译出 opcode/funct3/funct7，生成 I/S/B/U/J 五类立即数并符号扩展，读寄存器堆。在此做数据前递：从 EXU、LSU 结果两路前递（用 `RegNext` 打拍避免组合环），并检测 load-use 冒险。分支条件（beq/bne/blt/bge/bltu/bgeu）也在译码级算出 `branch_taken`。

**EXU（执行）**
3 状态 FSM（sIdle → sExecute → sDone）。ALU 按 opcode/funct3/funct7 选运算。此级例化 CSR 文件，处理 csrrw/csrrs/ecall/mret。控制流判定：jal、jalr、taken 分支、异常流，与预测的 `pc+4` 比较得出是否误预测，产生 `redirect_valid` 与重定向目标；`fence.i` 也在此触发。带分支误预测计数器。

**ALU**
32 位组合逻辑：add、sub、and、or、xor、slt、sltu、sll、srl、sra，以及传递操作数 A（LUI 用）。

**LSU（访存）**
5 状态 FSM（sIdle → sArbiterPrepare → sPrepare → sMemAccess → sDone）。经统一访存控制器处理字/半字/字节访问、符号/零扩展与写掩码。走 AXI4 读写通道，先向仲裁器申请再发起访问，捕获 SLVERR/DECERR 错误响应。load 结果向 IDU 前递。

**WBU（写回）**
3 状态 FSM。按指令类型选写回源：LUI/AUIPC/R/I 型 → ALU 结果，load → 内存数据，jal/jalr → PC+4，CSR → CSR 读值。分支和 store 不写回。内含 ebreak 处理：识别 `0x00100073` 经 DPI-C 通知仿真结束，同样处理 LSU 访存错误。

**CSR**
机器模式 CSR：mstatus、mtvec、mepc、mcause（可写），mvendorid、marchid（只读）。支持 RW/RS/RC 三种更新。`mvendorid = 0x79737978`（ASCII "ysyx"），`marchid = 24120009`（设计者学号），用于实测时确认芯片身份。

**内存系统**
MemoryArbiter 在取指与访存之间仲裁 AXI 请求；Xbar 把请求分发到 CLINT 与 SoC 外设总线。CLINT 提供定时器与中断，是 RT-Thread 调度的基础。

---

## 地址映射

| 区间 | 起始 | 终止 |
|:--|:--|:--|
| CLINT | `0x02000000` | `0x0200ffff` |
| SRAM | `0x0f000000` | `0x0fffffff` |
| UART | `0x10000000` | `0x10000fff` |
| SPI | `0x10001000` | `0x10001fff` |
| Flash（复位启动） | `0x30000000` | `0x3fffffff` |
| PSRAM | `0x80000000` | `0x9fffffff` |
| SDRAM | `0xa0000000` | `0xbfffffff` |

---

## IPC 优化历程

在保持 RV32E 小面积的前提下，逐步优化 IPC：

| 阶段 | 优化点 | IPC |
|:--:|:--|:--:|
| ① | 基线 | 0.009 |
| ② | — | 0.007 |
| ③ | — | 0.036 |
| ④ | — | 0.048 |
| ⑤ | 增大 I-Cache 容量 | 0.053 |
| ⑥ | 流水线 + 静态分支预测 | 0.099 |
| ⑦ | I-Cache 流水化 | 0.158 |

---

## 仓库结构

```text
.
├── npc/
│   ├── npc-chisel/src/main/scala/
│   │   ├── npc/           # 流水级: core / ifu / idu / exu / lsu / wbu
│   │   └── common/        # ALU / CSR / RegisterFile / ICache / Arbiter /
│   │                      #   Xbar / CLINT / AXI4 / UART / SRAM ...
│   ├── vsrc/              # 生成的 Verilog + ysyxSoC 外设
│   ├── csrc/              # Verilator 仿真环境 + DPI-C
│   └── simulator/
├── nemu/                  # NEMU: 差分测试参考模型
├── abstract-machine/      # AM: 裸机运行时
├── am-kernels/            # AM 测试程序 / benchmark
├── ysyxSoC/               # SoC 顶层与外设集成
├── yosys-sta/             # 综合 + 静态时序分析脚本 (git submodule)
└── Makefile / init.sh
```

---

## 构建与运行

```bash
# 初始化子模块与环境
./init.sh

# 生成 SystemVerilog（Chisel → Verilog）
cd npc/npc-chisel && sbt run          # 输出到 ../vsrc/generated/

# 仿真 + 差分测试
cd npc && make sim                     # Verilator 构建并运行，与 NEMU 逐指令比对
```

依赖：Chisel / firtool、Verilator、riscv 交叉工具链、NEMU。具体版本以子模块与 `init.sh` 为准。

---

## 验证方法

- **差分测试**：每提交一条指令，把本核的 PC、通用寄存器、内存写与 NEMU 参考模型逐条比对，偏差立即报错。
- **测试集**：`am-kernels`（cpu-tests、benchmark）覆盖指令功能、异常、外设访问。
- **SoC 级**：Flash 启动 → bootloader 二级加载 → PSRAM/SDRAM 执行，验证 UART 输出、定时器中断、上下文切换。
- **OS 级**：加载并运行 RT-Thread，验证中断、定时器、线程调度、设备驱动整链路。

---

基于 ysyx / 一生一芯 教学生态（NEMU / AM / ysyxSoC）构建与验证。ISA 特性、流水线结构、缓存与外设行为以 `npc/npc-chisel/` 下的 Chisel 源码为准。
