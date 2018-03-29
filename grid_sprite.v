`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:59:47 01/30/2018 
// Design Name: 
// Module Name:    grid_sprite 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module grid_sprite(
//input
clk, x, y, en,
//output
rgb
);

`define WIDTH 640
`define HEIGHT 480
`define SPRITE_SIZE 240

input clk;
input en;
input [9:0] x;
input [9:0] y;
output [7:0] rgb;

reg [15:0] addr = 0;

parameter pos_x = 0;
parameter pos_y = 0;


grid_rom rom_(.clk(clk), .addr(addr), .data(rgb));

always @(posedge clk)
begin

	if(en)
	begin
		if(
			(x >= pos_x ) && 
			(x < pos_x  + 240) && 
			(y >= pos_y ) && 
			(y < pos_y + 240)
		)
			addr <= (x - pos_x) + (240 * (y-pos_y));
		else addr <= 16'b0000000000000000;
	end
	
end

endmodule
