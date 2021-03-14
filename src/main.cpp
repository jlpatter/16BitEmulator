#include <iostream>
#include "../include/logic/ALU.h"

int main() {
    auto *alu = new ALU();
    bool aInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true};  // 111
    bool bInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false};  // 10
    bool *result = alu->operate(false, false, false, false, true, false, aInput, bInput);
    for (int i = 0; i < 16; i++) {
        std::cout << result[i];
    }
    std::cout << std::endl;
    delete alu;
    delete[] result;
    return 0;
}
