`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:01:07 04/11/2016
// Design Name:   transmitter
// Module Name:   C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/Complete_10thApril/RLS/transmitter_tb.v
// Project Name:  CompleteRLS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: transmitter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module transmitter_tb;
	
	parameter SIGNAL_DURATION = 2-1;
	// Inputs
	reg clk;
	reg start;
	reg [7:0] TxD_data;

	// Outputs
	wire TxD;

	// Instantiate the Unit Under Test (UUT)
	transmitter #(.SIGNAL_DURATION(SIGNAL_DURATION))uut (
		.clk(clk), 
		.start(start), 
		.TxD_data(TxD_data), 
		.TxD(TxD)
	);
	
	always begin
		#11 clk=~clk;
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		start = 0;
		TxD_data = 8'b01011101;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		@(posedge clk);
		start<=1;
		@(posedge clk);
		start<=0;
		TxD_data <= 8'b01100101;
		repeat((SIGNAL_DURATION+1)*11) begin
			@(posedge clk);
		end
		@(posedge clk);
		start<=1;
		@(posedge clk);
		start<=0;
	end
      
endmodule

