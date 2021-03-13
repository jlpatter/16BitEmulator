//
// Created by Joshua on 3/13/2021.
//

#ifndef INC_16BITEMULATOR_COUNTER_H
#define INC_16BITEMULATOR_COUNTER_H

#include "Register.h"
#include "../plumbing/Selector.h"
#include "../arithmetic/Increment.h"

class Counter {
private:
    bool *out;
    Register *aRegister;
    Selector *selector;
    Increment *incrementor;
public:
    Counter();
    ~Counter();
    bool* operate(bool st, bool *a, bool cl);
};

#endif //INC_16BITEMULATOR_COUNTER_H
