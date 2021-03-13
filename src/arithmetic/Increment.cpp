//
// Created by Joshua on 3/12/2021.
//

#include "../../include/arithmetic/Increment.h"

Increment::Increment() {
    multiAdder = new MultiAdder();
}

Increment::~Increment() {
    delete multiAdder;
}

bool *Increment::operate(bool *input) {
    bool oneInput[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true};
    bool* result = multiAdder->operate(input, oneInput, false);
    return result;
}

