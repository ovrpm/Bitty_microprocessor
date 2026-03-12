#include <iostream>
#include <../emulator/bitty_emu.cpp>
#include <cstdint>

BittyEmulator emu;

extern "C" void emuInit(uint16_t instruction, uint16_t value){
    uint16_t rx = (instruction >> 13) & 0x7; // extract bits 15-13 (rx)

    if (value == emu.Evaluate(instruction)){
        std::cout << "ok" << std::endl;
//        std::cout << value << " " << emu.GetRegisterValue(rx) << std::endl;
    }else{
        std::cout << "cry" << std::endl;
        std::cout << instruction << std::endl;
        std::cout << value << " " << emu.GetRegisterValue(rx) << std::endl;
    }
/*    
    for (int i = 0; i < 8; i++){
        std::cout << emu.GetRegisterValue(i) << " ";
    }
    std::cout << std::endl;
*/
/*
    for (int i = 0; i < 8; i++){
        std::cout << emu.GetRegisterValue(i) << " ";
    }
    std::cout << std::endl;
*/  
}

/*
extern "C" uint16_t GenerateInstruction(){
    uint16_t instruction = rand() % 65536;
    while (instruction % 4 == 2 || instruction % 4 == 3){
        instruction = rand() % 65536;
    }
    return instruction;
}
*/
