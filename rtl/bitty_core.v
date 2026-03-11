import "DPI-C" function void emuInit(input shortint instruction, input shortint value);
//import "DPI-C" function void GenerateInstruction();

module bitty_core(
    //made to drive some values into the registers
//    input test,

    input clk,
    input reset,

    input [15:0] instruction,
    input run,

    output reg done,
    //for testing only
    output reg [15:0] reg0_out,
    output reg [15:0] reg1_out,
    output reg [15:0] reg2_out,
    output reg [15:0] reg3_out,
    output reg [15:0] reg4_out,
    output reg [15:0] reg5_out,
    output reg [15:0] reg6_out,
    output reg [15:0] reg7_out,
    output reg [15:0] regc_extra_out,
    output reg [15:0] regs_extra_out,
    output reg [2:0] mux_sent,
    output reg [1:0] state,
    output reg [15:0] instruction_out
);
    //for testing only
    assign reg0_out = reg0_mux;
    assign reg1_out = reg1_mux;
    assign reg2_out = reg2_mux;
    assign reg3_out = reg3_mux;
    assign reg4_out = reg4_mux;
    assign reg5_out = reg5_mux;
    assign reg6_out = reg6_mux;
    assign reg7_out = reg7_mux;
    assign regc_extra_out = regc_out;
    assign regs_extra_out = regs_alua;
    assign mux_sent = mux_sel;
    assign alu_test = alu_regc;
    assign instruction_out = instruction;
    
    //mux wires
    reg [15:0] reg0_mux;
    reg [15:0] reg1_mux;
    reg [15:0] reg2_mux;
    reg [15:0] reg3_mux;
    reg [15:0] reg4_mux;
    reg [15:0] reg5_mux;
    reg [15:0] reg6_mux;
    reg [15:0] reg7_mux;
    reg [15:0] mux_out;
    reg [3:0] mux_sel;
    
    wire [15:0] regc_out;

    wire en0;
    wire en1;
    wire en2;
    wire en3;
    wire en4;
    wire en5;
    wire en6;
    wire en7;
    wire enc;
    wire ens;
    wire eni;

    wire [15:0] regs_alua;

    wire [2:0] sel_ctrl_alu;
    
    //not wire for procedural assignment
    wire [15:0] alu_regc;

    wire [15:0] inst_ctrl;
    wire [7:0] immediate;
    
    register reg0(regc_out, clk, reset, en0, reg0_mux);
    register reg1(regc_out, clk, reset, en1, reg1_mux);
    register reg2(regc_out, clk, reset, en2, reg2_mux);
    register reg3(regc_out, clk, reset, en3, reg3_mux);
    register reg4(regc_out, clk, reset, en4, reg4_mux);
    register reg5(regc_out, clk, reset, en5, reg5_mux);
    register reg6(regc_out, clk, reset, en6, reg6_mux);
    register reg7(regc_out, clk, reset, en7, reg7_mux);

    register reg_s(mux_out, clk, reset, ens, regs_alua);

    mux mux(reg0_mux, reg1_mux, reg2_mux, reg3_mux, reg4_mux, reg5_mux, reg6_mux, reg7_mux, {8'b00000000, immediate}, mux_sel, mux_out);

    alu alu(regs_alua, mux_out, sel_ctrl_alu, alu_regc);
    
    always @ (negedge done) begin
        //regc_out and instruction
        emuInit(instruction, regc_out);
//        $display("%d, %d, %d, %d, %d, %d, %d, %d", reg0_mux, reg1_mux, reg2_mux, reg3_mux, reg4_mux, reg5_mux, reg6_mux, reg7_mux);
    end
/*
    always @ (negedge done) begin
        instruction = GenerateInstruction();
    end
*/
    register reg_c(alu_regc, clk, reset, enc, regc_out);

    register reg_inst(instruction, clk, reset, eni, inst_ctrl);

    control_unit ctrl(inst_ctrl, sel_ctrl_alu, mux_sel, clk, reset, run, immediate, ens, enc, en0, en1, en2, en3,
    en4, en5, en6, en7, eni, done);

endmodule
