`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:33:02 03/12/2018 
// Design Name: 
// Module Name:    digit_sprite 
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
module digit_sprite(
//input
clk, x, y, num, en,
//output
rgb
);

input clk;
input en;
input [9:0] x;
input [9:0] y;
input [7:0] num;

output [7:0] rgb;

reg [7:0] addr = 0;

parameter pos_x = 0;
parameter pos_y = 0;

digits_rom rom_(.clk(clk), .addr(addr), .data(rgb));

always @ (posedge clk)
begin
	if(en)
	begin
		if(
			(x >= pos_x ) && 
			(x < pos_x  + 3) && 
			(y >= pos_y ) && 
			(y < pos_y + 5)
		)
		begin
			if(num > 9) addr <= (x - pos_x) + (5 * (y-pos_y)) + 15 * 9;
			else addr <= (x - pos_x) + (3 * (y-pos_y)) + 15 * num;
		end
		else addr <= 8'b00000000;
	end
end

endmodule
