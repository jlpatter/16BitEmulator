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

    std::pair<bool, bool> output = fullAdder[15].operate(a[15], b[15], c);
    result[16] = output.second;

    for (int i = 14; i >= 0; i--) {
        output = fullAdder[i].operate(a[i], b[i], output.first);
        result[i + 1] = output.second;
    }

    result[0] = output.first;

    return result;
}
