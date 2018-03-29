`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:11:34 02/26/2018
// Design Name:   top
// Module Name:   C:/Users/152/Desktop/Lab4/top_tb.v
// Project Name:  Lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module top_tb;

	// Inputs
	reg clk;

	// Outputs
	wire [2:0] vgaRed;
	wire [2:0] vgaGreen;
	wire [2:1] vgaBlue;
	wire Hsync;
	wire Vsync;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.vgaRed(vgaRed), 
		.vgaGreen(vgaGreen), 
		.vgaBlue(vgaBlue), 
		.Hsync(Hsync), 
		.Vsync(Vsync)
	);

	initial begin
		clk = 0;
		uut.pclk = 0;
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
		#10 
		clk = ~clk; 
	end
      
endmodule

