`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:36:54 04/05/2016
// Design Name:   TopModule
// Module Name:   C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/RLS/TopModule_tb.v
// Project Name:  RLS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TopModule
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TopModule_tb;
	parameter SIZE = 8;
	parameter WIDTH = 32;
	parameter COMBSIZE = 4;
	parameter BLOCK = 32;//16*2;
	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [WIDTH*SIZE-1:0] x;

	// Instantiate the Unit Under Test (UUT)
	TopModule #(.SIZE(SIZE), .WIDTH(WIDTH), .COMBSIZE(COMBSIZE), .BLOCK(BLOCK))uut (
		.clk(clk), 
		.reset(reset), 
		.x(x)
	);
	
	integer file;
	integer counterBlocks=1;

	always begin
		#15 clk =~clk; 
	end
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		file = $fopen ("SIM_RLS.txt", "w");

		// Wait 100 ns for global reset to finish
		#100;     
		$display("TIME::%g", $time);
		@( posedge clk) ;
		$display("TIME::%g", $time);
		// Add stimulus here
		repeat(1023) begin // size 16 518 //1023+1 ??
			@( posedge clk);
		end
		$display("TIME::%g\t::Chack state", $time);
		// start rls after collecting data
		reset<=0;
		repeat(192) begin // number of blocks
			repeat(398) begin // size 16 518
				@( posedge clk);
			end
			$fwrite(file, "%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n",
			$itor($signed(x[WIDTH*0+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*1+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*2+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*3+:WIDTH]))*2.0**-16,
			$itor($signed(x[WIDTH*4+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*5+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*6+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*7+:WIDTH]))*2.0**-16
			);
			$display("TIME=%g::BLOCK:%g\n'::x[15]=%g= %h", $time,counterBlocks,$itor($signed(x[WIDTH*0+:WIDTH]))*2.0**-16, x[WIDTH*0+:WIDTH]);
			counterBlocks <=counterBlocks + 1;
		end
		$display("Check the file 'SIM_RLS.txt\n'");
		$fclose(file);
	end
      
endmodule


/*

		repeat(192) begin // number of blocks
			repeat(398) begin // size 16 518
				@( posedge clk);
			end
			$fwrite(file, "%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n%g,\n",
			$itor($signed(x[WIDTH*0+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*1+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*2+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*3+:WIDTH]))*2.0**-16,
			$itor($signed(x[WIDTH*4+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*5+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*6+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*7+:WIDTH]))*2.0**-16,
			$itor($signed(x[WIDTH*8+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*9+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*10+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*11+:WIDTH]))*2.0**-16,
			$itor($signed(x[WIDTH*12+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*13+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*14+:WIDTH]))*2.0**-16,	$itor($signed(x[WIDTH*15+:WIDTH]))*2.0**-16
			);
			$display("TIME=%g::BLOCK:%g\n'::x[15]=%g= %h", $time,counterBlocks,$itor($signed(x[WIDTH*0+:WIDTH]))*2.0**-16, x[WIDTH*0+:WIDTH]);
			counterBlocks <=counterBlocks + 1;
		end
*/