`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:32:34 03/12/2018 
// Design Name: 
// Module Name:    score_sprite 
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
module score_sprite(
//input
clk, x, y, en,
//output
rgb
);

input clk;
input en;
input [9:0] x;
input [9:0] y;

output [7:0] rgb;

reg [9:0] addr = 0;

parameter pos_x = 0;
parameter pos_y = 0;

score_rom rom_(.clk(clk), .addr(addr), .data(rgb));

always @ (posedge clk)
begin
	if(en)
	begin
		if(
			(x >= pos_x ) && 
			(x < pos_x  + 33) && 
			(y >= pos_y ) && 
			(y < pos_y + 17)
		)
			addr <= (x - pos_x) + (33 * (y-pos_y));
		else addr <= 10'b0000000000000011;
	end
end


endmodule
