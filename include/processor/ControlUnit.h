//
// Created by Joshua on 3/14/2021.
//

#ifndef INC_16BITEMULATOR_CONTROLUNIT_H
#define INC_16BITEMULATOR_CONTROLUNIT_H

#include "InstructionDecoder.h"
#include "../logic/Condition.h"
#include "../logic/ALU.h"
#include "../memory/CombinedMemory.h"

class ControlUnit {
private:
    InstructionDecoder *instructionDecoder;
    Selector16 *selector16One;
    Selector16 *selector16Two;
    Condition *condition;
    ALU *alu;
    CombinedMemory *combinedMemory;
public:
    ControlUnit();
    ~ControlUnit();
    bool **operate(bool *instruction, bool cl);
};

#endif //INC_16BITEMULATOR_CONTROLUNIT_H
