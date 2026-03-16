#include "Vmux.h"

#include <iostream>

int main(){

    Vmux* dut = new Vmux();

    dut->in0 = 1; 
    dut->in1 = 2;
    dut->in2 = 3;
    dut->in3 = 4;
    dut->in4 = 5;
    dut->in5 = 6;
    dut->in6 = 7;
    dut->in7 = 8;
    dut->in8 = 9;

    uint16_t dut_output;

    //verifying all of the select options
    for (size_t i = 0; i < 15; i++){
        dut->mux_sel = i;
        dut->eval();
 
        dut_output = (uint16_t)dut->mux_out;

        //check unspecified inputs
        if (i > 8 && dut_output == 0){
            std::cout << "OK" << std::endl;
            continue;
        }else if (i > 8 && dut_output != 0){
            std::cout << "Fail! dut = " << dut_output << " exp = " << 0 << std::endl;
            continue;
        }

        if (dut_output == (i + 1)){
            std::cout << "OK" << std::endl;
        }else{
            std::cout << "Fail! dut = " << dut_output << " exp = " << i+1 << std::endl;
        }
    }

    return 0;
}

