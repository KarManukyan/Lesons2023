module add(in_1, in_2, cerry_in, out, cerry_out);

input in_1, in_2, cerry_in;
output out, cerry_out;

assign tmp = in_1 ^ in_2;
assign out = tmp ^ cerry_in;
assign cerry_out = (in_1 & in_2) | (tmp & cerry_in);

endmodule

module add_to(in_1, in_2, out);

input [7:0] in_1, in_2;
output [7:0] out;

wire wire_0, wire_1, wire_2, wire_3;

add add_0(.in_1(in_1[0]), .in_2(in_2[0]), .cerry_in(1'b0), .out(out[0]), .cerry_out(wire_0));
add add_1(.in_1(in_1[1]), .in_2(in_2[1]), .cerry_in(wire_0), .out(out[1]), .cerry_out(wire_1));
add add_2(.in_1(in_1[2]), .in_2(in_2[2]), .cerry_in(wire_1), .out(out[2]), .cerry_out(wire_2));
add add_3(.in_1(in_1[3]), .in_2(in_2[3]), .cerry_in(wire_2), .out(out[3]), .cerry_out(wire_3));
add add_4(.in_1(in_1[4]), .in_2(in_2[4]), .cerry_in(wire_3), .out(out[4]), .cerry_out(wire_4));
add add_5(.in_1(in_1[5]), .in_2(in_2[5]), .cerry_in(wire_4), .out(out[5]), .cerry_out(wire_5));
add add_6(.in_1(in_1[6]), .in_2(in_2[6]), .cerry_in(wire_5), .out(out[6]), .cerry_out(wire_6));
add add_7(.in_1(in_1[7]), .in_2(in_2[7]), .cerry_in(wire_6), .out(out[7]), .cerry_out(wire_7));

endmodule
