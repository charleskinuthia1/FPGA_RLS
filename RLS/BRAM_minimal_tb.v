`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:48:31 04/07/2016
// Design Name:   BLOCK_MEM
// Module Name:   C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/RLS/BRAM_minimal_tb.v
// Project Name:  RLS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BLOCK_MEM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BRAM_minimal_tb;

	// Inputs
	reg clka;
	reg [3:0] wea;
	reg [31:0] addra;
	reg [31:0] dina;

	// Outputs
	wire [31:0] douta;

	// Instantiate the Unit Under Test (UUT)
	BLOCK_MEM uut (
		.clka(clka), 
		.wea(wea), 
		.addra(addra), 
		.dina(dina), 
		.douta(douta)
	);
	
	always begin
		#10 clka =~clka;
	end

	initial begin
		// Initialize Inputs
		clka = 0;
		wea = 0;
		addra = 0;
		dina = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		@(posedge clka);
		wea <= 4'b1111;
		repeat(10) begin//10 cycles
			@(posedge clka);
			addra <= addra+4;
			dina <=dina+1;
		end
		@(posedge clka);
		wea <= 0;
		addra <= 0;
		repeat(10) begin//10 cycles
			@(posedge clka);
			addra <= addra+4;
			dina <=dina+1;
		end
	end
      
endmodule

		/*addra=1;
		dina=1;
		#10
		wea=1;
		#10
		wea=0;
		#10
		addra=20;
		#50
		addra=1;
		#100;*/
