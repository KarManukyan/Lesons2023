module top(r1, r2, op_code, out);

input [3:0] r1, r2, op_code;
output reg [7:0] out;

always @(*) 
begin 
	case(op_code)
		4'b0000:
			out = r1 + r2;
	        4'b0001:
			out = r1 - r2;
		4'b0010:
			out = r1 >> 2;
		4'b0011:
			out = r1 ^ r2;
		4'b0100:
			out = r1 * r2;
		default:
			out = 0;
	endcase
end

endmodule
