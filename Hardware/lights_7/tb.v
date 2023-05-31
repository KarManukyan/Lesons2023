`timescale 1 ns/1 ps
module tb;

reg clk;
reg rst;
reg [3:0] number;
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
  	.number(number),
  	.led_1(led_1),
  	.led_2(led_2),
  	.led_3(led_3),
  	.led_4(led_4),
  	.led_5(led_5),
  	.led_6(led_6),
  	.led_7(led_7)
);


always #10 clk = ~clk;


initial begin
	clk = 0;
	rst = 1;
 	number = 0;

  	#10 rst = 0;

  	#10 number = 1;
  	#10 number = 2;
  	#10 number = 3;
  	#10 number = 4;
  	#10 number = 5;
  	#10 number = 6;
  	#10 number = 7;
  	#10 number = 8;
  	#10 number = 9;
	
  	#100 $finish;
end

endmodule
