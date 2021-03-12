#include <iostream>
#include "../include/arithmetics/Subtraction.h"

int main() {
    auto *subtractor = new Subtraction();
    bool aInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true};  // 111
    bool bInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true};  // 1
    bool *result = subtractor->operate(aInput, bInput);
    for (int i = 0; i < 16; i++) {
        std::cout << result[i];
    }
    std::cout << std::endl;
    delete subtractor;
    delete[] result;
    return 0;
}
