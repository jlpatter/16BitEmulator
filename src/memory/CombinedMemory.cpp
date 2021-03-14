//
// Created by Joshua on 3/14/2021.
//

#include "../../include/memory/CombinedMemory.h"

CombinedMemory::CombinedMemory() {
    aRegister = new Register();
    dRegister = new Register();
    ram = new RAM();
}

CombinedMemory::~CombinedMemory() {
    delete aRegister;
    delete dRegister;
    delete ram;
}

bool **CombinedMemory::operate(bool a, bool d, bool aTwo, bool *x, bool cl) {
    bool *aRegisterResult = aRegister->operate(a, x, cl);
    bool *dRegisterResult = dRegister->operate(d, x, cl);
    bool *ramResult = ram->operate(aTwo, x, aRegisterResult, cl);
    bool **finalResult = new bool*[3];
    finalResult[0] = aRegisterResult;
    finalResult[1] = dRegisterResult;
    finalResult[2] = ramResult;
    return finalResult;
}

