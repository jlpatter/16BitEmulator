#include <iostream>
#include "../include/plumbing/Selector.h"

int main() {
    auto *selector = new Selector();
    bool aInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true};  // 111
    bool bInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false};  // 0
    bool *result = selector->operate(true, aInput, bInput);
    for (int i = 0; i < 16; i++) {
        std::cout << result[i];
    }
    std::cout << std::endl;
    delete selector;
    return 0;
}
