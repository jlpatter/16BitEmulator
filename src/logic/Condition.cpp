//
// Created by Joshua on 3/14/2021.
//

#include "../../include/logic/Condition.h"

Condition::Condition() {
    lessThanZero = new LessThanZero();
    equalToZero = new EqualToZero();
    notGateOne = new NOTGate();
    notGateTwo = new NOTGate();
    andGateOne = new ANDGate();
    andGateTwo = new ANDGate();
    andGateThree = new ANDGate();
    andGateFour = new ANDGate();
    orGateOne = new ORGate();
    orGateTwo = new ORGate();
}

Condition::~Condition() {
    delete lessThanZero;
    delete equalToZero;
    delete notGateOne;
    delete notGateTwo;
    delete andGateOne;
    delete andGateTwo;
    delete andGateThree;
    delete andGateFour;
    delete orGateOne;
    delete orGateTwo;
}

bool Condition::operate(bool lt, bool eq, bool gt, bool *x) {
    bool lessThanZeroResult = lessThanZero->operate(x);
    bool equalToZeroResult = equalToZero->operate(x);
    bool andGateOneResult = andGateOne->operate(lessThanZeroResult, lt);
    bool andGateTwoResult = andGateTwo->operate(equalToZeroResult, eq);
    bool orGateOneResult = orGateOne->operate(andGateOneResult, andGateTwoResult);
    bool notGateOneResult = notGateOne->operate(lessThanZeroResult);
    bool notGateTwoResult = notGateTwo->operate(equalToZeroResult);
    bool andGateFourResult = andGateFour->operate(notGateOneResult, notGateTwoResult);
    bool andGateThreeResult = andGateThree->operate(gt, andGateFourResult);
    bool orGateTwoResult = orGateTwo->operate(orGateOneResult, andGateThreeResult);
    return orGateTwoResult;
}

