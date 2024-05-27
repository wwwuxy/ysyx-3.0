/* verilator lint_off NULLPORT */
/* verilator lint_off PINMISSING */

module keyboard (
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output [7:0] seg0,
    output [7:0] seg1,
    output [7:0] seg2,
    output [7:0] seg3,
    output [7:0] seg4,
    output [7:0] seg5,
);

reg [7:0] data;
ps2_keyboard K(
    .clk(clk),
    .resetn(~rst),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data)
);

endmodule
