
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Adekeye 
// Engineer: Adegoke
// 
// Create Date:    17:11:45 05/15/2017 
// Design Name: 
// Module Name:    vgaProject 
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
module top_vga(
  		 input clk,reset,start,							
	output reg [11:0] vga,				
	output VS,HS, done,								
	output [9:0] displ_vga,
	output vFree,
	output hFree);

	assign displ_vga = addr_wr[12:4];
	// Addresses
	wire [10:0] x,y; 
	wire [12:0] coordinate;
	assign coordinate = (y-199)*62 + (x-289);
		
	vgaPulse Horizontal(.clk(pixelClk),
						  .stage1(22'd96),					
						  .stage2(22'd144),
						  .stage3(22'd784), 
						  .endStage(22'd800), 
						  .syncPulse(HS),
						  .free(hFree),		
						  .position(x)
						  );				// 


	vgaPulse Vertical(.clk(HS),	
						.stage1(22'd6),			// See reference manual for values
						.stage2(22'd35), //35
						.stage3(22'd515),//515
						.endStage(22'd525), //525
						.syncPulse(VS),
						.free(vFree),			// Can display on screen
						.position(y)
						);				// Instantiate module vgaPulse
	
	clockDiv pixel(.clk(clk),
					.div(32'd4),			// We need 20Mhz but system clock runs at 100Mhz
					.out(pixelClk)			// clock at 20Mhz
					);			// Instantiate module clockDiv

	
	parameter [3:0] idle = 0, comp = 1, comp1 = 2, comp2 = 3, read = 4;
	reg [3:0] current_state, next_state;
	
	// Control Signals
	wire done_comp;
	reg done_cmp;
	reg en_rd, en_cmp;
	
	assign done = done_cmp;
	// Addresses
	reg [12:0] addr_rd, addr_wr;
	
	wire [19:0] out_pl, max_pl;
	
	// Output
	reg [11:0] vga_pool [0:6044];

	Top conv (
    .clk(clk), 
    .reset(reset), 
    .start(start), 
    .enable(en_rd), 
    .addr(addr_rd), 
    .out(out_pl), 
    .maxpool(max_pl), 
    .done(done_comp)
    );
	
	
	 always@(posedge clk) begin
		if (reset) begin
			addr_rd <= 0;
			addr_wr <= 0;
			done_cmp <= 0;
		end
		else if (en_rd) begin
			if(addr_rd < 6044) begin
				addr_rd <= addr_rd + 1;
				addr_wr <= addr_rd;
			end
			else begin
				addr_wr <= addr_rd;
				addr_rd <= 0;
				done_cmp <= 1;
			end
		end
	 end
	 
	 
	 wire [19:0] threshold;
	 
	 
	 
	 
	
	 assign threshold = (max_pl >> 1) + (max_pl >> 3);
	 
	 always@(posedge clk) begin
		if (en_cmp) begin
			if (out_pl > threshold)
				vga_pool[addr_wr] = 12'b000000000000;
			else
				vga_pool[addr_wr] = 12'b111111111111;	
		end
	 end
		
	always@(posedge clk) begin
		if(reset) begin
			current_state <= idle;
		end
		else begin
			current_state <= next_state;
		end
	end	
	
	always@(posedge clk) begin
		if(reset) begin
			en_rd <= 0;
			en_cmp <= 0;
			next_state <= idle;
		end
		case(current_state)
			idle: begin
				if(start) 
					next_state <= comp;
				else
					next_state <= idle;
			end
			comp: begin
				if(done_comp)
					next_state <= comp1;
				else
					next_state <= comp;
			end
			comp1: begin
				en_rd <= 1;
				next_state <= comp2;
			end
			comp2: begin
				en_cmp <= 1;
				if(done_cmp) begin
					next_state <= read;
					en_rd <= 0;
				end
				else
					next_state <= comp2;
			end
			read: begin
				en_cmp <= 0;
				next_state <= read;
			end
		endcase
	end
	
	always @(posedge clk) begin
		
		if ((x<351)&&(x>=289)&&(y<281)&&(y>=199)&&(done_cmp))
			vga <= vga_pool[coordinate];
		else
			vga <= 0; 
		
	end


endmodule


