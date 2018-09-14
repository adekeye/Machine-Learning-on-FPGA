`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:43:05 05/14/2018
// Design Name:   Top
// Module Name:   C:/Users/olaolu-Goke/Desktop/CNN/CNN Verilog/CNN Verilog Phase 4/tb.v
// Project Name:  Pattern_Detection
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg clk;
	reg reset;
	reg enable;
	reg start;
	reg [12:0] addr;

	// Outputs
	wire [20:0] out;
	wire [20:0] maxpool;
	wire done;

	// Instantiate the Unit Under Test (UUT)
	Top uut (
		.clk(clk), 
		.reset(reset), 
		.enable(enable), 
		.start(start), 
		.addr(addr), 
		.out(out), 
		.maxpool(maxpool), 
		.done(done)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		enable = 0;
		start = 0;
		addr = 0;
		
		

		// Wait 100 ns for global reset to finish
		#100;
 
 

		// Add stimulus here
end
always #5 clk = ~clk;
	
      
endmodule

