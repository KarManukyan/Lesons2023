`timescale 1 ns /1 ps
module counter_tb;
	parameter SIZE = 4;
	reg clk, reset, up, enable;
	wire [SIZE-1:0] count;
	wire pulse;

	counter c1(.up_down(up),.*);

	initial begin
		$dumpfile("v.vcd");
		$dumpvars();
	end
	
	initial begin
		reset = 1'b1;
		enable = 1'b1;
		up = 1'b1;
		clk = 1'b0; 
	end

	always #1 clk = ~clk;
	
	always @(*) begin
		#5 reset = 1'b0;
		enable = 1'b1;
		#30 up = 1'b1;
		$display("reset = %b,enable = %d, up = %b,count = %d", reset,enable,up,count);

		$display("reset = %b,enable = %d, up = %b,count = %d", reset,enable,up,count);
		#5 up = 1'b0;

		#30
		$display("reset = %b,enable = %d, up = %b,count = %d", reset,enable,up,count);
		$finish;
	end
	
endmodule
