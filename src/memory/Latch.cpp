//
// Created by Joshua on 3/13/2021.
//

#include "../../include/memory/Latch.h"

Latch::Latch() {
    out = false;
}

Latch::~Latch() = default;

bool Latch::operate(bool st, bool d) {
    if (st) {
        out = d;
    }
    return out;
}

