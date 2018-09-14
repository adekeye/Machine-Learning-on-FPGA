`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:31:39 05/05/2018 
// Design Name: 
// Module Name:    Addr_ctrl2 
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
module Addr_ctrl2(
	input clk,reset,enable,
	input [8:0] SI_Height_W,
	input [8:0] LI_Height_W,
	input [8:0] SI_Weight_W,
	input [8:0] LI_Weight_W,
	input [9:0] count1,
	input [8:0] element,
	output [17:0] address_lg,
	output reg conv_done
    );
	
	wire [8:0] addrx, addry;
	reg [8:0] ADDRX, ADDRY;
	reg [8:0] OFFSET_X1, OFFSET_Y1, OFFSET_X2, OFFSET_Y2;
	wire [9:0] limit1;
	wire [9:0] limit2;
	assign limit1 = SI_Height_W*SI_Weight_W-1;
	assign limit2 = element*element-1;
	assign addrx = ADDRX + OFFSET_X1 + OFFSET_X2;
	assign addry = ADDRY + OFFSET_Y1 + OFFSET_Y2;
	assign address_lg = addrx + addry*LI_Weight_W;
	
	reg [9:0] count2;
	
	always @(posedge clk) begin
		if (reset) begin
			count2 <= 0;
		end
		else if (enable) begin
			if(count1 == limit1) begin
				if(count2 < limit2) begin
					count2 <= count2 + 1;
				end
				else 
					count2 <= 0;
			end
		end
	end
	
	
	always@(posedge clk) begin
		if(reset) begin
			ADDRX <= 0;
			ADDRY <= 0;
			OFFSET_X1 <= 0;
			OFFSET_Y1 <= 0;
			OFFSET_X2 <= 0;
			OFFSET_Y2 <= 0;
			conv_done <= 0; 
		end
		else if(enable) begin
			// Check if we should increment addrx
			if(ADDRX < (SI_Weight_W-1)) begin
				ADDRX <= ADDRX + 1;
				conv_done <= 0;
			end
			else begin
				// If addrx gets reset, we need to increment y value
				ADDRX <= 0;
				if(ADDRY < (SI_Height_W-1)) begin
					ADDRY <= ADDRY + 1;
				end
				else begin
					ADDRY <= 0;
				end
			end
			// Control offsets
			if (count1==limit1) begin
				//If addry needs to be reset, then we need to update offset_x
				if(OFFSET_X1 < element-1) begin
					OFFSET_X1 <= OFFSET_X1 + 1;
				end
				else begin
					OFFSET_X1 <= 0;
					// IF OFFSET_X is resetted, then OFFSET_Y needs to be incremented
					if(OFFSET_Y1 < element-1) begin
						OFFSET_Y1 <= OFFSET_Y1 + 1;
					end
					else begin
						OFFSET_X1 <= 0;
						OFFSET_Y1 <= 0;
					end
				end
				if (count2==limit2) begin
					if(OFFSET_X2 < (LI_Weight_W-SI_Weight_W-element*2+1)) begin
						OFFSET_X2 <= OFFSET_X2 + element;
					end
					else begin
						OFFSET_X2 <= 0;
						if(OFFSET_Y2 < (LI_Height_W-SI_Height_W-element*2+1)) begin
							OFFSET_Y2 <= OFFSET_Y2 + element;
						end
						else begin
							ADDRX <= 0;
							ADDRY <= 0;
							OFFSET_X1 <= 0;
							OFFSET_Y1 <= 0;
							OFFSET_Y2 <= 0;
							conv_done <= 1;
						end
					end
				end
			end
		end
	end
endmodule
