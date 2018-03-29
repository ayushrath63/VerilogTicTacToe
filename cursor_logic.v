`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:46:04 03/05/2018 
// Design Name: 
// Module Name:    cursor_logic 
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
module cursor_logic(
//input
clk,
Xdata, Ydata,
//output
position
    );
input clk;
input [9:0] Xdata;
input [9:0] Ydata;
reg [2:0] Xpos = 1;
reg [2:0] Ypos = 1;
output [3:0] position;
reg [2:0] direction = 0;

`define NEUTRAL 0
`define LEFT 1
`define RIGHT 2
`define UP 3
`define DOWN 4

`define LOW_THRESH 200
`define HIGH_THRESH 800

assign position = Xpos + 3 * Ypos;

initial
begin
	Xpos <= 1;
	Ypos <= 1;
end

always @ (posedge clk)
begin

	case(direction)
		`NEUTRAL:
		begin
			if(Xdata < `LOW_THRESH)
				direction <= `RIGHT;
			if(Xdata > `HIGH_THRESH)
				direction <= `LEFT;
			if(Ydata < `LOW_THRESH)
				direction <= `UP;
			if(Ydata > `HIGH_THRESH)
				direction <= `DOWN;
		end
		`RIGHT:
		begin
			if( Xdata > `LOW_THRESH && Xdata < `HIGH_THRESH && Ydata > `LOW_THRESH && Ydata < `HIGH_THRESH )
			begin
				direction <= `NEUTRAL;
				if(Xpos < 2) Xpos <= Xpos + 1;
			end
		end
		`LEFT:
		begin
			if( Xdata > `LOW_THRESH && Xdata < `HIGH_THRESH && Ydata > `LOW_THRESH && Ydata < `HIGH_THRESH )
			begin
				direction <= `NEUTRAL;
				if(Xpos > 0) Xpos <= Xpos - 1;
			end
		end
		`UP:
		begin
			if( Xdata > `LOW_THRESH && Xdata < `HIGH_THRESH && Ydata > `LOW_THRESH && Ydata < `HIGH_THRESH )
			begin
				direction <= `NEUTRAL;
				if(Ypos < 2) Ypos <= Ypos + 1;
			end
		end
		`DOWN:
		begin
			if( Xdata > `LOW_THRESH && Xdata < `HIGH_THRESH && Ydata > `LOW_THRESH && Ydata < `HIGH_THRESH )
			begin
				direction <= `NEUTRAL;
				if(Ypos > 0) Ypos <= Ypos - 1;
			end
		end
		default:
			if( Xdata > `LOW_THRESH && Xdata < `HIGH_THRESH && Ydata > `LOW_THRESH && Ydata < `HIGH_THRESH )
				direction <= `NEUTRAL;
	endcase

/*
0 : 1 : 2
3 : 4 : 5
6 : 7 : 8
*/

end

endmodule
