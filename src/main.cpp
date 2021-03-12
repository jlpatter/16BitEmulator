#include <iostream>
#include "../include/arithmetics/MultiAdder.h"

int main() {
    auto *multiAdder = new MultiAdder();
    bool aInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true};  // 1
    bool bInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true};  // 1
    bool* result = multiAdder->operate(aInput, bInput, true);
    for (int i = 0; i < 17; i++) {
        std::cout << result[i];
    }
    std::cout << std::endl;
    delete multiAdder;
    delete[] result;
    return 0;
}
