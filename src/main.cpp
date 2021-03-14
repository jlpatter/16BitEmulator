#include <iostream>
#include "../include/memory/RAM.h"

int main() {
    auto *ram = new RAM();
    bool aInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true};  // 111
    bool bInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true};  // 1
    bool *result = ram->operate(true, aInput, bInput, false);
    delete[] result;
    result = ram->operate(true, aInput, bInput, true);
    delete[] result;
    result = ram->operate(true, aInput, bInput, false);
    for (int i = 0; i < 16; i++) {
        std::cout << result[i];
    }
    std::cout << std::endl;
    delete ram;
    delete[] result;
    return 0;
}
