`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:55:36 04/01/2016
// Design Name:   BLOCK_MEM
// Module Name:   C:/Users/Charlz/Documents/3_KTH/KEX_Xillinc/RLS/BRAM_tb.v
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

module BRAM_tb;
	parameter WIDTH = 32;
	parameter SIZE_BLOCK = 10;

	// Inputs
	reg clk;
	reg wea;
	reg [31:0] addra;
	reg signed [31:0] dina;

	// Outputs
	wire [31:0] douta;

	// Instantiate the Unit Under Test (UUT)
	BLOCK_MEM uut (
		.clka(clk), 
		.wea(wea), 
		.addra(addra), 
		.dina(dina), 
		.douta(douta)
	);
	
	always begin
		#5 clk =~clk;
	end
	
	reg [WIDTH*SIZE_BLOCK-1:0]counter;
	integer z =0;
	task initCounter;
		begin
			for(z=0; z<SIZE_BLOCK; z=z+1) begin
				counter[WIDTH*z+:WIDTH] = z;//2**16*z; // [0,1,2,...9]
			end
			z=1;
		end	
	endtask
	
/*
input clka;
input [3 : 0] wea;
input [31 : 0] addra;
input [31 : 0] dina;
output [31 : 0] douta;*/
integer memLatencyCounter = 2;
reg [1:0]s;
initial begin
		// Initialize Inputs
		clk = 0;
		wea = 1;
		addra = 0;
		dina = 0;
		s=0;
		memLatencyCounter = 2;
end
reg [31:0] rls_input;
always @( posedge clk) begin       
		case(s)    
		0:    
			if(addra<98303) begin  
				addra <= addra + 1'b1; 
				dina <= dina + 1'b1;
/*				if(memLatencyCounter <3) begin
					memLatencyCounter <= memLatencyCounter +1;
				end else begin
					rls_input<= douta;
					memLatencyCounter <= 0;
				end*/
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



/*	initial begin
		// Initialize Inputs
		clk = 0;
		wea = 0;
		addra = 0;
		dina = 0;

		// Wait 100 ns for global reset to finish
		#100;
		initCounter;
		@(posedge clk); //@(posedge clk);
		wea <=1;
		addra <= 32'b0;
		dina <= 32'b0;//counter[WIDTH*0+:WIDTH];
		
		@(posedge clk); //@(posedge clk);
		wea <=1;
		addra <= 32'b1;
		dina <= 32'b1;//counter[WIDTH*1+:WIDTH];
		
		@(posedge clk); //@(posedge clk);
		wea <=1;
		addra <= 32'b10;
		dina <= 32'b10;//counter[WIDTH*2+:WIDTH];
		
		@(posedge clk); //@(posedge clk);
		wea <=1;
		addra <= 32'b011;
		dina <= counter[WIDTH*3+:WIDTH];
		
		@(posedge clk); //@(posedge clk);
		wea <=1;
		addra <= 32'b100;
		dina <= counter[WIDTH*4+:WIDTH];
		
		@(posedge clk); //@(posedge clk);
		wea <=1;
		addra <= 32'b101;
		dina <= counter[WIDTH*5+:WIDTH];
		
		@(posedge clk); //@(posedge clk);
		wea <=1;
		addra <= 6;
		dina <= counter[WIDTH*6+:WIDTH];
		
		@(posedge clk); //@(posedge clk);
		wea <=1;
		addra <= 7;
		dina <= counter[WIDTH*7+:WIDTH];
		
		@(posedge clk); //@(posedge clk);
		wea <=1;
		addra <= 8;
		dina <= counter[WIDTH*8+:WIDTH];
		
		@(posedge clk); //@(posedge clk);
		wea <=1;
		addra <= 9;
		dina <= counter[WIDTH*9+:WIDTH];
		
		@(posedge clk); //@(posedge clk);
		wea <= 0;
		addra <= 0;
		dina <= counter[WIDTH*9+:WIDTH];
		//dina <= counter[WIDTH*10+:WIDTH];
		
		@(posedge clk); //@(posedge clk);
		//wea <=0;
		addra <= 1;
		dina <= counter[WIDTH*6+:WIDTH];
		//dina <= counter[WIDTH*11+:WIDTH];
		
		@(posedge clk); //@(posedge clk);
		addra <= 2;
		dina <= counter[WIDTH*5+:WIDTH]; 
		
		@(posedge clk); //@(posedge clk);
		addra <= 3;
		dina <= counter[WIDTH*4+:WIDTH];
		// Add stimulus here

	end 
*/      
endmodule

