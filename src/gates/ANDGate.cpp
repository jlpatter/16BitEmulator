//
// Created by Joshua on 3/10/2021.
//

#include "../../include/gates/ANDGate.h"

ANDGate::ANDGate() {
    nandGate = new NANDGate();
    notGate = new NOTGate();
}

ANDGate::~ANDGate() {
    delete notGate;
    delete nandGate;
}

bool ANDGate::operate(bool a, bool b) {
    bool result = nandGate->operate(a, b);
    return notGate->operate(result);
}

