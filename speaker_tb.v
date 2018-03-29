`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:59:38 03/12/2018
// Design Name:   speaker
// Module Name:   C:/Users/princ/Desktop/Lab4/speaker_tb.v
// Project Name:  Lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: speaker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module speaker_tb;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire speaker;

	speaker mi (clk, rst, speakr);

	always
		begin
			clk = 0;
			rst = 1;
			#10;
			 rst = 0;
			#10;
			rst = 1;
			  
			forever begin clk = ~clk; #10; end
        
		end
    
    always @(mi.speaker)
		$display ("%m %t counter=%d, speaker=%d", $realtime, mi.counter, mi.speaker);

      
endmodule

