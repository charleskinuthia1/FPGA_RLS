`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:45:37 03/31/2016 
// Design Name: 
// Module Name:    TopModule 
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
module TopModule(clk,reset,resend,serialOut,x); // x output removed
	parameter SIZE = 8;
	parameter WIDTH = 32;
	parameter COMBSIZE = 4;
	parameter MESUREMENTS = 12288;
	parameter FINAL_DATA = 3072;
	
	input reset, clk, resend;
	output [WIDTH*SIZE-1:0] x;		// change to SIZE*packetsize
	output serialOut;
	
	// Top Level
	parameter BLOCK = 32;
	parameter RLS_LATENCY = (2 + 3*(1+SIZE/COMBSIZE))*BLOCK;
	localparam COLLECT_DELAY = 3; // ??
	parameter EOD = MESUREMENTS*4;//908304; // end of data multiply by 4 since it's 4bytes in 32bits
	parameter EOD_SEND = FINAL_DATA*4;//4000; // change to exact value later

		// regs
		reg [WIDTH-1:0] inputBuffer [BLOCK-1:0];
		reg [WIDTH*SIZE-1:0] outputBuffer;
		reg [3:0] wea;
		reg [WIDTH-1:0] addra;
		reg [WIDTH-1:0] dina;
		wire [WIDTH-1:0] douta;
	assign x = outputBuffer;

	// - states
	reg [2:0] STATE = 3'b000;
	reg [2:0] COLLECT_x0 = 3'b000;
	reg [2:0] COLLECT_KandA = 3'b001;
	reg [2:0] COLLECT_DATA = 3'b010;
	reg [2:0] RUN_RLS = 3'b011;
	reg [2:0] SAVE = 3'b100;
	reg [2:0] SEND = 3'b101;
	
	// RLS inputs
	reg restart_rls;
	wire [WIDTH*SIZE-1:0] x0;
	wire [WIDTH*SIZE*BLOCK-1:0] k_BLOCK;
	wire [WIDTH*SIZE*BLOCK-1:0] a_BLOCK;
	reg [WIDTH-1:0] k_BLOCKBuffer [SIZE*BLOCK-1:0];
	reg [WIDTH-1:0] a_BLOCKBuffer [SIZE*BLOCK-1:0];
	wire [WIDTH*BLOCK-1:0] b_BLOCK;
	wire [WIDTH*SIZE-1:0] x_rls; // output
	
	//save BRAM
	reg [WIDTH-1:0] save_write_addra;
	reg [WIDTH-1:0] save_read_addrb;
	reg [WIDTH-1:0] save_write_dina;
	reg [3:0] save_wea; 
	wire [WIDTH-1:0] dataOut;
	
	//transmition
	reg startByte=0;
	reg [7:0]TxD_data;
	parameter SIGNAL_DURATION = 395-1; 
	integer sendLatencyCounter =0;
	parameter SEND_LATENCY = (SIGNAL_DURATION+1)*11; // packet [start,8-bits,2-bits-stop]
	
	// counters
	reg triggerSignal = 0;
	integer dataCounter = 0;
	integer saveCounter = 0;
	integer rlsLatencyCounter = 0;
	integer idxWord=0;
	//K and A
	integer idxWordReg=0;
	wire [31:0] doutaK;
	wire [31:0] doutaA;
	reg [31:0] addraAK;
	// x0 buffer
	reg [WIDTH-1:0] x0Buffer [SIZE-1:0];
	integer x0Counter = 0;
	wire [32:0] doutax0;
	reg [32:0] addrax0;
	always @(posedge clk) begin
		if(reset)begin
			wea <=4'b0000;
			idxWord <=0;
			addra <= 0;
			dataCounter <= 0;
			rlsLatencyCounter <=0;
			restart_rls <=1;
			STATE <= 3'b000; // collect x
			save_write_addra<=0; //saving signals
			save_read_addrb<=0;
			save_write_dina<=0;
			save_wea<=0;
			sendLatencyCounter <=0; //sending
			startByte <=0;
			triggerSignal <= 0; //chipscope
			idxWordReg <= 0;		// a and k
			addraAK <=0;
			x0Counter <=0;
			addrax0 <=0;
		end else begin: state_machine
			case(STATE)
			
				COLLECT_x0:
					if(x0Counter <SIZE)begin
							if (x0Counter > 0) begin
								x0Buffer[x0Counter-1] <= doutax0;
							end else begin 
								x0Buffer[x0Counter] <= doutax0;
							end
								x0Counter <=x0Counter+1;
								addrax0 <= addrax0 + 4;
					end else begin
						x0Buffer[x0Counter-1] <= doutax0;
						STATE <= COLLECT_KandA;
					end
				
				COLLECT_KandA:
					if(idxWordReg < 512) begin
							if (idxWordReg > 0) begin
								k_BLOCKBuffer[idxWordReg-1] <= doutaK;
								a_BLOCKBuffer[idxWordReg-1] <= doutaA;
							end else begin 
								k_BLOCKBuffer[idxWordReg] <= doutaK;
								a_BLOCKBuffer[idxWordReg] <= doutaA;
								//inputBuffer[idxWord-1]<= douta; //avoid negative index
							end
								idxWordReg <=idxWordReg+1;
								addraAK <= addraAK + 4;
					end else begin
							k_BLOCKBuffer[idxWordReg-1] <= doutaK;
							a_BLOCKBuffer[idxWordReg-1] <= doutaA;
							STATE <= COLLECT_DATA;
					end
				
				COLLECT_DATA:
					if(idxWord < BLOCK) begin
							if (idxWord > 0) begin
								inputBuffer[idxWord-1]<= douta;
							end else begin 
								inputBuffer[0]<= douta;
								//inputBuffer[idxWord-1]<= douta; //avoid negative index
							end
								idxWord <=idxWord+1;
								addra <= addra + 4;
					end else begin
							inputBuffer[idxWord-1]<= douta;
							dataCounter <= dataCounter + 1;
							rlsLatencyCounter <= 0;
							STATE <= RUN_RLS;
					end
					
				RUN_RLS:
					if(rlsLatencyCounter < RLS_LATENCY) begin:keep_running
						//outputBuffer <= x_rls;//debug code
						if(restart_rls) begin:start_rls
							restart_rls <= 0;
						end else begin:increment_counter
							rlsLatencyCounter <= rlsLatencyCounter +1;
						end
					end else begin
						outputBuffer <= x_rls;										//RLS output
						restart_rls <=1;
						idxWord <= 0;
						addra <= BLOCK * (COLLECT_DELAY+1) * dataCounter;
						STATE <= SAVE;
					end
				SAVE:																		//takes SIZE+2 clks
					if(saveCounter < SIZE)begin									//takes SIZE+1
						if(save_wea == 4'b1111) begin:write_to_next_addr
							saveCounter<=saveCounter+1;
							save_write_addra<=save_write_addra+4;
							save_read_addrb<=save_write_addra; //previous address
						end else begin: turn_writing_mode_on
							save_wea<=4'b1111; // write all 32bits at once
							//triggerSignal <=1;	// turn the trigger on
							save_read_addrb<=save_write_addra;
						end
						if(saveCounter < SIZE-1)begin
							triggerSignal <=1;
						end else begin
							triggerSignal <=0;
						end
					end else begin:done_saving
						//triggerSignal <=0;
						saveCounter<=0;
						save_read_addrb<=save_write_addra;
						save_wea<=4'b0000; // stop writing
						if(addra<EOD) begin
							STATE <= COLLECT_DATA;
						end else begin
							save_read_addrb<=0;	// set address ready to transmit
							STATE <= SEND;
						end
					end
				SEND:
					if(resend)begin			//set addr of b to 0
						save_read_addrb<=0;
					end else begin
						if(save_read_addrb < EOD_SEND) begin
							if(startByte) begin
								startByte <= 0;
							end else	if(sendLatencyCounter<SEND_LATENCY)
								sendLatencyCounter <= sendLatencyCounter+1;
							else begin
								sendLatencyCounter <=0;
								TxD_data <= dataOut[19:12]; //hardcoded to take xxxx.xxxx
								startByte <= 1;
							end
						end else begin
							STATE <= STATE; // do nothing
						end
					end
			endcase
		end
		
	end

Bramx0 x0valueBram (
  .clka(clk), // input clka
  .wea(wea), // input [3 : 0] wea
  .addra(addrax0), // input [31 : 0] addra
  .dina(dina), // input [31 : 0] dina
  .douta(doutax0) // output [31 : 0] douta
);
	
BramK BramKvalue (
  .clka(clk), // input clka
  .wea(wea), // input [3 : 0] wea
  .addra(addraAK), // input [31 : 0] addra
  .dina(dina), // input [31 : 0] dina
  .douta(doutaK) // output [31 : 0] douta
);
Brama BramAvalue (
  .clka(clk), // input clka
  .wea(wea), // input [3 : 0] wea
  .addra(addraAK), // input [31 : 0] addra
  .dina(dina), // input [31 : 0] dina
  .douta(doutaA) // output [31 : 0] douta
);

	genvar aV;
	generate
	for(aV = 0; aV < BLOCK*SIZE; aV=aV+1) begin : connect_AValues
			assign a_BLOCK[WIDTH*aV +: WIDTH] = a_BLOCKBuffer[aV];
		end
	endgenerate
	genvar kV;
	generate
		for(kV = 0; kV < BLOCK*SIZE; kV=kV+1) begin : connect_kValues
			assign k_BLOCK[WIDTH*kV +: WIDTH] = k_BLOCKBuffer[kV];
		end
	endgenerate
	
	genvar i;
	generate
		for(i = 0; i < BLOCK; i=i+1) begin : connect_wire_to_rls
			assign b_BLOCK[WIDTH*i +: WIDTH] = inputBuffer[i];
		end
	endgenerate
	
	genvar ix0;
	generate
		for(ix0 = 0; ix0 < SIZE; ix0=ix0+1) begin : connect_x0
			assign x0[WIDTH*ix0 +: WIDTH] = x0Buffer[ix0];
		end
	endgenerate
	
	//SignalAKGen #(.WIDTH(WIDTH)) signalAKGen(.k(k_BLOCK),.a(a_BLOCK));
	
 BLOCK_MEM  Bram (.clka(clk), .wea(wea), .addra(addra), .dina(dina), .douta(douta));
	
	RLSBlock #(.WIDTH(WIDTH), .ITER(BLOCK), .SIZE(SIZE), .COMBSIZE(COMBSIZE)) //ready is not used
			rls(.clk(clk), .reset(restart_rls), .x0(x0), .k_SIZE(k_BLOCK), .b_SIZE(b_BLOCK), .a_SIZE(a_BLOCK), .x(x_rls), .ready());
	

	transmitter #(.SIGNAL_DURATION(SIGNAL_DURATION)) uart (.clk(clk),.start(startByte),.TxD_data(TxD_data),.TxD(serialOut));

	
 BRAM save_BRAM(
  .clka(clk),
  .wea(save_wea),
  .addra(save_write_addra),
  .dina(outputBuffer[WIDTH*saveCounter+:WIDTH]),
  .clkb(clk), 					// can be changed to read the data slower
  .rstb(reset),
  .addrb(save_read_addrb),
  .doutb(dataOut)
);

wire [35:0] CONTROL0;
ChipScopeResult chipScopeILA (
    .CONTROL(CONTROL0), // INOUT BUS [35:0]
    .CLK(clk), // IN
    .DATA(outputBuffer[WIDTH*saveCounter+:WIDTH]), // IN BUS [31:0]
    .TRIG0(triggerSignal) // IN BUS [0:0]
);

ChipScopeController controller (
    .CONTROL0(CONTROL0) // INOUT BUS [35:0]
);
/*
input clka;
input [3 : 0] wea;
input [31 : 0] addra;
input [31 : 0] dina;
input clkb;
input rstb;
input [31 : 0] addrb;
output [31 : 0] doutb;
*/			

	// debug signals
/*		wire signed [WIDTH-1:0] r10, r11, //r12, r13, r14,
					r21, //r22, r23, r24,
					r31,// r32, r33, r34,
					r41,
					r51,
					r61, 
					r71,
					r81,
					r91, 
					r101,
					r111,
					r121,
					r131,
					r141, 
					r151;
	

//debug
assign					r10 = x_rls[WIDTH*0+:WIDTH];
assign 					r11 = x_rls[WIDTH*1+:WIDTH]; //r12, r13, r14,
assign					r21= x_rls[WIDTH*2+:WIDTH]; //r22, r23, r24,
assign					r31= x_rls[WIDTH*3+:WIDTH];// r32, r33, r34,
assign					r41= x_rls[WIDTH*4+:WIDTH];
assign					r51= x_rls[WIDTH*5+:WIDTH];
assign					r61= x_rls[WIDTH*6+:WIDTH];
assign					r71= x_rls[WIDTH*7+:WIDTH];
assign					r81= x_rls[WIDTH*8+:WIDTH];
assign					r91= x_rls[WIDTH*9+:WIDTH];
assign					r101= x_rls[WIDTH*10+:WIDTH];
assign					r111= x_rls[WIDTH*11+:WIDTH];
assign					r121= x_rls[WIDTH*12+:WIDTH];
assign					r131= x_rls[WIDTH*13+:WIDTH];
assign					r141= x_rls[WIDTH*14+:WIDTH];
assign					r151= x_rls[WIDTH*15+:WIDTH];
*/

endmodule
