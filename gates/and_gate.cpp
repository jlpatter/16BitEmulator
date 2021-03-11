//
// Created by Joshua on 3/10/2021.
//

#include "and_gate.h"

AndGate::AndGate() {
    nandGate = new NandGate();
    notGate = new NotGate();
}

bool AndGate::operate(bool a, bool b) {
    bool result = nandGate->operate(a, b);
    return notGate->operate(result);
}

