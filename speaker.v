`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:50:40 03/12/2018 
// Design Name: 
// Module Name:    speaker 
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
module speaker(clk, rst, speaker);

input clk;
input rst;
output speaker;

// Binary counter, 16-bits wide
reg [15:0] counter = 0;

always @(posedge clk) 
begin
	if (rst == 1)
		counter <= counter + 1;
   else 
		counter <= 0;
end

// Use the most significant bit (MSB) of the counter to drive the speaker
assign speaker = counter[15];

/*
Square Wave
if (counter == UPPER_LIMIT) begin speaker = ~speaker; counter <=0; end
*/

endmodule
