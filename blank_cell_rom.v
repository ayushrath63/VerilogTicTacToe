`timescale 1ns / 1ps

// Stores 8-bit color data for blank cell image

module blank_cell_rom(
//input
clk, addr,
//output
data
);

input wire clk;
input [12:0] addr;


output reg [7:0] data;

always @ (posedge clk)
begin

data <= 8'b00000000;

end

endmodule
