#include <iostream>
#include "../include/arithmetics/Increment.h"

int main() {
    auto *incrementer = new Increment();
    bool aInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true};  // 1
    bool *result = incrementer->operate(aInput);
    for (int i = 0; i < 17; i++) {
        std::cout << result[i];
    }
    std::cout << std::endl;
    delete incrementer;
    delete[] result;
    return 0;
}
