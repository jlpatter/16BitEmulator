//
// Created by Joshua on 3/14/2021.
//

#include "../../include/processor/InstructionDecoder.h"

InstructionDecoder::InstructionDecoder() {
    selectorOne = new Selector16();
    selectorTwo = new Selector16();
    selectorThree = new Selector();
}

InstructionDecoder::~InstructionDecoder() {
    delete selectorOne;
    delete selectorTwo;
    delete selectorThree;
}

bool **InstructionDecoder::operate(bool *x) {
    bool fifteen = x[0];
    bool *zeroBool = new bool[16];
    for (int i = 0; i < 16; i++) {
        zeroBool[i] = false;
    }
    bool *selectOneResult = selectorOne->operate(fifteen, x, zeroBool);
    bool *w = selectorTwo->operate(fifteen, zeroBool, x);
    delete[] zeroBool;
    bool *firstHalf = new bool[16];
    for (int i = 0; i < 16; i++) {
        if (i != 10) {
            firstHalf[i] = selectOneResult[i];
        }
    }
    firstHalf[10] = selectorThree->operate(fifteen, selectOneResult[10], true);
    delete[] selectOneResult;
    bool **finalResult = new bool*[2];
    finalResult[0] = firstHalf;
    finalResult[1] = w;
    return finalResult;
}

