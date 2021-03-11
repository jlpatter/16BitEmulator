//
// Created by Joshua on 3/10/2021.
//

#ifndef INC_16BITEMULATOR_AND_GATE_H
#define INC_16BITEMULATOR_AND_GATE_H

#include "nand_gate.h"
#include "not_gate.h"

class AndGate {
private:
    NotGate *notGate;
    NandGate *nandGate;
public:
    AndGate();
    bool operate(bool a, bool b);
};
#endif //INC_16BITEMULATOR_AND_GATE_H
