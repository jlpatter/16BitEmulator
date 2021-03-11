//
// Created by Joshua on 3/10/2021.
//

#include <iostream>
#include "OrGate.h"

OrGate::OrGate() {
    notGate1 = new NotGate();
    notGate2 = new NotGate();
    nandGate = new NandGate();
}

OrGate::~OrGate() {
    delete notGate1;
    delete notGate2;
    delete nandGate;
}

bool OrGate::operate(bool a, bool b) {
    bool notA = notGate1->operate(a);
    bool notB = notGate2->operate(b);
    return nandGate->operate(notA, notB);
}
