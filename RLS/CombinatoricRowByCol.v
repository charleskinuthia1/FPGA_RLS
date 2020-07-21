`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:33:55 03/30/2016 
// Design Name: 
// Module Name:    CombinatoricRowByCol 
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
module CombinatoricRowByCol(y, a, b);	// Note size be a power of 2. // not tested

	parameter WIDTH = 32;					// wordlength
	parameter SIZE = 4;						// SIZE of vector 

	input [WIDTH*SIZE-1:0] a, b; 			// Arow Bcol
	wire [WIDTH*(2*SIZE-1)-1:0] partials; 		// [A1*B1, A2*B2,...A3*B3 ... A1*B1+A2*B2, A1*B1+A2*B2+A3*B3, ...]
	output [WIDTH-1:0] y;
	//reg [WIDTH-1:0] yBuffer;
	//assign y = yBuffer;
	assign y = partials[WIDTH*(2*SIZE-1)-1:WIDTH*(2*SIZE-2)];
	
	//always @(posedge CLK) begin
		//yBuffer <= partials[WIDTH*(2*SIZE-1)-1:WIDTH*(2*SIZE-2)];
	//end

	genvar i; 									// multiply the row by column and save results in partial
	generate for (i = 0; i < SIZE  ; i = i+1) begin:genMult
		 Mult inBuiltMult(.p(partials[WIDTH*(i+1)-1 : WIDTH*i]), .a(a[WIDTH*(i+1)-1 : WIDTH*i]), .b(b[WIDTH*(i+1)-1 : WIDTH*i]));
	end endgenerate

	// adds the partials , delay is log2(SIZE)
	genvar j; 									// add the partials and save final result in last element
	generate for (j = 0; j < 2*SIZE-2  ; j = j+2) begin:genAdd
		 Add inBuiltAdd( .s(partials[WIDTH*(SIZE+(j/2)+1)-1 : WIDTH*(SIZE+(j/2))]), .a(partials[WIDTH*(j+1)-1 : WIDTH*j]), .b(partials[WIDTH*(j+2)-1 : WIDTH*(j+1)]));
	end endgenerate
	 
endmodule

