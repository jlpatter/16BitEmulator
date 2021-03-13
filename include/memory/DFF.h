//
// Created by Joshua on 3/13/2021.
//

#ifndef INC_16BITEMULATOR_DFF_H
#define INC_16BITEMULATOR_DFF_H

#include "Latch.h"
#include "../gates/ANDGate.h"

class DFF {
private:
    Latch *latchOne;
    Latch *latchTwo;
    ANDGate *andGate;
    NOTGate *notGate;
public:
    DFF();
    ~DFF();
    bool operate(bool st, bool d, bool cl);
};

#endif //INC_16BITEMULATOR_DFF_H
