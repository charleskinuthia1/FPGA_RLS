`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:27:36 03/30/2016 
// Design Name: 
// Module Name:    RowByColumn 
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
module RowByColWith4mults(clk, restart, a, b, y); //reset,

	parameter WIDTH = 32;
	parameter SIZE = 16;
	parameter COMBSIZE = 4;
	parameter RESET_VALUE = 0; // start andding from a constant.
	localparam LOAD_DELAY =1;
	
	input clk;
	input restart;
   input [WIDTH*SIZE-1:0] a;
   input [WIDTH*SIZE-1:0] b;
	output [WIDTH-1:0] y;
	
	reg signed [WIDTH-1:0] resultAddBuffer;
	wire signed [WIDTH-1:0] resultMultWire;
	
	integer k = 0;
	integer delay = 0;
	
	always @ (posedge clk) begin
		if(restart) begin: signal_to_start_clear_buffer
			resultAddBuffer <=RESET_VALUE;
			k <= 0;
			delay <=0;
		end else if(LOAD_DELAY < delay+1) begin: active
			if(k*COMBSIZE < SIZE) begin:update_and_add_recursive //update resultAdd //check if it goes out of bounds
				k <= k + 1;
				resultAddBuffer <= y;
			end
		end else begin:delay_recursion //wait 1 clock event
			resultAddBuffer <=RESET_VALUE; //skip this number
			delay <= delay + 1;
		end
	end

	CombinatoricRowByCol #(.WIDTH(WIDTH), .SIZE(COMBSIZE)) 
		Combinatoric(.a(a[WIDTH*COMBSIZE*k +: COMBSIZE*WIDTH]), .b(b[WIDTH*COMBSIZE*k +: COMBSIZE*WIDTH]), .y(resultMultWire)); // takes one clk event
	Add Add1(.s(y), .a(resultMultWire), .b(resultAddBuffer));		// takes one clock event
	
endmodule

