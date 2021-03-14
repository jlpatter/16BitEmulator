//
// Created by Joshua on 3/14/2021.
//

#ifndef INC_16BITEMULATOR_ALU_H
#define INC_16BITEMULATOR_ALU_H

#include "UALU.h"
#include "../arithmetic/MultiAdder.h"

class ALU {
private:
    UALU *ualuOne;
    UALU *ualuTwo;
    MultiAdder *multiAdder;
    ANDGate *andGate;
    Selector *selectorOne;
    Selector *selectorTwo;
    NOTGate *notGate;
public:
    ALU();
    ~ALU();
    bool* operate(bool zx, bool nx, bool zy, bool ny, bool f, bool no, bool *x, bool *y);
};

#endif //INC_16BITEMULATOR_ALU_H
