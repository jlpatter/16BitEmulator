#include <iostream>
#include "../include/logic/Condition.h"

int main() {
    auto *condition = new Condition();
    bool aInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true};  // 111
    bool result = condition->operate(false, true, true, aInput);
    std::cout << result << std::endl;
    delete condition;
    return 0;
}
