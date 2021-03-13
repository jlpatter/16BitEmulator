//
// Created by Joshua on 3/13/2021.
//

#include "../../include/memory/DFF.h"

DFF::DFF() {
    latchOne = new Latch();
    latchTwo = new Latch();
    andGate = new ANDGate();
    notGate = new NOTGate();
}

DFF::~DFF() {
    delete latchOne;
    delete latchTwo;
    delete andGate;
    delete notGate;
}

bool DFF::operate(bool st, bool d, bool cl) {
    bool notCl = notGate->operate(cl);
    bool andResult = andGate->operate(st, notCl);
    bool latchOneResult = latchOne->operate(andResult, d);
    return latchTwo->operate(cl, latchOneResult);
}

