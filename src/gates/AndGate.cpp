//
// Created by Joshua on 3/10/2021.
//

#include "../../include/gates/AndGate.h"

AndGate::AndGate() {
    nandGate = new NandGate();
    notGate = new NotGate();
}

AndGate::~AndGate() {
    delete notGate;
    delete nandGate;
}

bool AndGate::operate(bool a, bool b) {
    bool result = nandGate->operate(a, b);
    return notGate->operate(result);
}

