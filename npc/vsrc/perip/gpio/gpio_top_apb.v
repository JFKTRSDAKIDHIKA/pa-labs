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
      if (addr_led) begin
        led_reg <= in_pwdata;
      end
      if (addr_seg) begin
        seg_reg <= in_pwdata;
      end
    end
  end
  
  assign gpio_out = led_reg;
  assign switch_reg = gpio_in;
  
  function [7:0] decode_7seg;
    input [3:0] digit;
    begin
      case (digit)
        4'h0: decode_7seg = 8'b11111100; // 0
        4'h1: decode_7seg = 8'b01100000; // 1
        4'h2: decode_7seg = 8'b11011010; // 2
        4'h3: decode_7seg = 8'b11110010; // 3
        4'h4: decode_7seg = 8'b01100110; // 4
        4'h5: decode_7seg = 8'b10110110; // 5
        4'h6: decode_7seg = 8'b10111110; // 6
        4'h7: decode_7seg = 8'b11100000; // 7
        4'h8: decode_7seg = 8'b01111111; // 8
        4'h9: decode_7seg = 8'b11110110; // 9
        4'ha: decode_7seg = 8'b01110111; // A
        4'hb: decode_7seg = 8'b01111100; // b
        4'hc: decode_7seg = 8'b00111001; // C
        4'hd: decode_7seg = 8'b01011110; // d
        4'he: decode_7seg = 8'b01111001; // E
        4'hf: decode_7seg = 8'b01110001; // F
        default: decode_7seg = 8'b11111111; // 默认全灭
      endcase
    end
  endfunction
  
  assign gpio_seg_0 = ~decode_7seg(seg_reg[3:0]);
  assign gpio_seg_1 = ~decode_7seg(seg_reg[7:4]);
  assign gpio_seg_2 = ~decode_7seg(seg_reg[11:8]);
  assign gpio_seg_3 = ~decode_7seg(seg_reg[15:12]);
  assign gpio_seg_4 = ~decode_7seg(seg_reg[19:16]);
  assign gpio_seg_5 = ~decode_7seg(seg_reg[23:20]);
  assign gpio_seg_6 = ~decode_7seg(seg_reg[27:24]);
  assign gpio_seg_7 = ~decode_7seg(seg_reg[31:28]);

endmodule