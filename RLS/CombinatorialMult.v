`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:53:32 03/30/2016 
// Design Name: 
// Module Name:    CombinatorialMult 
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
module CombinatorialMult(y,a,b);

	parameter WIDTH = 32;					// wordlength
	parameter SIZE = 4;						// SIZE of vector 

	input [WIDTH-1:0] a;
	input [WIDTH*SIZE-1:0] b; 			// Arow Bcol
	output [WIDTH*SIZE-1:0] y;

	genvar i; 									// multiply the row by column and save results in partial
	generate for (i = 0; i < SIZE  ; i = i+1) begin:genMult
		 Mult inBuiltMult(.p(y[WIDTH*(i+1)-1 : WIDTH*i]), .a(a), .b(b[WIDTH*(i+1)-1 : WIDTH*i]));
	end endgenerate

endmodule
