`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:20:49 03/05/2018
// Design Name:   cursor_logic
// Module Name:   C:/Users/152/Downloads/Lab4/cursor_logic_tb.v
// Project Name:  Lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cursor_logic
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cursor_logic_tb;

	// Inputs
	reg clk;
	reg [9:0] Xdata;
	reg [9:0] Ydata;

	// Outputs
	wire [3:0] position;

	// Instantiate the Unit Under Test (UUT)
	cursor_logic uut (
		.clk(clk), 
		.Xdata(Xdata), 
		.Ydata(Ydata), 
		.position(position)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		Xdata = 500;
		Ydata = 500;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		repeat(100)
		begin
		#5 clk <= ~clk;
		end
		Xdata = 0;
		repeat(100)
		begin
		#5 clk <= ~clk;
		end
		Xdata = 500;
		repeat(100)
		begin
		#5 clk <= ~clk;
		end
		Ydata = 1000;
		repeat(100)
		begin
		#5 clk <= ~clk;
		end
		Ydata = 500;
		repeat(100)
		begin
		#5 clk <= ~clk;
		end
	end
      
endmodule

