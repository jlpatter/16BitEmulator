#include <iostream>
#include "../include/memory/Latch.h"

int main() {
    auto *latch = new Latch();
    bool aInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true};  // 111
    bool bInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false};  // 0
    bool result = latch->operate(true, true);
    std::cout << result << std::endl;
    delete latch;
    return 0;
}
