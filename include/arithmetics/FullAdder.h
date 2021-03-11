//
// Created by Joshua on 3/11/2021.
//

#ifndef INC_16BITEMULATOR_FULLADDER_H
#define INC_16BITEMULATOR_FULLADDER_H

#include <utility>
#include "../gates/ORGate.h"
#include "HalfAdder.h"

class FullAdder {
private:
    ORGate *orGate;
    HalfAdder *halfAdder1;
    HalfAdder *halfAdder2;
public:
    FullAdder();
    ~FullAdder();
    std::pair<bool, bool> operate(bool a, bool b, bool c);
};

#endif //INC_16BITEMULATOR_FULLADDER_H
