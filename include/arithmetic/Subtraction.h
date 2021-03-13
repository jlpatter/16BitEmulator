//
// Created by Joshua on 3/12/2021.
//

#ifndef INC_16BITEMULATOR_SUBTRACTION_H
#define INC_16BITEMULATOR_SUBTRACTION_H

#include "../gates/NOTGate.h"
#include "Increment.h"

class Subtraction {
private:
    NOTGate *notGate;
    Increment *incrementer;
    MultiAdder *multiAdder;
public:
    Subtraction();
    ~Subtraction();
    bool* operate(bool* a, bool* b);
};

#endif //INC_16BITEMULATOR_SUBTRACTION_H
