//
// Created by Joshua on 3/14/2021.
//

#ifndef INC_16BITEMULATOR_RAM_H
#define INC_16BITEMULATOR_RAM_H

#include "Register.h"

class RAM {
private:
    Register *aRegister;
    static int bitArrayToInt(const bool *x);
public:
    RAM();
    ~RAM();
    bool *operate(bool st, bool *x, bool *addr, bool cl);
};

#endif //INC_16BITEMULATOR_RAM_H
