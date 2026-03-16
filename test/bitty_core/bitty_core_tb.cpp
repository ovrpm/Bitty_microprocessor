#include "Vbitty_core.h"
#include <iostream>
#include <ctime>

int main(){
    Vbitty_core* dut = new Vbitty_core();

    srand(time(nullptr));

    int rand16bit = rand();
    int num_tests = 1000000;

    //reset everything
    dut->reset = 1;
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
    dut->reset = 0;
         
    int rx, ry, alu_sel, expected_value, format, immediate;

    //array of values in registers 0-7
    int registers[8];
    for (int i = 0; i < 8; i++){
        registers[i] = 0;
    }

    dut->run = 1;
    dut->instruction = rand16bit;
    dut->eval();

    std::cout << "inst = " << (int)dut->instruction_out << std::endl;

    //random tests
    for (int i = 0; i < num_tests; i++){
        //state0 -> state1
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();

        rx = (rand16bit >> 13) & 0b111; // extract bits 15-13 (rx)
        ry = (rand16bit >> 10) & 0b111; // extract bits 12-10 (ry)
        alu_sel = (rand16bit >> 2) & 0b111; // extract bits 6-3 (alu select)
        format = rand16bit & 0b1;
        immediate = (rand16bit >> 5) & 0b11111111;

        //state0 -> state1
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval(); 

        //state1 -> state2
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();

        //testing if the rx recieved the correct value
        //alu selects
        if (format == 0){
            if (alu_sel == 0){
                expected_value = (registers[rx] + registers[ry]) % 65536;
            }else if (alu_sel == 1){
                expected_value = registers[rx] - registers[ry];
                if (expected_value < 0) expected_value += 65536;
            }else if (alu_sel == 2){
                expected_value = registers[rx] & registers[ry]; 
            }else if (alu_sel == 3){ 
                expected_value = registers[rx] | registers[ry];
            }else if (alu_sel == 4){
                expected_value = registers[rx] ^ registers[ry];
            }else if (alu_sel == 5){
                if (registers[ry] > 15) expected_value = 0;
                else expected_value = (registers[rx] << registers[ry]) % 65536;
            }else if (alu_sel == 6){
                if (registers[ry] > 15) expected_value = 0;
                else expected_value = registers[rx] >> registers[ry];
            }else if (alu_sel == 7){
                if (registers[rx] == registers[ry]) expected_value = 0;
                else if (registers[rx] > registers[ry]) expected_value = 1;
                else expected_value = 2;
            }
        }else if (format == 1){
            if (alu_sel == 0){
                expected_value = (registers[rx] + immediate) % 65536;
            }else if (alu_sel == 1){
                expected_value = registers[rx] - immediate;
                if (expected_value < 0) expected_value += 65536;
            }else if (alu_sel == 2){
                expected_value = registers[rx] & immediate; 
            }else if (alu_sel == 3){ 
                expected_value = registers[rx] | immediate;
            }else if (alu_sel == 4){
                expected_value = registers[rx] ^ immediate;
            }else if (alu_sel == 5){
                if (immediate > 15) expected_value = 0;
                else expected_value = (registers[rx] << immediate) % 65536;
            }else if (alu_sel == 6){
                if (immediate > 15) expected_value = 0;
                else expected_value = registers[rx] >> immediate;
            }else if (alu_sel == 7){
                if (registers[rx] == immediate) expected_value = 0;
                else if (registers[rx] > immediate) expected_value = 1;
                else expected_value = 2;
            }
        }

        registers[rx] = expected_value;

        //state2 -> state0
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();

        //checking values of all registers
        if ((int)dut->reg0_out == registers[0] && (int)dut->reg1_out == registers[1] && (int)dut->reg2_out ==
            registers[2] && (int)dut->reg3_out == registers[3] && (int)dut->reg4_out == registers[4] &&
            (int)dut->reg5_out == registers[5] && (int)dut->reg6_out == registers[6] && (int)dut->reg7_out ==
            registers[7]){
            //std::cout << "Ok" << std::endl;
        }else{
            std::cout << "Fail!" << std::endl;

            //registers
            std::cout << "dut:" << std::endl;
            std::cout << (int)dut->reg0_out << ' ' << (int)dut->reg1_out << ' ' << (int)dut->reg2_out << ' ' << (int)dut->reg3_out <<
            ' ' << (int)dut->reg4_out << ' ' << (int)dut->reg5_out << ' ' << (int)dut->reg6_out << ' ' <<
            (int)dut->reg7_out << std::endl;

            //expected registers
            std::cout << "expected:" << std::endl;
            std::cout << registers[0] << ' ' << registers[1] << ' ' << registers[2] << ' ' << registers[3] << ' ' <<
            registers[4] << ' ' << registers[5] << ' ' << registers[6] << ' ' << registers[7] << std::endl;

            //used instruction
            std::cout << (int)dut->instruction << std::endl;

            //values in regs and regc
            std::cout << "reg_s out = " << (int)dut->regs_extra_out << " regc out = " << (int)dut->regc_extra_out <<
            std::endl;
            return 0;
        }

        rand16bit = rand() % 65536;
        if(rand16bit % 4 == 3) rand16bit -= 2;
        else if (rand16bit % 4 == 2) rand16bit -= 2;
        dut->instruction = rand16bit;
        dut->eval();

        std::cout << "--------------------------------------------------------" << std::endl;
    }
    std::cout << "All " << num_tests << " tests passed!" << std::endl;
}
