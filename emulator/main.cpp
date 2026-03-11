#include <iostream>
#include <vector>
#include "bitty_emu.h"

int main(){
    BittyEmulator emulator;

    uint16_t rand16bit = 0x1234;
    uint16_t expected_value;

    uint16_t rx = (rand16bit >> 13) & 0x7; // extract bits 15-13 (rx)
    uint16_t ry = (rand16bit >> 10) & 0x7; // extract bits 12-10 (ry)
    uint16_t alu_sel = (rand16bit >> 3) & 0xF; // extract bits 6-3 (alu select)
    uint16_t alu_mode = (rand16bit >> 2) & 0x1; // extract bit 2 (mode bit)
        
/*        
    if (alu_sel == 0){
        expected_value = (emulator.GetRegisterValue(rx) + emulator.GetRegisterValue(rx)) % 65536;
    }else if (alu_sel == 1){
        expected_value = emulator.GetRegisterValue(rx) - emulator.GetRegisterValue(ry);
        if (expected_value < 0) expected_value += 65536;
    }else if (alu_sel == 2){
        expected_value = emulatorGetRegisterValue(rx) & emulator.GetRegisterValue(ry); 
    }else if (alu_sel == 3){ 
        expected_value = emulatorGetRegisterValue(rx) | emulator.GetRegisterValue(ry);
    }else if (alu_sel == 4){
        expected_value = emulator.GetRegisterValue(rx) ^ emulator.GetRegisterValue(ry);
    }else if (alu_sel == 5){
        if (emulator.GetRegisterValue(ry) > 15) expected_value = 0;
        else expected_value = (emulator.GetRegisterValue(rx) << emulator.GetRegisterValue(ry)) % 65536;
    }else if (alu_sel == 6){
        if (emulator.GetRegisterValue(ry) > 15) expected_value = 0;
        else expected_value = emulator.GetRegisterValue(rx) >> emulator.GetRegisterValue(ry);
    }else if (alu_sel == 7){
        if (emulator.GetRegisterValue(rx) == emulator.GetRegisterValue(ry)) expected_value = 0;
        else if (emulator.GetRegisterValue(rx) > emulator.GetRegisterValue(ry)) expected_value = 1;
        else expected_value = 2;
    }
*/

    if (alu_mode == 0){ // arithmetic
        if (alu_sel == 0){
            expected_value = emulator.GetRegisterValue(rx);
        }else if (alu_sel == 1){
            expected_value = emulator.GetRegisterValue(rx) | emulator.GetRegisterValue(ry);
        }else if (alu_sel == 2){
            expected_value = emulator.GetRegisterValue(rx) | (65535 - emulator.GetRegisterValue(ry)); 
        }else if (alu_sel == 3){
            expected_value = 1;
        }else if (alu_sel == 4){
            expected_value = emulator.GetRegisterValue(rx) | emulator.GetRegisterValue(rx) & (65535 - emulator.GetRegisterValue(ry));
        }else if (alu_sel == 5){
            expected_value = (emulator.GetRegisterValue(rx) | emulator.GetRegisterValue(ry)) +
            (emulator.GetRegisterValue(rx) & (65535 - emulator.GetRegisterValue(ry)));
            if (expected_value > 65535) expected_value = expected_value % 65536;
        }else if (alu_sel == 6){
            expected_value = emulator.GetRegisterValue(rx) - emulator.GetRegisterValue(ry) - 1;
            if (expected_value < 0) expected_value += 65536;
        }else if (alu_sel == 7){
            expected_value = (emulator.GetRegisterValue(rx) & (65535 - emulator.GetRegisterValue(ry))) - 1;
            if (expected_value < 0) expected_value += 65536;
        }else if (alu_sel == 8){
            expected_value = emulator.GetRegisterValue(rx) + (emulator.GetRegisterValue(rx) & emulator.GetRegisterValue(ry));
            if (expected_value > 65535) expected_value = expected_value % 65536;
        }else if (alu_sel == 9){
            expected_value = emulator.GetRegisterValue(rx) + emulator.GetRegisterValue(ry);
            if (expected_value > 65535) expected_value = expected_value % 65536;
        }else if (alu_sel == 10){
            expected_value = (emulator.GetRegisterValue(rx) | (65535 - emulator.GetRegisterValue(ry))) +
            (emulator.GetRegisterValue(rx) & emulator.GetRegisterValue(ry));
            if (expected_value > 65535) expected_value = expected_value % 65536;
        }else if (alu_sel == 11){
            expected_value = (emulator.GetRegisterValue(rx) & emulator.GetRegisterValue(ry)) - 1;
            if (expected_value < 0) expected_value += 65536;
        }else if (alu_sel == 12){
            expected_value = emulator.GetRegisterValue(rx) + emulator.GetRegisterValue(rx);
            if (expected_value > 65535) expected_value = expected_value % 65536;
        }else if (alu_sel == 13){
            expected_value = (emulator.GetRegisterValue(rx) | emulator.GetRegisterValue(ry)) + emulator.GetRegisterValue(rx);
            if (expected_value > 65535) expected_value = expected_value % 65536;
        }else if (alu_sel == 14){
            expected_value = (emulator.GetRegisterValue(rx) | (65535 - emulator.GetRegisterValue(ry))) + emulator.GetRegisterValue(rx); 
            if (expected_value > 65535) expected_value = expected_value % 65536;
        }else if (alu_sel == 15){
            expected_value = emulator.GetRegisterValue(rx) - 1;
            if (expected_value < 0) expected_value += 65536;
        }
    }else{ // logic
        if (alu_sel == 0){
            expected_value = 65535 - emulator.GetRegisterValue(rx);
        }else if (alu_sel == 1){ 
            expected_value = 65535 - (emulator.GetRegisterValue(rx) | emulator.GetRegisterValue(ry));
        }else if (alu_sel == 2){ 
            expected_value = (65535 - emulator.GetRegisterValue(rx)) & emulator.GetRegisterValue(ry);
        }else if (alu_sel == 3){ 
            expected_value = 0;
        }else if (alu_sel == 4){ 
            expected_value = 65535 - (emulator.GetRegisterValue(rx) & emulator.GetRegisterValue(ry));
        }else if (alu_sel == 5){ 
            expected_value = 65535 - emulator.GetRegisterValue(ry);
        }else if (alu_sel == 6){ 
            expected_value = emulator.GetRegisterValue(rx) ^ emulator.GetRegisterValue(ry);
        }else if (alu_sel == 7){ 
            expected_value = emulator.GetRegisterValue(rx) & (65535 - emulator.GetRegisterValue(ry));
        }else if (alu_sel == 8){
            expected_value = (65535 - emulator.GetRegisterValue(rx)) | emulator.GetRegisterValue(ry);
        }else if (alu_sel == 9){ 
            expected_value = 65535 - (emulator.GetRegisterValue(rx) ^ emulator.GetRegisterValue(ry));
        }else if (alu_sel == 10){ 
            expected_value = emulator.GetRegisterValue(ry);
        }else if (alu_sel == 11){ 
            expected_value = emulator.GetRegisterValue(rx) & emulator.GetRegisterValue(ry);
        }else if (alu_sel == 12){ 
            expected_value = 1;
        }else if (alu_sel == 13){
            expected_value = emulator.GetRegisterValue(rx) | (65535 - emulator.GetRegisterValue(ry));
        }else if (alu_sel == 14){ 
            expected_value = emulator.GetRegisterValue(rx) | emulator.GetRegisterValue(ry);
        }else if (alu_sel == 15){
            expected_value = emulator.GetRegisterValue(rx);
        }
    }

    emulator.Evaluate(rand16bit);

    if (emulator.GetRegisterValue(rx) == expected_value){
        std::cout << "OK" << std::endl;
    }else{
        std::cout << "Fail!" << std::endl;
    }        

    return 0;
}
