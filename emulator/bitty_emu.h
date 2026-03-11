class BittyEmulator{
public:
    BittyEmulator();
    uint16_t Evaluate(uint16_t instruction);
    uint16_t GetRegisterValue(uint16_t reg_num);
    void yay();

private:
    std::vector<uint16_t> registers;
};
