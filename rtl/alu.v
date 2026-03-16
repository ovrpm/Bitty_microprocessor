// =============================================================================
// Arithmetic Logic Unit (ALU)
// Performs arithmetic and bitwise operations on 16-bit operands
// =============================================================================
// Inputs:
//   in_a   - First 16-bit operand
//   in_b   - Second 16-bit operand  
//   sel    - Operation select (3-bit)
// Outputs:
//   alu_out - 16-bit result
// Operations:
//   000: Addition       100: Bitwise XOR
//   001: Subtraction    101: Left shift
//   010: Bitwise AND    110: Right shift
//   011: Bitwise OR     111: Comparison (0:=equal, 1:=greater, 2:=less)
// =============================================================================

module alu(
	input wire [15:0] in_a,
	input wire [15:0] in_b,
	input wire [2:0] sel,
	output reg [15:0] alu_out
);
	always @ (*) begin
		case (sel)
			3'b000: alu_out = in_a + in_b;
			3'b001: alu_out = in_a - in_b;
            3'b010: alu_out = in_a & in_b;
            3'b011: alu_out = in_a | in_b;
            3'b100: alu_out = in_a ^ in_b;
            3'b101: alu_out = in_a << in_b;
            3'b110: alu_out = in_a >> in_b;
            3'b111: begin
                if (in_a == in_b) begin
                    alu_out = 0;
                end else if (in_a > in_b) begin
                    alu_out = 1;
                end else begin
                    alu_out = 2;
                end       
            end
		endcase
	end

endmodule
