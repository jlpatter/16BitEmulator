#include <iostream>
#include "../include/gates/XORGate.h"

int main() {
    auto *gate = new XORGate();
    bool x = gate->operate(true, false);
    std::cout << x << std::endl;
    delete gate;
    return 0;
}
