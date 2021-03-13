#include <iostream>
#include "../include/arithmetic/EqualToZero.h"

int main() {
    auto *equalToZero = new EqualToZero();
    bool aInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true};  // 111
    bool bInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false};  // 0
    bool result = equalToZero->operate(aInput);
    std::cout << result << std::endl;
    result = equalToZero->operate(bInput);
    std::cout << result << std::endl;
    delete equalToZero;
    return 0;
}
