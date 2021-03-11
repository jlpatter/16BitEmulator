//
// Created by Joshua on 3/11/2021.
//

#ifndef INC_16BITEMULATOR_XORGATE_H
#define INC_16BITEMULATOR_XORGATE_H

#include "ORGate.h"
#include "ANDGate.h"
#include "NOTGate.h"

class XORGate {
private:
    ORGate *orGate;
    ANDGate *andGate1;
    ANDGate *andGate2;
    NOTGate *notGate;
public:
    XORGate();
    ~XORGate();
    bool operate(bool a, bool b);
};

#endif //INC_16BITEMULATOR_XORGATE_H
