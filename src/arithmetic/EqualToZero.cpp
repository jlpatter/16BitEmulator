//
// Created by Joshua on 3/13/2021.
//

#include "../../include/arithmetic/EqualToZero.h"

EqualToZero::EqualToZero() {
    notGate = new NOTGate[16];
    andGate = new ANDGate[15];
}

EqualToZero::~EqualToZero() {
    delete[] notGate;
    delete[] andGate;
}

bool EqualToZero::operate(bool *a) {
    bool *notA = new bool[16];
    for (int i = 0; i < 16; i++) {
        notA[i] = notGate[i].operate(a[i]);
    }
    bool *andNotA = new bool[8];
    for (int i = 0; i < 16; i += 2) {
        andNotA[i / 2] = andGate[i / 2].operate(notA[i], notA[i + 1]);
    }
    delete[] notA;
    bool *andAndNotA = new bool[4];
    for (int i = 0; i < 8; i += 2) {
        andAndNotA[i / 2] = andGate[(i / 2) + 8].operate(andNotA[i], andNotA[i + 1]);
    }
    delete[] andNotA;
    bool *andAndAndNotA = new bool[2];
    andAndAndNotA[0] = andGate[12].operate(andAndNotA[0], andAndNotA[1]);
    andAndAndNotA[1] = andGate[13].operate(andAndNotA[2], andAndNotA[3]);
    delete[] andAndNotA;
    bool result = andGate[14].operate(andAndAndNotA[0], andAndAndNotA[1]);
    delete[] andAndAndNotA;
    return result;
}
