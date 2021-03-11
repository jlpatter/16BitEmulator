#include <iostream>
#include "gates/and_gate.h"

int main() {
    auto *gate = new AndGate();
    bool x = gate->operate(true, true);
    std::cout << x << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
