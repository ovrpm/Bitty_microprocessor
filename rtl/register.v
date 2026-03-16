// =============================================================================
// 16-bit Register
// Edge-triggered register with synchronous reset and enable
// =============================================================================
// Inputs:
//   d_in  - 16-bit data input
//   clk   - Clock (positive edge triggered)
//   reset - Synchronous reset (active high)
//   en    - Enable (active high)
// Outputs:
//   d_out - 16-bit data output
// =============================================================================

module register(
    input [15:0] d_in,
    input clk,
    input reset,
    input en,
    output reg [15:0] d_out
);

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            d_out <= 16'b0;
        end else if (en) begin
            d_out <= d_in;
        end
    end

endmodule
