//
// Created by Joshua on 3/13/2021.
//

#include "../../include/plumbing/Selector.h"

bool *Selector::operate(bool s, bool *a, bool *b) {
    if (s) {
        return a;
    }
    else {
        return b;
    }
}

