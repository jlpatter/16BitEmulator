#include <iostream>
#include "../include/memory/Counter.h"

int main() {
    auto *counter = new Counter();
    bool aInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true};  // 111
    bool bInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false};  // 0
    counter->operate(true, aInput, false);
    counter->operate(false, bInput, true);
    counter->operate(false, bInput, false);
    bool *result = counter->operate(false, bInput, true);
    for (int i = 0; i < 16; i++) {
        std::cout << result[i];
    }
    std::cout << std::endl;
    delete counter;
    return 0;
}
