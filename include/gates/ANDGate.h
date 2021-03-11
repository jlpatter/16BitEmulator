//
// Created by Joshua on 3/10/2021.
//

#ifndef INC_16BITEMULATOR_ANDGATE_H
#define INC_16BITEMULATOR_ANDGATE_H

#include "NANDGate.h"
#include "NOTGate.h"

class ANDGate {
private:
    NOTGate *notGate;
    NANDGate *nandGate;
public:
    ANDGate();
    ~ANDGate();
    bool operate(bool a, bool b);
};
#endif //INC_16BITEMULATOR_ANDGATE_H
