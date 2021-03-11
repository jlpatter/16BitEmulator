//
// Created by Joshua on 3/10/2021.
//

#ifndef INC_16BITEMULATOR_ANDGATE_H
#define INC_16BITEMULATOR_ANDGATE_H

#include "NandGate.h"
#include "NotGate.h"

class AndGate {
private:
    NotGate *notGate;
    NandGate *nandGate;
public:
    AndGate();
    ~AndGate();
    bool operate(bool a, bool b);
};
#endif //INC_16BITEMULATOR_ANDGATE_H
