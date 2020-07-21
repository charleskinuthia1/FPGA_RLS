`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:09:13 03/30/2016 
// Design Name: 
// Module Name:    VectorAddition 
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
module VectorAddition(clk, reset, a, b, c);

	parameter WIDTH = 32;
	parameter SIZE = 16;
	parameter COMBSIZE = 4; // how many adders used at the same time.
	
	input clk, reset;
	input [WIDTH*SIZE-1:0] a, b;
	output [WIDTH*SIZE-1:0] c;
	
	wire signed [COMBSIZE*WIDTH-1:0] addwire;
	reg signed [WIDTH-1:0] resultreg [SIZE-1:0];
	
	integer k = 0;
	always @(posedge clk) begin
		if (reset) begin
			k <= 0;
		end 
		else begin
			resultreg[k*COMBSIZE+0] <= addwire[WIDTH*0+:WIDTH];
			resultreg[k*COMBSIZE+1] <= addwire[WIDTH*1+:WIDTH];
			resultreg[k*COMBSIZE+2] <= addwire[WIDTH*2+:WIDTH];
			resultreg[k*COMBSIZE+3] <= addwire[WIDTH*3+:WIDTH];
			if (k*COMBSIZE < (SIZE-COMBSIZE)) begin
				k <= k + 1;
			end
			else begin
				k <= 0;
			end
		end
	end
	
	CombinatorialAdd #(.WIDTH(WIDTH), .SIZE(COMBSIZE)) 
		combadd(.y(addwire), .a(a[WIDTH*COMBSIZE*k +: COMBSIZE*WIDTH]), .b(b[WIDTH*COMBSIZE*k +: COMBSIZE*WIDTH]));
	
	genvar i;
	generate
		for(i = 0; i < SIZE; i=i+1) begin : connectOut 
			assign c[WIDTH*i +: WIDTH] = resultreg[i];
		end
	endgenerate

endmodule 
