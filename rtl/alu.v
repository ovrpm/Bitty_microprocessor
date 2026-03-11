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
