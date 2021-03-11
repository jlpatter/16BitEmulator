//
// Created by Joshua on 3/10/2021.
//

#ifndef INC_16BITEMULATOR_ORGATE_H
#define INC_16BITEMULATOR_ORGATE_H


#include "NOTGate.h"
#include "NANDGate.h"

class ORGate {
private:
    NOTGate *notGate1;
    NOTGate *notGate2;
    NANDGate *nandGate;
public:
    ORGate();
    ~ORGate();
    bool operate(bool a, bool b);
};


#endif //INC_16BITEMULATOR_ORGATE_H
