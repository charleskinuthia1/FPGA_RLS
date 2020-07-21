`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:59:10 04/10/2016
// Design Name:   ScalarTimesVector
// Module Name:   C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/Complete_10thApril/RLS/scalarByVec_tb.v
// Project Name:  CompleteRLS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ScalarTimesVector
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module scalarByVec_tb;

	parameter WIDTH = 32;
	parameter SIZE = 16;
	parameter COMBSIZE = 4;
	
	// Inputs
	reg reset;
	reg clk;
	reg [WIDTH-1:0] a;
	reg [WIDTH*SIZE-1:0] B;

	// Outputs
	wire [WIDTH*SIZE-1:0] y;

	// Instantiate the Unit Under Test (UUT)
	ScalarTimesVector #(.WIDTH(WIDTH), .SIZE_B(SIZE), .COMBSIZE(COMBSIZE))uut (
		.reset(reset), 
		.clk(clk), 
		.y(y), 
		.a(a), 
		.b(B)
	);
	
	always begin
		#15 clk=~clk;
	end
	
	task initB;
		begin
		B[WIDTH*15+:WIDTH]=2.0**16*15.0;
		B[WIDTH*14+:WIDTH]=2.0**16*14.0;
		B[WIDTH*13+:WIDTH]=2.0**16*13.0;
		B[WIDTH*12+:WIDTH]=2.0**16*12.0;
		B[WIDTH*11+:WIDTH]=2.0**16*11.0;
		B[WIDTH*10+:WIDTH]=2.0**16*10.0;
		B[WIDTH*9+:WIDTH]=2.0**16*9.0;
		B[WIDTH*8+:WIDTH]=2.0**16*8.0;
		B[WIDTH*7+:WIDTH]=2.0**16*7.0;
		B[WIDTH*6+:WIDTH]=2.0**16*6.0;
		B[WIDTH*5+:WIDTH]=2.0**16*5.0;
		B[WIDTH*4+:WIDTH]=2.0**16*4.0;
		B[WIDTH*3+:WIDTH]=2.0**16*3.0;
		B[WIDTH*2+:WIDTH]=2.0**16*2.0;
		B[WIDTH*1+:WIDTH]=2.0**16*1.0;
		B[WIDTH*0+:WIDTH]=2.0**16*0.0;
		end
	endtask
	initial begin
		// Initialize Inputs
		reset = 1;
		clk = 0;
		a = 2.0**16*1.0;;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
		@(posedge clk);
		initB;
		@(posedge clk);
		reset <=0;
        
		// Add stimulus here

	end
      
endmodule

