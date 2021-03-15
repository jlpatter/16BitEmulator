#include <iostream>
#include "../include/processor/ControlUnit.h"

int main() {
    auto *controlUnit = new ControlUnit();
    bool bInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true};  // 101
    bool **result = controlUnit->operate(bInput, false);
    delete[] result[1];
    delete[] result;
    result = controlUnit->operate(bInput, true);
    delete[] result[1];
    delete[] result;
    bool **resultTwo = controlUnit->operate(bInput, false);
    std::cout << resultTwo[0][0] << std::endl;
    bool *firstResult = resultTwo[1];
    for (int i = 0; i < 16; i++) {
        std::cout << firstResult[i];
    }
    std::cout << std::endl;
    delete controlUnit;
    delete[] firstResult;
    delete[] resultTwo;
    return 0;
}
