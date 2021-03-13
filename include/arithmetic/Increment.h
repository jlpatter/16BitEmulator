//
// Created by Joshua on 3/12/2021.
//

#ifndef INC_16BITEMULATOR_INCREMENT_H
#define INC_16BITEMULATOR_INCREMENT_H

#include "../gates/NOTGate.h"
#include "MultiAdder.h"

class Increment {
private:
    MultiAdder *multiAdder;
public:
    Increment();
    ~Increment();
    bool* operate(bool *input);
};

#endif //INC_16BITEMULATOR_INCREMENT_H
