//
// Created by Joshua on 3/11/2021.
//

#include "../../include/arithmetics/HalfAdder.h"

HalfAdder::HalfAdder() {
    andGate = new ANDGate();
    xorGate = new XORGate();
}

HalfAdder::~HalfAdder() {
    delete andGate;
    delete xorGate;
}

std::pair<bool, bool> HalfAdder::operate(bool a, bool b) {
    bool andOutput = andGate->operate(a, b);
    bool xorOutput = xorGate->operate(a, b);
    return {andOutput, xorOutput};
}

