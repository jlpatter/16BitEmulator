//
// Created by Joshua on 3/10/2021.
//

#ifndef INC_16BITEMULATOR_ORGATE_H
#define INC_16BITEMULATOR_ORGATE_H


#include "NotGate.h"
#include "NandGate.h"

class OrGate {
private:
    NotGate *notGate1;
    NotGate *notGate2;
    NandGate *nandGate;
public:
    OrGate();
    ~OrGate();
    bool operate(bool a, bool b);
};


#endif //INC_16BITEMULATOR_ORGATE_H
