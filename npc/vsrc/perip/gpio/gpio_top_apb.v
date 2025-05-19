module gpio_top_apb(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output [15:0] gpio_out,
  input  [15:0] gpio_in,
  output [7:0]  gpio_seg_0,
  output [7:0]  gpio_seg_1,
  output [7:0]  gpio_seg_2,
  output [7:0]  gpio_seg_3,
  output [7:0]  gpio_seg_4,
  output [7:0]  gpio_seg_5,
  output [7:0]  gpio_seg_6,
  output [7:0]  gpio_seg_7
);

  reg [15:0] led_reg;        
  wire [15:0] switch_reg;    
  reg [31:0] seg_reg;        
  
  wire apb_write = in_psel && in_penable && in_pwrite;
  wire apb_read = in_psel && in_penable && !in_pwrite;
  
  wire addr_led = (in_paddr[3:0] == 4'h0);
  wire addr_switch = (in_paddr[3:0] == 4'h4);
  wire addr_seg = (in_paddr[3:0] == 4'h8);
  
  assign in_pready = 1'b1;  
  assign in_pslverr = 1'b0;
  
  reg [31:0] prdata_reg;
  always @(*) begin
    if (apb_read) begin
      case (in_paddr[3:0])
        4'h0: prdata_reg = {16'h0, led_reg};
        4'h4: prdata_reg = {16'h0, switch_reg};
        4'h8: prdata_reg = seg_reg;
        default: prdata_reg = 32'h0;
      endcase
    end else begin
      prdata_reg = 32'h0;
    end
  end
  assign in_prdata = prdata_reg;
  
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      led_reg <= 16'h0;
      seg_reg <= 32'h0;
    end else if (apb_write) begin
      if (addr_led && in_pstrb[1:0] != 2'b00) begin
        if (in_pstrb[0]) led_reg[7:0] <= in_pwdata[7:0];
        if (in_pstrb[1]) led_reg[15:8] <= in_pwdata[15:8];
      end
      if (addr_seg) begin
        if (in_pstrb[0]) seg_reg[7:0] <= in_pwdata[7:0];
        if (in_pstrb[1]) seg_reg[15:8] <= in_pwdata[15:8];
        if (in_pstrb[2]) seg_reg[23:16] <= in_pwdata[23:16];
        if (in_pstrb[3]) seg_reg[31:24] <= in_pwdata[31:24];
      end
    end
  end
  
  assign gpio_out = led_reg;
  assign switch_reg = gpio_in;
  
  assign gpio_seg_0 = {4'b0, seg_reg[3:0]};
  assign gpio_seg_1 = {4'b0, seg_reg[7:4]};
  assign gpio_seg_2 = {4'b0, seg_reg[11:8]};
  assign gpio_seg_3 = {4'b0, seg_reg[15:12]};
  assign gpio_seg_4 = {4'b0, seg_reg[19:16]};
  assign gpio_seg_5 = {4'b0, seg_reg[23:20]};
  assign gpio_seg_6 = {4'b0, seg_reg[27:24]};
  assign gpio_seg_7 = {4'b0, seg_reg[31:28]};

endmodule