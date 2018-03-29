`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:37:36 03/11/2018
// Design Name:   display
// Module Name:   C:/Xilinx/Projects/CSM152A_Lab4/Lab4/disp_tb.v
// Project Name:  Lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: display
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module disp_tb;

	// Inputs
	reg clk;
	reg [3:0] cursorPos;
	reg set;
	reg rst;
	
	// Outputs
	wire [2:0] vgaRed;
	wire [2:0] vgaGreen;
	wire [1:0] vgaBlue;
	wire Hsync;
	wire Vsync;

	wire [17:0] grid;
	wire [7:0] P1WINS;
	wire [7:0] P2WINS;
	wire [7:0] ties;
	wire mode;


	integer f;
	integer cur_time;
	


	// Instantiate the Unit Under Test (UUT)
	display uut (
		.clk(clk), 
		.vgaRed(vgaRed), 
		.vgaGreen(vgaGreen), 
		.vgaBlue(vgaBlue), 
		.Hsync(Hsync), 
		.Vsync(Vsync),
		.cursorPos(cursorPos),
		.gridContents(grid),
		.mode(mode),
		.p1Score(P1WINS),
		.p2Score(P2WINS),
		.ties(ties)
	);

	// Instantiate the Unit Under Test 2 (UUT)
	game uut2 (
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
		cursorPos = 4;
		set = 0;
		rst = 0;

		f = $fopen("output.txt","w");
		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		set = 1;
		repeat(800 * 521 * 2)
		begin
			#20 clk = ~clk;
			cur_time = $time;
			
			$fwrite(f,"%d ns: %b %b %b %b %b\n", cur_time, Hsync,Vsync,vgaRed,vgaGreen,vgaBlue);
		end
		repeat(800 * 521 * 2)
		begin
			#20 clk = ~clk;
			cursorPos = 3;

			cur_time = $time;
			$fwrite(f,"%d ns: %b %b %b %b %b\n", cur_time, Hsync,Vsync,vgaRed,vgaGreen,vgaBlue);
		end
		repeat(800 * 521 * 2)
		begin
			#20 clk = ~clk;
			cursorPos = 1;
			cur_time = $time;
			$fwrite(f,"%d ns: %b %b %b %b %b\n", cur_time, Hsync,Vsync,vgaRed,vgaGreen,vgaBlue);
		end
		repeat(800 * 521 * 2)
		begin
			#20 clk = ~clk;
			cursorPos = 0;
			
			cur_time = $time;
			$fwrite(f,"%d ns: %b %b %b %b %b\n", cur_time, Hsync,Vsync,vgaRed,vgaGreen,vgaBlue);
		end
		set = 0;
		cursorPos = 7;
		repeat(800 * 521 * 2)
		begin
			#20 clk = ~clk;
			cur_time = $time;
			$fwrite(f,"%d ns: %b %b %b %b %b\n", cur_time, Hsync,Vsync,vgaRed,vgaGreen,vgaBlue);
		end
		set = 1;
		repeat(800 * 521 * 2)
		begin
			#20 clk = ~clk;
			cur_time = $time;
			$fwrite(f,"%d ns: %b %b %b %b %b\n", cur_time, Hsync,Vsync,vgaRed,vgaGreen,vgaBlue);
		end
		$fclose(f);
		$finish;
	end
      
endmodule

