`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:39:12 01/30/2018 
// Design Name: 
// Module Name:    cell_sprite 
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
module cell_sprite(
//inputs
clk, x, y, en, contents, cursor_on,
//outputs
rgb
);

input clk;
input [9:0] x;
input [9:0] y;
input en;
input [1:0] contents;
input cursor_on;

output reg [7:0] rgb;

reg [12:0] addr = 0;

parameter pos_x = 0;
parameter pos_y = 0;

wire [7:0] blank_cell_rgb;
wire [7:0] cursor_rgb;
wire [7:0] x_rgb;
wire [7:0] o_rgb;

blank_cell_rom blank_cell_rom_(.clk(clk), .addr(addr), .data(blank_cell_rgb));
cursor_rom cursor_rom_(.clk(clk), .addr(addr), .data(cursor_rgb));
x_rom x_rom_(.clk(clk), .addr(addr), .data(x_rgb));
o_rom o_rom_(.clk(clk), .addr(addr), .data(o_rgb));

always @ (posedge clk)
begin

	case(contents)
	2'b01:
		begin
			if(cursor_on) rgb <= x_rgb | cursor_rgb;
			else rgb <= x_rgb;
		end
	2'b10:
		begin
			if(cursor_on) rgb <= o_rgb | cursor_rgb;
			else rgb <= o_rgb;
		end
	default:
		begin
			if(cursor_on) rgb <= blank_cell_rgb | cursor_rgb;
			else rgb <= blank_cell_rgb;
		end
	endcase

	if(en)
	begin
		if(
			(x >= pos_x ) && 
			(x < pos_x  + 80) && 
			(y >= pos_y ) && 
			(y < pos_y + 80)
		)
			addr <= (x - pos_x) + (80 * (y-pos_y));
		else addr <= 13'b0000000000000;
	end

end

endmodule
