`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:59:59 03/30/2016 
// Design Name: 
// Module Name:    Updatex 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 				After reset is noticed:
//									result is ready at -> 	1 + 3*(1+SIZE/COMBSIZE) posedge = 16
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Updatex(clk, reset, x0, k, b, a, x);

	parameter WIDTH = 32;
	parameter SIZE = 16;
	parameter COMBSIZE = 4;
	localparam CLK_WAIT_RBC = 1+SIZE/COMBSIZE;  //row times col.
	localparam CLK_WAIT_VECADD = 1+SIZE/COMBSIZE;  //vector addtion.

	input clk, reset;
	input [WIDTH-1:0] b;
	input [WIDTH*SIZE-1:0] x0, k, a;
	output [WIDTH*SIZE-1:0] x;
	
	reg reset_scalarVec, reset_vecAdd, reset_rowbycol;
	wire signed [WIDTH-1:0] atx0Wire; // a' * x0.
	wire signed [WIDTH-1:0] batx0Wire; // b - a' * x0.
	wire signed [WIDTH*SIZE-1:0] kbatx0Wire; //k(b - a' * x0).
	reg signed [WIDTH-1:0] atx0Reg; // a' * x0.
	reg signed [WIDTH-1:0] batx0Reg; // b - a' * x0.
	reg signed [WIDTH*SIZE-1:0] kbatx0Reg; //k(b - a' * x0).
	
	integer rowbycol_counter = 0;
	integer scalarVec_counter = 0;
	
	always @(posedge clk) begin
		if (reset) begin
			reset_scalarVec <= 1;
			reset_vecAdd <= 1;
			reset_rowbycol <= 1;
			rowbycol_counter <= 0;
			scalarVec_counter <= 0;
		end else begin
			if (reset_rowbycol) begin:rowTimescol									//  1 clk event
				reset_rowbycol <= 0;
			end else begin
				if (rowbycol_counter < CLK_WAIT_RBC) begin						// 1 + (1+SIZE/COMBSIZE)
					atx0Reg <= atx0Wire;
					reset_scalarVec <= 1;
					rowbycol_counter <= rowbycol_counter + 1;
				end else begin:subtraction_and_scalarTimesVec					
					reset_scalarVec <= 0;
					if (scalarVec_counter < CLK_WAIT_VECADD) begin				// 1 + 2*(1+SIZE/COMBSIZE)
						batx0Reg <= batx0Wire;
						reset_vecAdd <= 1;
						scalarVec_counter <= scalarVec_counter + 1;
					end else begin:vectoraddition										// 1 + 3*(1+SIZE/COMBSIZE)
						kbatx0Reg <= kbatx0Wire;
						reset_vecAdd <= 0;
					end	
				end
			end
		end
	end
	
		RowByColWith4mults #(.WIDTH(WIDTH), .SIZE(SIZE), .COMBSIZE(COMBSIZE)) //combsize is 1 because input is serial apeasr one after on
			rowTimesColumn(.clk(clk), .restart(reset_rowbycol), .a(a), .b(x0), .y(atx0Wire));	
		
		Sub subtraction(.s(batx0Wire), .a(b), .b(atx0Reg));
		
		ScalarTimesVector #(.WIDTH(WIDTH),.SIZE_B(SIZE))
			scalarByVec(.reset(reset_scalarVec), .clk(clk), .y(kbatx0Wire), .a(batx0Reg), .b(k));
			
		VectorAddition #(.WIDTH(WIDTH), .SIZE(SIZE), .COMBSIZE(COMBSIZE))
			vectoraddtion(.clk(clk), .reset(reset_vecAdd), .a(x0), .b(kbatx0Reg), .c(x));
		
endmodule
