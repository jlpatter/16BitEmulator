//
// Created by Joshua on 3/13/2021.
//

#ifndef INC_16BITEMULATOR_EQUALTOZERO_H
#define INC_16BITEMULATOR_EQUALTOZERO_H

#include "../gates/NOTGate.h"
#include "../gates/ANDGate.h"

class EqualToZero {
private:
    NOTGate *notGate;
    ANDGate *andGate;
public:
    EqualToZero();
    ~EqualToZero();
    bool operate(bool* a);
};

#endif //INC_16BITEMULATOR_EQUALTOZERO_H
