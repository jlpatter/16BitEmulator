//
// Created by Joshua on 3/13/2021.
//

#ifndef INC_16BITEMULATOR_REGISTER_H
#define INC_16BITEMULATOR_REGISTER_H

#include "DFF.h"

class Register {
private:
    DFF *dff;
public:
    Register();
    ~Register();
    bool* operate(bool st, bool *a, bool cl);
};

#endif //INC_16BITEMULATOR_REGISTER_H
