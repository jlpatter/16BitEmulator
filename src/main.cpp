#include <iostream>
#include "../include/processor/InstructionDecoder.h"

int main() {
    auto *instructionDecoder = new InstructionDecoder();
    bool bInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true};  // 1
    bool **result = instructionDecoder->operate(bInput);
    bool *firstResult = result[0];
    for (int i = 0; i < 16; i++) {
        std::cout << firstResult[i];
    }
    std::cout << std::endl;
    bool *secondResult = result[1];
    for (int i = 0; i < 16; i++) {
        std::cout << secondResult[i];
    }
    std::cout << std::endl;
    delete instructionDecoder;
    delete[] firstResult;
    delete[] secondResult;
    delete[] result;
    return 0;
}
