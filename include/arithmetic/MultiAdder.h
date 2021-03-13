//
// Created by Joshua on 3/12/2021.
//

#ifndef INC_16BITEMULATOR_MULTIADDER_H
#define INC_16BITEMULATOR_MULTIADDER_H

#include "FullAdder.h"

class MultiAdder {
private:
    FullAdder *fullAdder;
public:
    MultiAdder();
    ~MultiAdder();
    bool* operate(bool* a, bool* b, bool c);
};

#endif //INC_16BITEMULATOR_MULTIADDER_H
