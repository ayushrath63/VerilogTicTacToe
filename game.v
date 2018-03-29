`timescale 1ns / 1ps

`define BLANK 2'b00
`define HAS_X 2'b01
`define HAS_O 2'b10

`define IDLE 2'b00
`define P1_WIN 2'b01
`define P2_WIN 2'b10
`define TIE 2'b11

`define P1_TURN 1'b0
`define P2_TURN 1'b1

`define GAME_MODE 1'b0
`define SCORE_MODE 1'b1

module game(
	//Inputs
	clk,
	cursorPos,
	set,
	rst,
	
	//Outputs
	grid, //2 bits per cell
	P1WINS,
	P2WINS,
	ties,
	mode
);


input clk;
input [3:0] cursorPos;
input wire set;
input wire rst;

output reg [17:0] grid = 0; //2 bits per cell
output reg [7:0] P1WINS = 0;
output reg [7:0] P2WINS = 0;
output reg [7:0] ties = 0;
output reg mode = `GAME_MODE;

reg turn = `P1_TURN;
reg [27:0] counter = 0;

wire [1:0] cells [8:0];

assign cells[0] = grid[1:0];
assign cells[1] = grid[3:2];
assign cells[2] = grid[5:4];
assign cells[3] = grid[7:6];
assign cells[4] = grid[9:8];
assign cells[5] = grid[11:10];
assign cells[6] = grid[13:12];
assign cells[7] = grid[15:14];
assign cells[8] = grid[17:16];

always @ (posedge clk)
begin

	if(mode ==`GAME_MODE)
	begin
		counter <= 0;
	
		if(rst) grid <= 0;

		// Places a mark and changes turn
		if(set && (cells[cursorPos] == `BLANK))
		begin

			if(turn == `P1_TURN)
			begin
				case(cursorPos)
				0: grid[1:0] <= `HAS_X;
				1: grid[3:2] <= `HAS_X;
				2: grid[5:4] <= `HAS_X;
				3: grid[7:6] <= `HAS_X;
				4: grid[9:8] <= `HAS_X;
				5: grid[11:10] <= `HAS_X;
				6: grid[13:12] <= `HAS_X;
				7: grid[15:14] <= `HAS_X;
				8: grid[17:16] <= `HAS_X;
				endcase
				turn <= `P2_TURN;
			end
			
			
			else if(turn == `P2_TURN) 
			begin
				case(cursorPos)
				0: grid[1:0] <= `HAS_O;
				1: grid[3:2] <= `HAS_O;
				2: grid[5:4] <= `HAS_O;
				3: grid[7:6] <= `HAS_O;
				4: grid[9:8] <= `HAS_O;
				5: grid[11:10] <= `HAS_O;
				6: grid[13:12] <= `HAS_O;
				7: grid[15:14] <= `HAS_O;
				8: grid[17:16] <= `HAS_O;
				endcase
				turn <= `P1_TURN;
			end
			
		end

		// Determines winner
		if(
			(cells[0] == `HAS_X && cells[1] == `HAS_X && cells[2] == `HAS_X) ||
			(cells[3] == `HAS_X && cells[4] == `HAS_X && cells[5] == `HAS_X) ||
			(cells[6] == `HAS_X && cells[7] == `HAS_X && cells[8] == `HAS_X) ||
			(cells[0] == `HAS_X && cells[3] == `HAS_X && cells[6] == `HAS_X) ||
			(cells[1] == `HAS_X && cells[4] == `HAS_X && cells[7] == `HAS_X) ||
			(cells[2] == `HAS_X && cells[5] == `HAS_X && cells[8] == `HAS_X) ||
			(cells[0] == `HAS_X && cells[4] == `HAS_X && cells[8] == `HAS_X) ||
			(cells[6] == `HAS_X && cells[4] == `HAS_X && cells[2] == `HAS_X)
			)
		begin
			P1WINS <= P1WINS + 1;
			mode <= `SCORE_MODE;
			grid <= 0;
		end

		else if(
			(cells[0] == `HAS_O && cells[1] == `HAS_O && cells[2] == `HAS_O) ||
			(cells[3] == `HAS_O && cells[4] == `HAS_O && cells[5] == `HAS_O) ||
			(cells[6] == `HAS_O && cells[7] == `HAS_O && cells[8] == `HAS_O) ||
			(cells[0] == `HAS_O && cells[3] == `HAS_O && cells[6] == `HAS_O) ||
			(cells[1] == `HAS_O && cells[4] == `HAS_O && cells[7] == `HAS_O) ||
			(cells[2] == `HAS_O && cells[5] == `HAS_O && cells[8] == `HAS_O) ||
			(cells[0] == `HAS_O && cells[4] == `HAS_O && cells[8] == `HAS_O) ||
			(cells[6] == `HAS_O && cells[4] == `HAS_O && cells[2] == `HAS_O)
			)
		begin
			P2WINS <= P2WINS + 1;
			mode <= `SCORE_MODE;
			grid <= 0;
		end

		else if
			(
				(cells[0] != `BLANK) &&
				(cells[1] != `BLANK) &&
				(cells[2] != `BLANK) &&
				(cells[3] != `BLANK) &&
				(cells[4] != `BLANK) &&
				(cells[5] != `BLANK) &&
				(cells[6] != `BLANK) &&
				(cells[7] != `BLANK) &&
				(cells[8] != `BLANK)
			)
		begin
			mode <= `SCORE_MODE;
			ties <= ties + 1;
			grid <= 0;
		end

	end
	
	else if(mode == `SCORE_MODE)
	begin
		if(counter[27] == 1'b0)
			counter <= counter + 1;
		if(rst | counter[27]) mode <= `GAME_MODE;
	end

end

endmodule