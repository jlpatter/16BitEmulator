//
// Created by Joshua on 3/10/2021.
//

#include <iostream>
#include "../../include/gates/ORGate.h"

ORGate::ORGate() {
    notGate1 = new NOTGate();
    notGate2 = new NOTGate();
    nandGate = new NANDGate();
}

ORGate::~ORGate() {
    delete notGate1;
    delete notGate2;
    delete nandGate;
}

bool ORGate::operate(bool a, bool b) {
    bool notA = notGate1->operate(a);
    bool notB = notGate2->operate(b);
    return nandGate->operate(notA, notB);
}
