module display(
//clock
clk,
//VGA Related
vgaRed, vgaGreen, vgaBlue, Hsync, Vsync,
//Game state
cursorPos, gridContents, mode, p1Score, p2Score, ties
);
//Pixel clock
input clk;

//VGA
output [2:0] vgaRed;
output [2:0] vgaGreen;
output [1:0] vgaBlue;
output Vsync;
output Hsync;

`define WIDTH 640
`define HEIGHT 480

//Game State
input [3:0] cursorPos;
input [17:0] gridContents;
input mode;
input [7:0] p1Score;
input [7:0] p2Score;
input [7:0] ties;

`define GAME_MODE 1'b0
`define SCORE_MODE 1'b1


//Display internals
reg [9:0] x = 0;
reg [9:0] y = 0;

//VGA
reg [7:0] rgb_data = 0;
wire vid_en;

//grid
wire grid_en;
wire [7:0] grid_rgb;
assign grid_en = ~mode;

//score display
wire score_text_en;
wire [7:0] score_text_rgb;
wire [7:0] digit_1_rgb;
wire [7:0] digit_2_rgb;
wire [7:0] digit_t_rgb;
assign score_text_en = mode;


//Cells
//----------------------------------
//Cell Display
wire cells_en;
wire [7:0] cell0_rgb;
wire [7:0] cell1_rgb;
wire [7:0] cell2_rgb;
wire [7:0] cell3_rgb;
wire [7:0] cell4_rgb;
wire [7:0] cell5_rgb;
wire [7:0] cell6_rgb;
wire [7:0] cell7_rgb;
wire [7:0] cell8_rgb;
//Cell Contents
wire [1:0] cell0_contents;
wire [1:0] cell1_contents;
wire [1:0] cell2_contents;
wire [1:0] cell3_contents;
wire [1:0] cell4_contents;
wire [1:0] cell5_contents;
wire [1:0] cell6_contents;
wire [1:0] cell7_contents;
wire [1:0] cell8_contents;
assign cell0_contents = gridContents[1:0];
assign cell1_contents = gridContents[3:2];
assign cell2_contents = gridContents[5:4];
assign cell3_contents = gridContents[7:6];
assign cell4_contents = gridContents[9:8];
assign cell5_contents = gridContents[11:10];
assign cell6_contents = gridContents[13:12];
assign cell7_contents = gridContents[15:14];
assign cell8_contents = gridContents[17:16];
wire [8:0] cursorPosOneHot;
//Cursor location
assign cursorPosOneHot = 
	(cursorPos == 8) ? 9'b100000000 :
	(cursorPos == 7) ? 9'b010000000 :
	(cursorPos == 6) ? 9'b001000000 :
	(cursorPos == 5) ? 9'b000100000 :
	(cursorPos == 4) ? 9'b000010000 :
	(cursorPos == 3) ? 9'b000001000 :
	(cursorPos == 2) ? 9'b000000100 :
	(cursorPos == 1) ? 9'b000000010 :
							 9'b000000001 ; //(cursorPos == 0)
assign cells_en = ~mode;

vga_sync vga_( .pclk(clk), .rgb_data_in(rgb_data), .vgaRed(vgaRed), .vgaGreen(vgaGreen), .vgaBlue(vgaBlue), .Hsync(Hsync), .Vsync(Vsync), .vid_en(vid_en) );

grid_sprite #(.pos_x(200), .pos_y(120)) grid( .clk(clk), .x(x), .y(y), .en(grid_en), .rgb(grid_rgb));
cell_sprite #(.pos_x(200), .pos_y(120)) cell0(.clk(clk), .x(x), .y(y), .en(cells_en), .contents(cell0_contents), .cursor_on(cursorPosOneHot[0]), .rgb(cell0_rgb));
cell_sprite #(.pos_x(280), .pos_y(120)) cell1(.clk(clk), .x(x), .y(y), .en(cells_en), .contents(cell1_contents), .cursor_on(cursorPosOneHot[1]), .rgb(cell1_rgb));
cell_sprite #(.pos_x(360), .pos_y(120)) cell2(.clk(clk), .x(x), .y(y), .en(cells_en), .contents(cell2_contents), .cursor_on(cursorPosOneHot[2]), .rgb(cell2_rgb));
cell_sprite #(.pos_x(200), .pos_y(200)) cell3(.clk(clk), .x(x), .y(y), .en(cells_en), .contents(cell3_contents), .cursor_on(cursorPosOneHot[3]), .rgb(cell3_rgb));
cell_sprite #(.pos_x(280), .pos_y(200)) cell4(.clk(clk), .x(x), .y(y), .en(cells_en), .contents(cell4_contents), .cursor_on(cursorPosOneHot[4]), .rgb(cell4_rgb));
cell_sprite #(.pos_x(360), .pos_y(200)) cell5(.clk(clk), .x(x), .y(y), .en(cells_en), .contents(cell5_contents), .cursor_on(cursorPosOneHot[5]), .rgb(cell5_rgb));
cell_sprite #(.pos_x(200), .pos_y(280)) cell6(.clk(clk), .x(x), .y(y), .en(cells_en), .contents(cell6_contents), .cursor_on(cursorPosOneHot[6]), .rgb(cell6_rgb));
cell_sprite #(.pos_x(280), .pos_y(280)) cell7(.clk(clk), .x(x), .y(y), .en(cells_en), .contents(cell7_contents), .cursor_on(cursorPosOneHot[7]), .rgb(cell7_rgb));
cell_sprite #(.pos_x(360), .pos_y(280)) cell8(.clk(clk), .x(x), .y(y), .en(cells_en), .contents(cell8_contents), .cursor_on(cursorPosOneHot[8]), .rgb(cell8_rgb));

score_sprite #(.pos_x(200), .pos_y(120)) score_text(.clk(clk), .x(x), .y(y), .en(score_text_en), .rgb(score_text_rgb));
digit_sprite #(.pos_x(234), .pos_y(120)) p1wins(.clk(clk), .x(x), .y(y), .num(p1Score), .en(score_text_en), .rgb(digit_1_rgb));
digit_sprite #(.pos_x(234), .pos_y(126)) p2wins(.clk(clk), .x(x), .y(y), .num(p2Score), .en(score_text_en), .rgb(digit_2_rgb));
digit_sprite #(.pos_x(234), .pos_y(132)) game_ties(.clk(clk), .x(x), .y(y), .num(ties), .en(score_text_en), .rgb(digit_t_rgb));

always @(posedge clk)
begin

if(vid_en)
begin
	if(x < `WIDTH - 1) x <= x + 1;
	else 
	begin
		x <= 0;
		if( y < `HEIGHT - 1 ) y <= y + 1;
		else y <= 0;
	end
end

rgb_data <= 
	(mode == `GAME_MODE) ? 
		(grid_rgb | cell0_rgb | cell1_rgb | cell2_rgb | cell3_rgb | cell4_rgb | cell5_rgb | cell6_rgb | cell7_rgb | cell8_rgb) :
		(score_text_rgb | digit_1_rgb | digit_2_rgb | digit_t_rgb) ;

end;

endmodule