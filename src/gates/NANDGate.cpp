//
// Created by Joshua on 3/10/2021.
//

#include "../../include/gates/NANDGate.h"

bool NANDGate::operate(bool a, bool b) {
    return !(a && b);
}

