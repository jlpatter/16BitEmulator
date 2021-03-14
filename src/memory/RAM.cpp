//
// Created by Joshua on 3/14/2021.
//

#include "../../include/memory/RAM.h"

RAM::RAM() {
    aRegister = new Register[65536];
}

RAM::~RAM() {
    delete[] aRegister;
}

bool *RAM::operate(bool st, bool *x, bool *addr, bool cl) {
    int intAddr = bitArrayToInt(addr);
    bool *result = aRegister[intAddr].operate(st, x, cl);
    return result;
}

int RAM::bitArrayToInt(const bool *x) {
    int ret = 0;
    int tmp;
    for (int i = 0; i < 16; i++) {
        tmp = x[i];
        ret |= tmp << (16 - i - 1);
    }
    return ret;
}

