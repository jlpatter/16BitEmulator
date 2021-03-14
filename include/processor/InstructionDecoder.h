//
// Created by Joshua on 3/14/2021.
//

#ifndef INC_16BITEMULATOR_INSTRUCTIONDECODER_H
#define INC_16BITEMULATOR_INSTRUCTIONDECODER_H

#include "../plumbing/Selector16.h"
#include "../plumbing/Selector.h"

class InstructionDecoder {
private:
    Selector16 *selectorOne;
    Selector16 *selectorTwo;
    Selector *selectorThree;
public:
    InstructionDecoder();
    ~InstructionDecoder();
    bool **operate(bool *x);
};

#endif //INC_16BITEMULATOR_INSTRUCTIONDECODER_H
