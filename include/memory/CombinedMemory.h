//
// Created by Joshua on 3/14/2021.
//

#ifndef INC_16BITEMULATOR_COMBINEDMEMORY_H
#define INC_16BITEMULATOR_COMBINEDMEMORY_H

#include "Register.h"
#include "RAM.h"

class CombinedMemory {
private:
    Register *aRegister;
    Register *dRegister;
    RAM *ram;
public:
    CombinedMemory();
    ~CombinedMemory();
    bool **operate(bool a, bool d, bool aTwo, bool *x, bool cl);
};

#endif //INC_16BITEMULATOR_COMBINEDMEMORY_H
