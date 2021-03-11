//
// Created by Joshua on 3/10/2021.
//

#include "nand_gate.h"

bool NandGate::operate(bool a, bool b) {
    return !(a && b);
}

