`timescale 1 ns/1 ps
module tb;

reg [3:0] r1, r2, op_code;
wire [7:0] out;

top t( r1, r2, op_code, out);

initial begin
	$dumpfile("tb.vcd");
	$dumpvars();
end

initial begin 
	r1  = 4'b0;
	r2  = 4'b0;
	op_code = 4'b1111;
end

always @(*) begin 
        $display ("time=%0t r1=%b r2=%b out=%b ", $time, r1, r2, out);
	r1  = 4'b0111;
	r2  = 4'b0100;
	op_code = 4'b0000;
        $display ("time=%0t r1=%b r2=%b out=%b ", $time, r1, r2, out);
	#15;
	r1  = 4'b1010;
	r2  = 4'b0001;
	op_code = 4'b0001;
        $display ("time=%0t r1=%b r2=%b out=%b ", $time, r1, r2, out);
	#50;
	$finish;
end

endmodule
