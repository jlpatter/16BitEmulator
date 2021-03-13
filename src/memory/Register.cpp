//
// Created by Joshua on 3/13/2021.
//

#include "../../include/memory/Register.h"

Register::Register() {
    dff = new DFF[16];
}

Register::~Register() {
    delete[] dff;
}

bool *Register::operate(bool st, bool *a, bool cl) {
    bool *result = new bool[16];
    for (int i = 0; i < 16; i++) {
        result[i] = dff[i].operate(st, a[i], cl);
    }
    return result;
}

