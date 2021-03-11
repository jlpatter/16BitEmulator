#include <iostream>
#include "../include/gates/OrGate.h"

int main() {
    auto *gate = new OrGate();
    bool x = gate->operate(true, false);
    std::cout << x << std::endl;
    delete gate;
    return 0;
}
