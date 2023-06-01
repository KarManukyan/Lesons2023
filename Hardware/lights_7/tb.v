`timescale 1 ns/1 ps
module tb;

reg clk;
reg rst;
wire led_1;
wire led_2;
wire led_3;
wire led_4;
wire led_5;
wire led_6;
wire led_7;

initial begin
	$dumpfile("tb.vcd");
	$dumpvars();
end

light_7 light (
  	.clk(clk),
  	.rst(rst),
  	.led_1(led_1),
  	.led_2(led_2),
  	.led_3(led_3),
  	.led_4(led_4),
  	.led_5(led_5),
  	.led_6(led_6),
  	.led_7(led_7)
);


always #3 clk = ~clk;


initial begin
	clk = 0;
	rst = 1;
  	#3 rst = 0;
	
  	#100 $finish;
end

endmodule
