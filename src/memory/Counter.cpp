//
// Created by Joshua on 3/13/2021.
//

#include "../../include/memory/Counter.h"

Counter::Counter() {
    out = new bool[16];
    for (int i = 0; i < 16; i++) {
        out[i] = false;
    }
    aRegister = new Register();
    selector = new Selector();
    incrementor = new Increment();
}

Counter::~Counter() {
    delete[] out;
    delete aRegister;
    delete selector;
    delete incrementor;
}

bool *Counter::operate(bool st, bool *a, bool cl) {
    bool *incrementorResult = incrementor->operate(out);
    bool *result = selector->operate(st, a, incrementorResult);
    delete[] incrementorResult;
    delete[] out;
    out = aRegister->operate(true, result, cl);
    delete[] result;
    return out;
}

