#include "Vcontrol_unit.h"
#include <iostream>

int main (){
    Vcontrol_unit* dut = new Vcontrol_unit;

    dut->reset = 1;
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
    dut->reset = 0;

    //expected
    int rand_instruction, alu_sel_expected, mux_sel_expected1, mux_sel_expected2, format;
    //recieved
    int mux_sel_dut, alu_sel_dut, en_s;

    dut->run = 1;
    dut->eval();

    for (int i = 0; i < 10; i++){
        rand_instruction = rand() % 65536;

        alu_sel_expected = (rand_instruction >> 2) & 0x7;
        format = rand_instruction & 0x3;
        mux_sel_expected1 = (rand_instruction >> 13) & 0x7;
        if (format == 0){
            mux_sel_expected2 = (rand_instruction >> 10) & 0x7;
        }else if (format == 1){
            mux_sel_expected2 = 8;
        }else{
            continue;
        }

        dut->instruction = rand_instruction;
        dut->eval();

        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval(); 

        mux_sel_dut = (int)dut->mux_sel;

        if ((int)dut->en_0 == 0 && (int)dut->en_1 == 0 && (int)dut->en_2 == 0 && (int)dut->en_3 == 0 &&
            (int)dut->en_4 == 0 && (int)dut->en_5 == 0 && (int)dut->en_6 == 0 && (int)dut->en_7 == 0 &&
            (int)dut->en_c == 0 && (int)dut->en_s == 1 && (int)dut-> done == 0 && mux_sel_dut == mux_sel_expected1){
            std::cout << "OK" << std::endl;
        }else{
            std::cout << "mux_sel_expected = " << mux_sel_expected1 << " en_s = " << 1 << std::endl;
            std::cout << "mux_sel = " << mux_sel_dut << " en_s = " << en_s << std::endl;
            std::cout << "input = " << rand_instruction << std::endl;
        }

        //state1
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();
        
        mux_sel_dut = (int)dut->mux_sel;
        alu_sel_dut = (int)dut->alu_sel;

        if ((int)dut->en_0 == 0 && (int)dut->en_1 == 0 && (int)dut->en_2 == 0 && (int)dut->en_3 == 0 &&
            (int)dut->en_4 == 0 && (int)dut->en_5 == 0 && (int)dut->en_6 == 0 && (int)dut->en_7 == 0 &&
            (int)dut->en_c == 1 && (int)dut->en_s == 0 && (int)dut->done == 0 && mux_sel_dut == mux_sel_expected2 &&
            alu_sel_dut == alu_sel_expected){
            std::cout << "OK" << std::endl;
        }else{
            std::cout << "Fail!" << std::endl;
            std::cout << "mux_sel_expected = " << mux_sel_expected2 << " mux_sel_dut = " << mux_sel_dut << std::endl;
            std::cout << "instruction = " << rand_instruction << std::endl;
            std::cout << (int)dut->en_c << " " << (int)dut->done <<  " " << en_s << std::endl;
        }

        //state2
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();
        
        if ((int)dut->done == 1){
            if (mux_sel_expected1 == 0){
                if ((int)dut->en_0 == 1 && (int)dut->en_1 == 0 && (int)dut->en_2 == 0 && (int)dut->en_3 == 0 &&
                    (int)dut->en_4 == 0 && (int)dut->en_5 == 0 && (int)dut->en_6 == 0 && (int)dut->en_7 == 0){
                    std::cout << "OK" << std::endl;
                }else{
                    std::cout << "Fail!" << std::endl;
                }
            }else if (mux_sel_expected1 == 1){
                if ((int)dut->en_0 == 0 && (int)dut->en_1 == 1 && (int)dut->en_2 == 0 && (int)dut->en_3 == 0 &&
                    (int)dut->en_4 == 0 && (int)dut->en_5 == 0 && (int)dut->en_6 == 0 && (int)dut->en_7 == 0){
                    std::cout << "OK" << std::endl;
                }else{
                    std::cout << (int)dut->en_0 << (int)dut->en_1 << (int)dut->en_2 << (int)dut->en_3 << (int)dut->en_4
                    << (int)dut->en_5 << (int)dut->en_6 << (int)dut->en_7 << std::endl;
                }
            }else if (mux_sel_expected1 == 2){
                if ((int)dut->en_0 == 0 && (int)dut->en_1 == 0 && (int)dut->en_2 == 1 && (int)dut->en_3 == 0 &&
                    (int)dut->en_4 == 0 && (int)dut->en_5 == 0 && (int)dut->en_6 == 0 && (int)dut->en_7 == 0){
                    std::cout << "OK" << std::endl;
                }else{
                    std::cout << "Fail!" << std::endl;
                }
            }else if (mux_sel_expected1 == 3){
                if ((int)dut->en_0 == 0 && (int)dut->en_1 == 0 && (int)dut->en_2 == 0 && (int)dut->en_3 == 1 &&
                    (int)dut->en_4 == 0 && (int)dut->en_5 == 0 && (int)dut->en_6 == 0 && (int)dut->en_7 == 0){
                    std::cout << "OK" << std::endl;
                }else{
                    std::cout << "Fail!" << std::endl;
                }
            }else if (mux_sel_expected1 == 4){
                if ((int)dut->en_0 == 0 && (int)dut->en_1 == 0 && (int)dut->en_2 == 0 && (int)dut->en_3 == 0 &&
                    (int)dut->en_4 == 1 && (int)dut->en_5 == 0 && (int)dut->en_6 == 0 && (int)dut->en_7 == 0){
                    std::cout << "OK" << std::endl;
                }else{
                    std::cout << "Fail!" << std::endl;
                }
            }else if (mux_sel_expected1 == 5){
                if ((int)dut->en_0 == 0 && (int)dut->en_1 == 0 && (int)dut->en_2 == 0 && (int)dut->en_3 == 0 &&
                    (int)dut->en_4 == 0 && (int)dut->en_5 == 1 && (int)dut->en_6 == 0 && (int)dut->en_7 == 0){
                    std::cout << "OK" << std::endl;
                }else{
                    std::cout << "Fail!" << std::endl;
                }
            }else if (mux_sel_expected1 == 6){
                if ((int)dut->en_0 == 0 && (int)dut->en_1 == 0 && (int)dut->en_2 == 0 && (int)dut->en_3 == 0 &&
                    (int)dut->en_4 == 0 && (int)dut->en_5 == 0 && (int)dut->en_6 == 1 && (int)dut->en_7 == 0){
                    std::cout << "OK" << std::endl;
                }
                else{
                    std::cout << "Fail!" << std::endl;
                }
            }else if (mux_sel_expected1 == 7){
                if ((int)dut->en_0 == 0 && (int)dut->en_1 == 0 && (int)dut->en_2 == 0 && (int)dut->en_3 == 0 &&
                    (int)dut->en_4 == 0 && (int)dut->en_5 == 0 && (int)dut->en_6 == 0 && (int)dut->en_7 == 1){
                    std::cout << "OK" << std::endl;
                }else{
                    std::cout << "Fail!" << std::endl;
                }
            }else{
                std::cout << "something went very wrong";
            }

        }
    
        //state0 
        dut->instruction = rand_instruction;
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();

    }


    return 0;
}
