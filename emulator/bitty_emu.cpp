#include <vector>
#include <iostream>
#include <cstdint>
#include "bitty_emu.h"

BittyEmulator::BittyEmulator() {
    registers.assign(8, 0);
}

uint16_t BittyEmulator::Evaluate(uint16_t instruction){
    num_tests++;

    int expected_value = 0;
    int rx = (instruction >> 13) & 0x7; // extract bits 15-13 (rx)
    int ry = (instruction >> 10) & 0x7; // extract bits 12-10 (ry)
    int immediate = (instruction >> 5) & 0xFF; // bits 12-5 (immediate)
    int format = instruction & 0x1; // bit0
    int alu_sel = (instruction >> 2) & 0x7; // extract bits 4-2 (alu select)

    if (format == 0){ //two registers
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
    }else if (format == 1){ // immediate 
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

    return (uint16_t)expected_value;
}

uint16_t BittyEmulator::GetRegisterValue(uint16_t reg_num){
    return registers[reg_num];
}

void BittyEmulator::printStats(){
    std::cout << "Tests passed: " << num_tests << '\n';
}
