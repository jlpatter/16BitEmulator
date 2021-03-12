//
// Created by Joshua on 3/12/2021.
//

#include "../../include/arithmetics/MultiAdder.h"

MultiAdder::MultiAdder() {
    fullAdder = new FullAdder[16];
}

MultiAdder::~MultiAdder() {
    delete[] fullAdder;
}

bool* MultiAdder::operate(bool *a, bool *b, bool c) {
    bool* result = new bool[17];

    std::pair<bool, bool> output = fullAdder[0].operate(a[0], b[0], c);
    result[0] = output.first;

    for (int i = 1; i < 16; i++) {
        output = fullAdder[i].operate(a[i], b[i], output.second);
        result[i] = output.first;
    }

    result[16] = output.second;

    return result;
}
