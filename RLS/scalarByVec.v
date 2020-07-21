`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:34 03/30/2016 
// Design Name: 
// Module Name:    scalarByVec 
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
module ScalarTimesVector(reset,clk,y,a,b);

	parameter WIDTH = 32;
	parameter SIZE_B = 16;
	parameter COMBSIZE = 4; // how many multipliers used at the same time.

	input clk, reset;
	input [WIDTH-1:0] a;
	input [WIDTH*SIZE_B-1:0] b;
	output [WIDTH*SIZE_B-1:0] y;
	
	reg signed [WIDTH-1:0] resultBuffer [0:SIZE_B-1];
	wire signed [COMBSIZE*WIDTH-1:0] multwire;
	
	integer idxB = 0;
	//integer combIter = 0;
	always @(posedge clk) begin
		if (reset) begin
			idxB <=0;	//input idx
		end else begin : active_mode
		resultBuffer[idxB*COMBSIZE+0] <= multwire[WIDTH*0+:WIDTH];
		resultBuffer[idxB*COMBSIZE+1] <= multwire[WIDTH*1+:WIDTH];
		resultBuffer[idxB*COMBSIZE+2] <= multwire[WIDTH*2+:WIDTH];
		resultBuffer[idxB*COMBSIZE+3] <= multwire[WIDTH*3+:WIDTH];
		/*	for(combIter=0;combIter<COMBSIZE;combIter=combIter+1)begin // probably needs to be hardcoded
				resultBuffer[idxB*COMBSIZE+combIter] <= multwire[WIDTH*combIter+:WIDTH];
			end
			combIter=0;*/
			if (idxB*COMBSIZE < (SIZE_B-COMBSIZE)) begin //increment and loop back
				idxB <= idxB + 1;
			end else begin
				idxB <= 0;
			end
		end
	end
	
	CombinatorialMult #(.WIDTH(WIDTH), .SIZE(COMBSIZE)) 
		scalarByVec(.y(multwire),
						.a(a),
						.b(b[WIDTH*COMBSIZE*idxB +: COMBSIZE*WIDTH]));
						
	genvar i;
	generate
		for(i = 0; i < SIZE_B; i=i+1) begin : connectOut
			assign y[WIDTH*i +: WIDTH] = resultBuffer[i];
		end
	endgenerate
/*	
	wire signed [WIDTH-1:0] r10, r11, //r12, r13, r14,
					r21, //r22, r23, r24,
					r31,// r32, r33, r34,
					r41,
					r51,
					r61, 
					r71,
					r81,
					r91, 
					r101,
					r111,
					r121,
					r131,
					r141, 
					r151;
	

//debug
assign					r10 = resultBuffer[0];
assign 	r11 = resultBuffer[1]; //r12, r13, r14,
assign					r21= resultBuffer[2]; //r22, r23, r24,
assign					r31= resultBuffer[3];// r32, r33, r34,
assign					r41= resultBuffer[4];
assign					r51= resultBuffer[5];
assign					r61= resultBuffer[6];
assign					r71= resultBuffer[7];
assign					r81= resultBuffer[8];
assign					r91= resultBuffer[9];
assign					r101= resultBuffer[10];
assign					r111= resultBuffer[11];
assign					r121= resultBuffer[12];
assign					r131= resultBuffer[13];
assign					r141= resultBuffer[14];
assign					r151= resultBuffer[15];
*/

endmodule
