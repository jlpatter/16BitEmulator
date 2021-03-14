//
// Created by Joshua on 3/13/2021.
//

#include "../../include/logic/UALU.h"

UALU::UALU() {
    selectOne = new Selector();
    selectTwo = new Selector();
    notGate = new NOTGate[16];
}

UALU::~UALU() {
    delete selectOne;
    delete selectTwo;
    delete[] notGate;
}

bool *UALU::operate(bool z, bool n, bool *x) {
    bool *zero = new bool[16];
    for (int i = 0; i < 16; i++) {
        zero[i] = false;
    }
    bool *selectOneResult = selectOne->operate(z, zero, x);
    bool *invertSelectOneResult = new bool[16];
    for (int i = 0; i < 16; i++) {
        invertSelectOneResult[i] = notGate[i].operate(selectOneResult[i]);
    }
    bool *selectTwoResult = selectTwo->operate(n, invertSelectOneResult, selectOneResult);
    delete[] selectOneResult;
    delete[] invertSelectOneResult;
    delete[] zero;
    return selectTwoResult;
}

