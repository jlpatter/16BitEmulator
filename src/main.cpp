#include <iostream>
#include "../include/arithmetics/HalfAdder.h"

int main() {
    auto *halfAdder = new HalfAdder();
    std::pair<bool, bool> resultPair = halfAdder->operate(true, false);
    std::cout << resultPair.first;
    std::cout << resultPair.second << std::endl;
    delete halfAdder;
    return 0;
}
