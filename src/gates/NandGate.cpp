//
// Created by Joshua on 3/10/2021.
//

#include "../../include/gates/NandGate.h"

bool NandGate::operate(bool a, bool b) {
    return !(a && b);
}

