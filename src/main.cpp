#include <iostream>
#include "../include/arithmetics/FullAdder.h"

int main() {
    auto *fullAdder = new FullAdder();
    std::pair<bool, bool> resultPair = fullAdder->operate(true, true, true);
    std::cout << resultPair.first;
    std::cout << resultPair.second << std::endl;
    delete fullAdder;
    return 0;
}
