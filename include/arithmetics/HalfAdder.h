//
// Created by Joshua on 3/11/2021.
//

#ifndef INC_16BITEMULATOR_HALFADDER_H
#define INC_16BITEMULATOR_HALFADDER_H

#include <utility>
#include "../gates/ANDGate.h"
#include "../gates/XORGate.h"

class HalfAdder {
private:
    ANDGate *andGate;
    XORGate *xorGate;
public:
    HalfAdder();
    ~HalfAdder();
    std::pair<bool, bool> operate(bool a, bool b);
};

#endif //INC_16BITEMULATOR_HALFADDER_H
