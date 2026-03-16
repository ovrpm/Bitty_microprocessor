#include "Vregister.h"
#include <iostream>

int main (){
    Vregister* dut = new Vregister;

    //reset
    dut->reset = 1;
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
    dut->reset = 0;

    uint16_t rand_in1 = rand() % 65536;
    uint16_t rand_in2 = rand() % 65536;
    uint16_t dut_output;

    dut->d_in = rand_in1;
    dut->en = 1;
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();

    dut_output = (uint16_t)dut->d_out;

    if (dut_output == rand_in1){
        std::cout << "OK" << std::endl;
    }else{
        std::cout << "Fail!" << std::endl;
    }

    dut->d_in = rand_in2;
    dut->en = 0;
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();

    dut_output = (uint16_t)dut->d_out;

    if (dut_output == rand_in1){
        std::cout << "OK" << std::endl;
    }else if (dut_output == rand_in2){
        std::cout << "Fail!" << std::endl;
    }else{
        std::cout << "Error: Unexpected register state" << std::endl;
    }
 
    dut->d_in = rand_in2;
    dut->reset = 1;
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
    dut->reset = 0;

    dut_output = (uint16_t)dut->d_out;

    if (dut_output == 0){
        std::cout << "OK" << std::endl;
    }else{
        std::cout << "Fail!" << std::endl;
    }

    return 0;
}
