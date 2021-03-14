//
// Created by Joshua on 3/14/2021.
//

#include "../../include/logic/ALU.h"

ALU::ALU() {
    ualuOne = new UALU();
    ualuTwo = new UALU();
    multiAdder = new MultiAdder();
    andGate = new ANDGate[16];
    selectorOne = new Selector16();
    selectorTwo = new Selector16();
    notGate = new NOTGate[16];
}

ALU::~ALU() {
    delete ualuOne;
    delete ualuTwo;
    delete multiAdder;
    delete[] andGate;
    delete selectorOne;
    delete selectorTwo;
    delete[] notGate;
}

bool *ALU::operate(bool zx, bool nx, bool zy, bool ny, bool f, bool no, bool *x, bool *y) {
    bool *ualuOneResult = ualuOne->operate(zx, nx, x);
    bool *ualuTwoResult = ualuTwo->operate(zy, ny, y);
    bool *multiAddResult = multiAdder->operate(ualuOneResult, ualuTwoResult, false);
    bool *andGateResult = new bool[16];
    for (int i = 0; i < 16; i++) {
        andGateResult[i] = andGate[i].operate(ualuOneResult[i], ualuTwoResult[i]);
    }
    delete[] ualuOneResult;
    delete[] ualuTwoResult;
    bool *selectorOneResult = selectorOne->operate(f, multiAddResult, andGateResult);
    delete[] multiAddResult;
    delete[] andGateResult;
    bool *invertedSelectorOneResult = new bool[16];
    for (int i = 0; i < 16; i++) {
        invertedSelectorOneResult[i] = notGate[i].operate(selectorOneResult[i]);
    }
    bool *selectorTwoResult = selectorTwo->operate(no, invertedSelectorOneResult, selectorOneResult);
    delete[] invertedSelectorOneResult;
    delete[] selectorOneResult;
    return selectorTwoResult;
}

