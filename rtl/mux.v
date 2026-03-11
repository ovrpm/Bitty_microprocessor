module mux(
    input [15:0] in0, 
    input [15:0] in1,
    input [15:0] in2,
    input [15:0] in3,
    input [15:0] in4,
    input [15:0] in5,
    input [15:0] in6,
    input [15:0] in7,
    //input for immediate instructions
    input [15:0] in8,

    input [3:0] mux_sel,

    output reg [15:0] mux_out
);

    always @ (*) begin
        case (mux_sel)
            4'b0000: mux_out = in0;
            4'b0001: mux_out = in1;
            4'b0010: mux_out = in2;
            4'b0011: mux_out = in3;
            4'b0100: mux_out = in4;
            4'b0101: mux_out = in5;
            4'b0110: mux_out = in6;
            4'b0111: mux_out = in7;
            4'b1000: mux_out = in8;
            default: mux_out = 0;
        endcase
    end

endmodule    
