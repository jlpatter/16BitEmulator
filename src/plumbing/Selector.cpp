//
// Created by Joshua on 3/14/2021.
//

#include "../../include/plumbing/Selector.h"

bool Selector::operate(bool a, bool x, bool y) {
    if (a) {
        return x;
    }
    else {
        return y;
    }
}

