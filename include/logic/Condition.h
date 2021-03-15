//
// Created by Joshua on 3/14/2021.
//

#ifndef INC_16BITEMULATOR_CONDITION_H
#define INC_16BITEMULATOR_CONDITION_H

#include "../arithmetic/LessThanZero.h"
#include "../arithmetic/EqualToZero.h"
#include "../gates/ORGate.h"

class Condition {
private:
    LessThanZero *lessThanZero;
    EqualToZero *equalToZero;
    NOTGate *notGateOne;
    NOTGate *notGateTwo;
    ANDGate *andGateOne;
    ANDGate *andGateTwo;
    ANDGate *andGateThree;
    ANDGate *andGateFour;
    ORGate *orGateOne;
    ORGate *orGateTwo;
public:
    Condition();
    ~Condition();
    bool *operate(bool lt, bool eq, bool gt, bool *x);
};

#endif //INC_16BITEMULATOR_CONDITION_H
