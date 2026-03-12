module control_unit(
    input [15:0] instruction,

    //outputs to alu
    output reg [2:0] alu_sel,

    //out for mux
    output reg [3:0] mux_sel,

    input clk,
    input reset,
    input run,

    output reg [7:0] immediate,

    output reg en_s,
    output reg en_c,
    output reg en_0,
    output reg en_1,
    output reg en_2,
    output reg en_3,
    output reg en_4,
    output reg en_5,
    output reg en_6,
    output reg en_7,
    output reg en_i,

    output reg done
);

    parameter state0 = 2'b01;
    parameter state1 = 2'b10;
    parameter state2 = 2'b11;
    //state for instruction
    parameter start = 2'b00;


    reg [1:0] current_state, next_state;

    //state register sequential logic
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            current_state <= start;
        end else if (run) begin
            current_state <= next_state;
        end
    end

    //next state decode logic
    always @(*) begin
        case(current_state)
            start: next_state = state0;
            state0: next_state = state1;
            state1: next_state = state2;
            state2: next_state = start;
        endcase
    end

    //output logic
    always @(*) begin
        //reset
        en_s = 0;
        en_c = 0;
        en_i = 0;
        en_0 = 0;
        en_1 = 0;
        en_2 = 0;
        en_3 = 0;
        en_4 = 0;
        en_5 = 0;
        en_6 = 0;
        en_7 = 0;
        done = 0;

        case(current_state)
            start: begin
                en_i = 1;
            end
            state0: begin
                en_s = 1;
                mux_sel = {1'b0, instruction[15:13]};
            end
            state1: begin
                case(instruction[0])
                    //immediate
                    1: begin
                        en_s = 0;
                        en_c = 1;
                        alu_sel = instruction[4:2];
                        mux_sel = 4'b1000;
                        immediate = instruction[12:5];
                    end
                    //2 registers
                    0: begin
                        en_s = 0;
                        en_c = 1;
                        alu_sel = instruction[4:2];
                        mux_sel = {1'b0, instruction[12:10]};
                    end
                    /*
                    default: begin
                        en_s = 0;
                        en_c = 1;
                        alu_sel = instruction[4:2];
                    end
                    */
                endcase
            end
            state2: begin
                en_c = 0;
                case(instruction[15:13])
                    3'b000: en_0 = 1;
                    3'b001: en_1 = 1;
                    3'b010: en_2 = 1;
                    3'b011: en_3 = 1;
                    3'b100: en_4 = 1;
                    3'b101: en_5 = 1;
                    3'b110: en_6 = 1;
                    3'b111: en_7 = 1;
                endcase
                done = 1;
            end
        endcase
    end

endmodule
