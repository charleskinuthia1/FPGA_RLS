`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:24:47 03/30/2016 
// Design Name: 
// Module Name:    RLS 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 		Takes: {1 + [1 + 3*(1+SIZE/COMBSIZE)]}*SIZE clocks
//							After reset.
//							Answers is ready at posedge -> {2 + 3*(1+SIZE/COMBSIZE)}*SIZE = 304
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module RLSBlock(clk, reset, x0, k_SIZE, b_SIZE, a_SIZE, x, ready);

	parameter WIDTH = 32;
	parameter ITER = 32;
	parameter SIZE = 16;
	parameter COMBSIZE = 4;
	localparam UPDATE_x_LATENCY = 1 + 3*(1+SIZE/COMBSIZE); // 16 wait is the formula
	
	input clk, reset;
	input [WIDTH*ITER-1:0] b_SIZE; 			//16 words
	input [WIDTH*SIZE-1:0] x0;
	input [WIDTH*SIZE*ITER-1:0] k_SIZE;		//16*16 words
	input [WIDTH*SIZE*ITER-1:0] a_SIZE; 	//16*16 values
	output [WIDTH*SIZE-1:0] x;			//16 words
	output ready;
	reg readySignal;
	
	//internals
	reg reset_x;
	reg [WIDTH*ITER-1:0] b_SIZE_reg; 			//16 words
	reg [WIDTH*SIZE-1:0] x0_reg;
	reg [WIDTH*SIZE*ITER-1:0] k_SIZE_reg;		//16*16 words
	reg [WIDTH*SIZE*ITER-1:0] a_SIZE_reg; 	//16*16 values
	reg [WIDTH*SIZE-1:0] x_reg;			//16 words
	wire[WIDTH*SIZE-1:0] x_rls;
	
	assign x = x_reg;
	assign ready = readySignal;
	
	integer updateXcounter = 0;
	integer idx = 0;
	
	always @(posedge clk) begin
		if(reset)begin
			idx<=0;
			readySignal <=0;
			b_SIZE_reg <= b_SIZE;
			a_SIZE_reg <= a_SIZE;
			x0_reg <= x0; 
			k_SIZE_reg <= k_SIZE;
			b_SIZE_reg <= b_SIZE;
			updateXcounter<=0;
			readySignal <=0;
			reset_x<=1;
		end else begin: active
			if(readySignal) begin:do_nothing													
			
			end else if(reset_x) begin:update_x												// 1 clk
				reset_x<=0;
			end else begin:update_x_is_running
				if(updateXcounter<UPDATE_x_LATENCY) begin:wait_until					// 1 + [1 + 3*(1+SIZE/COMBSIZE)]
					updateXcounter <= updateXcounter +1;
				end else if(idx<=ITER-1) begin:save_x_and_increment_next_idx
					reset_x<=1;
					idx<= idx+1;
					x0_reg  <= x_rls; 
					x_reg <= x_rls;
					updateXcounter<=0;
				end else begin:signal_done
					idx <=0;
					//x_reg <= x_rls;
					readySignal <=1;
				end
			end
		end
	end
		
	Updatex #(.SIZE(SIZE),.COMBSIZE(COMBSIZE),.WIDTH(WIDTH))recursive (
		.clk(clk), 
		.reset(reset_x), 
		.x0(x0_reg), 
		.b(b_SIZE_reg[WIDTH*idx+:WIDTH]),		
		.k(k_SIZE_reg[WIDTH*SIZE*idx+:WIDTH*SIZE]),
		.a(a_SIZE_reg[WIDTH*SIZE*idx+:WIDTH*SIZE]),
		.x(x_rls)
	);
	
endmodule

