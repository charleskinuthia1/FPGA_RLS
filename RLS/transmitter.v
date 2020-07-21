`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:27:07 04/10/2016 
// Design Name: 
// Module Name:    transmitter 
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
module transmitter(clk,start,TxD_data,TxD);
	
	//parameter Baud = 115200;
	parameter SIGNAL_DURATION = 290-1;//(1/Baud)*10^9/period // 0 -> same as clkFreq
	localparam BYTE = 8;		// changing this requires changinother stuff too.
	
	input clk,start;
	input [BYTE-1:0] TxD_data;
	output TxD;
	
	reg [3:0] TxD_state = 0;
	reg [7:0] TxD_shift = 0;
	
	integer signalDurationCounter =0;
	wire BitTick = (signalDurationCounter == SIGNAL_DURATION);
	
	always @(posedge clk)
	begin
		if(signalDurationCounter < SIGNAL_DURATION) begin
			signalDurationCounter <= signalDurationCounter +1;
		end else begin
			signalDurationCounter <=0;
		end
		if(start)begin
			signalDurationCounter <=0;
			TxD_shift <= TxD_data;
		end else
		if(TxD_state[3] & BitTick)
			TxD_shift <= (TxD_shift >> 1);

		case(TxD_state)													// based on tutorial
			4'b0000: if(start) TxD_state <= 4'b0100;
			4'b0100: if(BitTick) TxD_state <= 4'b1000;  // start bit
			4'b1000: if(BitTick) TxD_state <= 4'b1001;  // bit 0
			4'b1001: if(BitTick) TxD_state <= 4'b1010;  // bit 1
			4'b1010: if(BitTick) TxD_state <= 4'b1011;  // bit 2
			4'b1011: if(BitTick) TxD_state <= 4'b1100;  // bit 3
			4'b1100: if(BitTick) TxD_state <= 4'b1101;  // bit 4
			4'b1101: if(BitTick) TxD_state <= 4'b1110;  // bit 5
			4'b1110: if(BitTick) TxD_state <= 4'b1111;  // bit 6
			4'b1111: if(BitTick) TxD_state <= 4'b0010;  // bit 7
			4'b0010: if(BitTick) TxD_state <= 4'b0011;  // stop1
			4'b0011: if(BitTick) TxD_state <= 4'b0000;  // stop2
			default: if(BitTick) TxD_state <= 4'b0000;
		endcase
	end
	
	assign TxD = (TxD_state<4) | (TxD_state[3] & TxD_shift[0]);  // put together the start, data and stop bits

endmodule
