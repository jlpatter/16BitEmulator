//
// Created by Joshua on 3/13/2021.
//

#ifndef INC_16BITEMULATOR_UALU_H
#define INC_16BITEMULATOR_UALU_H

#include "../plumbing/Selector16.h"
#include "../gates/NOTGate.h"

class UALU {
private:
    Selector16 *selectOne;
    Selector16 *selectTwo;
    NOTGate *notGate;
public:
    UALU();
    ~UALU();
    bool* operate(bool z, bool n, bool *x);
};

#endif //INC_16BITEMULATOR_UALU_H
