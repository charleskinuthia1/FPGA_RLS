`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:51:24 04/04/2016
// Design Name:   BLOCK_MEM
// Module Name:   C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/RLS/BRAM_tb2.v
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

module BRAM_tb2;
// Inputs  
	reg clka; 
	reg [0:0] wea;  
	reg [31:0] addra;  
	reg [31:0] dina; 

 	reg [1:0] s;
		
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

	initial begin   
	// Initialize Inputs 
		s=0;
		clka = 1'b0; 
		wea =  1'b0;  
		addra = 32'd0;  
		dina  = 32'd0; 
		// Wait 100 ns for global reset to finish  
		#100;
		forever #15 clka = !clka;    
	end
	
	always @( posedge clka) begin       
		case(s)    
		0:    
			if(addra<98303) begin      
				wea <= 1'b1; 
				addra <= addra + 1'b1; 
				dina <= dina + 1'b1;     
			end  else begin      
				wea <= 1'b0; 
				addra <= 32'd0; 
				s <= 2'd1; 
			end    
		1:     
			if(addra<98303) begin     
				addra <= addra + 1'b1;     
			end else begin 
				s<=2'd2;
				addra <=0; 
			end    
		2:    
			if(addra<98303) begin      
				addra <= addra + 1'b1;   
			end    
		endcase
	end        
endmodule 