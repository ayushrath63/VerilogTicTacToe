`timescale 1ns / 1ps
`include "image_definitions.v"

module vga_sync(
//input
pclk, rgb_data_in,
//Outputs
vgaRed, vgaGreen, vgaBlue, Hsync, Vsync, vid_en
    );

//VGA Inputs
input pclk; // Pixel clock, 25 MHZ
output reg [2:0] vgaRed = 0;
output reg [2:0] vgaGreen = 0;
output reg [1:0] vgaBlue = 0;
output wire Vsync;
output wire Hsync;
output vid_en;

//input line
input [7:0] rgb_data_in;

// VGA timing parameters, measured in clock cycles
parameter vFrame = 521;
parameter hFrame = 800;
parameter vVisArea = 480;
parameter hVisArea = 640;
parameter vFPorch = 10;
parameter hFPorch = 16;
parameter vBPorch = 29;
parameter hBPorch = 48;
parameter vSyncPulse = 2;
parameter hSyncPulse = 96;

parameter vVisAreaStart = vSyncPulse + vBPorch - 1;
parameter vVisAreaEnd = vSyncPulse + vBPorch + vVisArea;
parameter hVisAreaStart = hSyncPulse + hBPorch - 1;
parameter hVisAreaEnd = hSyncPulse + hBPorch + hVisArea;

//horizontal and vertical counters
reg [9:0] vCount = 0;
reg [9:0] hCount = 0;

reg [9:0] vPixel = 0;
reg [9:0] hPixel = 0;

//rgb data register, updates on Hsync pulse
reg [7:0] rgb_data = 0;

//Update counters on edge of pixel clock
always @ (posedge pclk)
begin

	rgb_data <= rgb_data_in;

	//Update pixel counters
	if(hCount < hFrame - 1) hCount <= hCount + 1;
	else
	begin
		hCount <= 0;
		if(vCount < vFrame - 1) vCount <= vCount + 1;
		else vCount <= 0;
	end

	//Write to display
	vgaRed <= rgb_data[7:5];
	vgaGreen <= rgb_data[4:2];
	vgaBlue <= rgb_data[1:0];

end

//Generate sync pulses based on counters
assign Hsync = (hCount < hSyncPulse) ? 0 : 1;
assign Vsync = (vCount < vSyncPulse) ? 0 : 1;

//video enable signal
assign vid_en = (vCount > vVisAreaStart) && (vCount < vVisAreaEnd) && (hCount > hVisAreaStart) && (hCount < hVisAreaEnd);

endmodule
