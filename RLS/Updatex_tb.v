`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:56:14 03/30/2016
// Design Name:   Updatex
// Module Name:   C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/RLS/Updatex_tb.v
// Project Name:  RLS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Updatex
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Updatex_tb;

	parameter WIDTH = 32;
	parameter SIZE = 16;
	parameter COMBSIZE = 4;
	
	// Inputs
	reg clk;
	reg reset;
	reg [WIDTH-1:0] b;
	reg [WIDTH*SIZE-1:0] x0, k, a;

	// Outputs
	wire [WIDTH*SIZE-1:0] x;

	// Instantiate the Unit Under Test (UUT)
	Updatex #(.SIZE(SIZE),.COMBSIZE(COMBSIZE),.WIDTH(WIDTH))uut (
		.clk(clk), 
		.reset(reset), 
		.x0(x0), 
		.b(b),		
		.k(k),
		.a(a),
		.x(x)
	);
	
		always begin
		#15 clk = ~clk; // rowByCol might be taking 5*3 ns = 15ns
	end
	
	task initx0; 
	begin
		x0[WIDTH*15+:WIDTH]=2.0**16*1.5;
		x0[WIDTH*14+:WIDTH]=2.0**16*1.4;
		x0[WIDTH*13+:WIDTH]=2.0**16*1.3;
		x0[WIDTH*12+:WIDTH]=2.0**16*1.2;
		x0[WIDTH*11+:WIDTH]=2.0**16*1.1;
		x0[WIDTH*10+:WIDTH]=2.0**16*1.0;
		x0[WIDTH*9+:WIDTH]=2.0**16*0.9;
		x0[WIDTH*8+:WIDTH]=2.0**16*0.8;
		x0[WIDTH*7+:WIDTH]=2.0**16*0.7;
		x0[WIDTH*6+:WIDTH]=2.0**16*0.6;
		x0[WIDTH*5+:WIDTH]=2.0**16*0.5;
		x0[WIDTH*4+:WIDTH]=2.0**16*0.4;
		x0[WIDTH*3+:WIDTH]=2.0**16*0.3;
		x0[WIDTH*2+:WIDTH]=2.0**16*0.2;
		x0[WIDTH*1+:WIDTH]=2.0**16*0.1;
		x0[WIDTH*0+:WIDTH]=2.0**16*0.0;
end endtask
	
	task initk;
	begin
		k[WIDTH*15+:WIDTH]=2.0**16*15.0;
		k[WIDTH*14+:WIDTH]=2.0**16*14.0;
		k[WIDTH*13+:WIDTH]=2.0**16*13.0;
		k[WIDTH*12+:WIDTH]=2.0**16*12.0;
		k[WIDTH*11+:WIDTH]=2.0**16*11.0;
		k[WIDTH*10+:WIDTH]=2.0**16*10.0;
		k[WIDTH*9+:WIDTH]=2.0**16*9.0;
		k[WIDTH*8+:WIDTH]=2.0**16*8.0;
		k[WIDTH*7+:WIDTH]=2.0**16*7.0;
		k[WIDTH*6+:WIDTH]=2.0**16*6.0;
		k[WIDTH*5+:WIDTH]=2.0**16*5.0;
		k[WIDTH*4+:WIDTH]=2.0**16*4.0;
		k[WIDTH*3+:WIDTH]=2.0**16*3.0;
		k[WIDTH*2+:WIDTH]=2.0**16*2.0;
		k[WIDTH*1+:WIDTH]=2.0**16*1.0;
		k[WIDTH*0+:WIDTH]=2.0**16*0.0;
	end endtask
	
	task inita;
	begin
		a[WIDTH*15+:WIDTH]=2.0**16*15.0;
		a[WIDTH*14+:WIDTH]=2.0**16*14.0;
		a[WIDTH*13+:WIDTH]=2.0**16*13.0;
		a[WIDTH*12+:WIDTH]=2.0**16*12.0;
		a[WIDTH*11+:WIDTH]=2.0**16*11.0;
		a[WIDTH*10+:WIDTH]=2.0**16*10.0;
		a[WIDTH*9+:WIDTH]=2.0**16*9.0;
		a[WIDTH*8+:WIDTH]=2.0**16*8.0;
		a[WIDTH*7+:WIDTH]=2.0**16*7.0;
		a[WIDTH*6+:WIDTH]=2.0**16*6.0;
		a[WIDTH*5+:WIDTH]=2.0**16*5.0;
		a[WIDTH*4+:WIDTH]=2.0**16*4.0;
		a[WIDTH*3+:WIDTH]=2.0**16*3.0;
		a[WIDTH*2+:WIDTH]=2.0**16*2.0;
		a[WIDTH*1+:WIDTH]=2.0**16*1.0;
		a[WIDTH*0+:WIDTH]=2.0**16*0.0;
	end endtask
	
	
	task initb;
	begin
		b[WIDTH*0+:WIDTH] = 2.0**16*15.0;
	end endtask
	
	initial begin
		// Initialize Inputs
		clk = 0;
		reset <= 1;
		initx0;
		initk;
		inita;
		initb;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		@(posedge clk);
		reset <=1;
		@(posedge clk);
		reset <=0;
	end
      
endmodule

