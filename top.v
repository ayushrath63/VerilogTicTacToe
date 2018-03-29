`timescale 1ns / 1ps

module top(
//Inputs
clk, MISO, led,
//Outputs
vgaRed, vgaGreen, vgaBlue, Hsync, Vsync, SS, MOSI, SCLK, sp
    );

//100MHz Clock	 
input clk;

//VGA signals
output [2:0] vgaRed;
output [2:0] vgaGreen;
output [2:1] vgaBlue;
output Hsync;
output Vsync;

// SPI Interface (Joystick)
input MISO;
output SS;
output MOSI;
output SCLK;

output [1:0] led;

//speaker (PWM)
output sp;

reg [1:0] dclk;
//clock divider, Downclock to 25 MHz (VGA Pixel Clock)
always @(posedge clk)
begin
	dclk <= dclk + 1;
end

//System is never reset
reg rst = 0;

//Joystick-related top level signals
wire clk5Hz;
reg [7:0] jstkDIN = 0;
wire [39:0] jstkDOUT;
wire [9:0] Xdata;
wire [9:0] Ydata;
wire btn1;
wire btn2;
assign Xdata = {jstkDOUT[9:8], jstkDOUT[23:16]};
assign Ydata = {jstkDOUT[25:24], jstkDOUT[39:32]};
assign btn1 = jstkDOUT[1];
assign btn2 = jstkDOUT[2];

//Game State top level signals
wire [3:0] cursorPos;
wire [17:0] gridContents;
wire [7:0] P1WINS;
wire [7:0] P2WINS;
wire [7:0] ties;
wire mode;

// Submodules
display display_(
		.clk(dclk[1]),
		.vgaRed(vgaRed),
		.vgaGreen(vgaGreen),
		.vgaBlue(vgaBlue),
		.Hsync(Hsync),
		.Vsync(Vsync), 
		.cursorPos(cursorPos),
		.gridContents(gridContents),
		.mode(mode),
		.p1Score(P1WINS), 
		.p2Score(P2WINS),
		.ties(ties)
);

ClkDiv_5Hz Hz5ClkDiv_(.CLK(clk), .RST(rst), .CLKOUT(clk5Hz));
PmodJSTK jstk_(.CLK(clk),.RST(rst),.sndRec(clk5Hz),.DIN(jstkDIN),.MISO(MISO),.SS(SS),.SCLK(SCLK),.MOSI(MOSI),.DOUT(jstkDOUT));

cursor_logic cursor_(.clk(clk), .Xdata(Xdata), .Ydata(Ydata), .position(cursorPos));
game game_(.clk(dclk[1]), .cursorPos(cursorPos), .set(btn1), .rst(btn2), .grid(gridContents), .P1WINS(P1WINS), .P2WINS(P2WINS), .ties(ties), .mode(mode));
speaker speaker_(.clk(dclk[1]), .rst(), .speaker(sp));

assign led[1] = btn2;
assign led[0] = btn1;

endmodule
