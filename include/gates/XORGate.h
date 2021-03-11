//
// Created by Joshua on 3/11/2021.
//

#ifndef INC_16BITEMULATOR_XORGATE_H
#define INC_16BITEMULATOR_XORGATE_H

#include "OrGate.h"
#include "AndGate.h"
#include "NotGate.h"

class XORGate {
private:
    OrGate *orGate;
    AndGate *andGate1;
    AndGate *andGate2;
    NotGate *notGate;
public:
    XORGate();
    ~XORGate();
    bool operate(bool a, bool b);
};

#endif //INC_16BITEMULATOR_XORGATE_H
