`timescale 1 ns/1 ps
module top();

reg [7:0] in_1;
reg [7:0] in_2;
wire [7:0] out;

add_to test(.in_1(in_1), .in_2(in_2), .out(out));

initial begin
	$dumpfile("sum.vcd");
	$dumpvars();
end

initial begin

    in_1 = 1; 
    in_2 = 1; 
    #5;
    $display("%d + %d =%d", in_1, in_2, out);
    in_1 = 12; 
    in_2 = 13; 
    #5;
    $display("%d + %d =%d", in_1, in_2, out);
end

endmodule
