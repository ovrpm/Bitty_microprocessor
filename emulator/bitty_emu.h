#include <vector>

class BittyEmulator{
public:
    BittyEmulator();

    ~BittyEmulator(){
        printStats();
    }

    uint16_t Evaluate(uint16_t instruction);
    uint16_t GetRegisterValue(uint16_t reg_num);
    void printStats();

private:
    std::vector<uint16_t> registers;
    size_t num_tests = 0;
};
