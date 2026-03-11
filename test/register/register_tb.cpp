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

    int rand_in1 = rand() % 65536;
    int rand_in2 = rand() % 65536;
    int dut_output;

    dut->d_in = rand_in1;
    dut->en = 1;
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();

    dut_output = (int)dut->d_out;

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

    dut_output = (int)dut->d_out;

    if (dut_output == rand_in1){
        std::cout << "OK" << std::endl;
    }else if (dut_output == rand_in2){
        std::cout << "Fail!" << std::endl;
    }else{
        std::cout << "Something went VERY wrong" << std::endl;;
    }
 
    dut->d_in = rand_in2;
    dut->reset = 1;
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
    dut->reset = 0;

    dut_output = (int)dut->d_out;

    if (dut_output == 0){
        std::cout << "OK" << std::endl;
    }else{
        std::cout << "Fail!" << std::endl;
    }
    
    return 0;
}
