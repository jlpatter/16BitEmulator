//
// Created by Joshua on 3/12/2021.
//

#include "../../include/arithmetics/Subtraction.h"

Subtraction::Subtraction() {
    notGate = new NOTGate[16];
    incrementer = new Increment();
    multiAdder = new MultiAdder();
}

Subtraction::~Subtraction() {
    delete[] notGate;
    delete incrementer;
    delete multiAdder;
}

bool *Subtraction::operate(bool *a, bool *b) {
    bool *invertedB = new bool[16];
    for (int i = 0; i < 16; i++) {
        invertedB[i] = notGate[i].operate(b[i]);
    }
    bool *negativeB = incrementer->operate(invertedB);
    delete[] invertedB;
    bool *result = multiAdder->operate(a, negativeB, false);
    delete[] negativeB;
    return result;
}

