//
// Created by Joshua on 3/11/2021.
//

#include "../../include/arithmetic/FullAdder.h"

FullAdder::FullAdder() {
    orGate = new ORGate();
    halfAdder1 = new HalfAdder();
    halfAdder2 = new HalfAdder();
}

FullAdder::~FullAdder() {
    delete orGate;
    delete halfAdder1;
    delete halfAdder2;
}

std::pair<bool, bool> FullAdder::operate(bool a, bool b, bool c) {
    std::pair<bool, bool> firstAddition = halfAdder1->operate(a, b);
    std::pair<bool, bool> secondAddition = halfAdder2->operate(firstAddition.second, c);
    bool orResult = orGate->operate(firstAddition.first, secondAddition.first);
    return {orResult, secondAddition.second};
}

