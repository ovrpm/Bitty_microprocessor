#include <iostream>
#include <cstdint>

#include <../emulator/bitty_emu.h>

BittyEmulator emu;

extern "C" void emuInit(uint16_t instruction, uint16_t value){
    std::cout << "Instruction to be tested: " << instruction << std::endl;

    // extract bits 15-13 (rx)
    uint16_t rx = (instruction >> 13) & 0x7;

    if (value == emu.Evaluate(instruction)){
        std::cout << "[PASS] Hardware matches software emulation" << std::endl;
    }else{
        std::cout << "[FAIL] Hardware/software mismatch!" << std::endl;
        std::cout << instruction << std::endl;
        std::cout << value << " " << emu.GetRegisterValue(rx) << std::endl;
    }
}
