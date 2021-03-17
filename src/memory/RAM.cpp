//
// Created by Joshua on 3/14/2021.
//

#include "../../include/memory/RAM.h"
#include "../../include/processor/ProgramEngine.h"

RAM::RAM() {
    aRegister = new Register[65536];
}

RAM::~RAM() {
    delete[] aRegister;
}

bool *RAM::operate(bool st, bool *x, bool *addr, bool cl) {
    int intAddr = ProgramEngine::bitArrayToInt(addr);
    bool *result = aRegister[intAddr].operate(st, x, cl);
    return result;
}
