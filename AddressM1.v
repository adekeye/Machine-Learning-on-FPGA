`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:12:47 05/05/2018 
// Design Name: 
// Module Name:    Addr_ctrl 
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
module Addr_ctrl (
  	input clk,reset,enable,
	input [8:0] SI_Height_W,LI_Height_W,SI_Weight_W,LI_Weight_W,
	input [9:0] count,
	output [17:0] address_lg,
	output reg conv_done
    );
	 
	wire [8:0] addrx, addry;
	reg [8:0] ADDRX, ADDRY;
	reg [8:0] OFFSET_X, OFFSET_Y;
	assign addrx = ADDRX + OFFSET_X;
	assign addry = ADDRY + OFFSET_Y;
	assign address_lg = addrx + addry*LI_Weight_W;
	
	// Control the larger array address
	always@(posedge clk) begin
		if(reset) begin
			ADDRX <= 0;
			ADDRY <= 0;
			OFFSET_X <= 0;
			OFFSET_Y <= 0;
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
			if (count==(SI_Height_W*SI_Weight_W-1)) begin
				//If addry needs to be reset, then we need to update offset_x
				if(OFFSET_X < (LI_Weight_W-SI_Weight_W)) begin
					OFFSET_X <= OFFSET_X + 1;
				end
				else begin
					OFFSET_X <= 0;
					// IF OFFSET_X is resetted, then OFFSET_Y needs to be incremented
					if(OFFSET_Y < (LI_Height_W-SI_Height_W)) begin
						OFFSET_Y <= OFFSET_Y + 1;
					end
					else begin
						// We have finished the run. Reset all values
						ADDRX <= 0;
						ADDRY <= 0;
						OFFSET_X <= 0;
						OFFSET_Y <= 0;
						conv_done <= 1;
					end
				end
			end
		end
	end
endmodule

