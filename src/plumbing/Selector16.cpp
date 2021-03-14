//
// Created by Joshua on 3/13/2021.
//

#include "../../include/plumbing/Selector16.h"

bool *Selector16::operate(bool s, const bool *a, const bool *b) {
    bool *result = new bool[16];
    if (s) {
        for (int i = 0; i < 16; i++) {
            result[i] = a[i];
        }
        return result;
    }
    else {
        for (int i = 0; i < 16; i++) {
            result[i] = b[i];
        }
        return result;
    }
}

