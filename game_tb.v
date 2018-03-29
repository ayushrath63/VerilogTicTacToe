`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:20:28 03/12/2018
// Design Name:   game
// Module Name:   C:/Xilinx/Projects/CSM152A_Lab4/Lab4/game_tb.v
// Project Name:  Lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: game
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module game_tb;

	// Inputs
	reg clk;
	reg [3:0] cursorPos;
	reg set;
	reg rst;

	// Outputs
	wire [17:0] grid;
	wire [7:0] P1WINS;
	wire [7:0] P2WINS;
	wire [7:0] ties;
	wire mode;

	// Instantiate the Unit Under Test (UUT)
	game uut (
		.clk(clk), 
		.cursorPos(cursorPos), 
		.set(set), 
		.rst(rst), 
		.grid(grid),  
		.P1WINS(P1WINS), 
		.P2WINS(P2WINS),
		.ties(ties),
		.mode(mode)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		cursorPos = 7;
		set = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		repeat(10)
		begin
			#5 clk = ~clk;
			cursorPos = 4;
			set = 1;
		end
		repeat(10)
		begin
			#5 clk = ~clk;
			cursorPos = 3;
			set = 1;
		end
		repeat(10)
		begin
			#5 clk = ~clk;
			cursorPos = 1;
			set = 1;
		end
		repeat(10)
		begin
			#5 clk = ~clk;
			cursorPos = 2;
			set = 1;
		end
		repeat(10)
		begin
			#5 clk = ~clk;
			cursorPos = 7;
			set = 1;
		end
		set = 1;
		repeat(10)
		begin
			#5 clk = ~clk;
		end
				repeat(10)
		begin
			#5 clk = ~clk;
		end
				repeat(10)
		begin
			#5 clk = ~clk;
		end
				repeat(10)
		begin
			#5 clk = ~clk;
		end
		$finish;	
	end
	
endmodule

