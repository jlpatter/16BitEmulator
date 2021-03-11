//
// Created by Joshua on 3/11/2021.
//

#include "../../include/gates/XORGate.h"

XORGate::XORGate() {
    orGate = new ORGate();
    andGate1 = new ANDGate();
    andGate2 = new ANDGate();
    notGate = new NOTGate();
}

XORGate::~XORGate() {
    delete orGate;
    delete andGate1;
    delete andGate2;
    delete notGate;
}

bool XORGate::operate(bool a, bool b) {
    bool orResult = orGate->operate(a, b);
    bool andResult = andGate1->operate(a, b);
    bool notAndResult = notGate->operate(andResult);
    return andGate2->operate(orResult, notAndResult);
}

