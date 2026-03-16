#include "Valu.h"

#include <iostream>
#include <ctime>

int main(){
    srand(time(nullptr));
    int num_tests = 1000000;

    uint16_t rand_a, rand_b, rand_sel, exp_out;

    Valu* dut = new Valu();

    //random tests
    for (size_t i = 0; i < num_tests; i++){
        rand_a = rand() % 65536;
        rand_b = rand() % 65536;
        rand_sel = rand() % 8;

        dut->in_a = rand_a;
        dut->in_b = rand_b;
        dut->sel = rand_sel;
        dut->eval();

        if (rand_sel == 0){
            exp_out = (rand_a + rand_b) % 65536;
        }else if (rand_sel == 1){
            exp_out = rand_a - rand_b;
            if (exp_out < 0) exp_out += 65536;
        }else if (rand_sel == 2){
            exp_out = rand_a & rand_b;
        }else if (rand_sel == 3){
            exp_out = rand_a | rand_b;
        }else if (rand_sel == 4){
            exp_out = rand_a ^ rand_b;
        }else if (rand_sel == 5){
            if (rand_b > 15) exp_out = 0;
            else exp_out = rand_a << rand_b;
        }else if (rand_sel == 6){
            if (rand_b > 15) exp_out = 0;
            else exp_out = rand_a >> rand_b;
        }else if (rand_sel == 7){
            if (rand_a == rand_b) exp_out = 0;
            else if (rand_a > rand_b) exp_out = 1;
            else exp_out = 2;
        }

        if ((uint16_t)dut->alu_out == exp_out){
            std::cout << "OK" << std::endl;
        }else{
            std::cout << "Fail!" << std::endl;
            std::cout << "in_a = " << rand_a << " in_b = " << rand_b << std::endl;
            std::cout << "dut = " << (int)dut->alu_out << " exp = " << exp_out << " select = " << rand_sel << std::endl;

            return 0;
        }
    }
    std::cout << "All " << num_tests << " ALU tests passed" << std::endl;

    return 0;
}
