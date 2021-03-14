#include <iostream>
#include "../include/logic/UALU.h"

int main() {
    auto *ualu = new UALU();
    bool aInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true};  // 111
    bool *result = ualu->operate(true, true, aInput);
    for (int i = 0; i < 16; i++) {
        std::cout << result[i];
    }
    std::cout << std::endl;
    delete ualu;
    delete[] result;
    return 0;
}
