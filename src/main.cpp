#include <iostream>
#include "../include/memory/CombinedMemory.h"

int main() {
    auto *combinedMemory = new CombinedMemory();
    bool bInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true};  // 1
    bool **result = combinedMemory->operate(true, false, false, bInput, false);
    for (int i = 0; i < 3; i++) {
        delete[] result[i];
    }
    delete[] result;
    result = combinedMemory->operate(true, false, false, bInput, true);
    for (int i = 0; i < 3; i++) {
        delete[] result[i];
    }
    delete[] result;
    result = combinedMemory->operate(true, false, false, bInput, false);
    bool *firstResult = result[0];
    for (int i = 0; i < 16; i++) {
        std::cout << firstResult[i];
    }
    std::cout << std::endl;
    delete combinedMemory;
    for (int i = 0; i < 3; i++) {
        delete[] result[i];
    }
    delete[] result;
    return 0;
}
