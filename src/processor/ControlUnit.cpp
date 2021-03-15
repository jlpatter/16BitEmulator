//
// Created by Joshua on 3/14/2021.
//

#include "../../include/processor/ControlUnit.h"

ControlUnit::ControlUnit() {
    instructionDecoder = new InstructionDecoder();
    selector16One = new Selector16();
    selector16Two = new Selector16();
    condition = new Condition();
    alu = new ALU();
    combinedMemory = new CombinedMemory();
}

ControlUnit::~ControlUnit() {
    delete instructionDecoder;
    delete selector16One;
    delete selector16Two;
    delete condition;
    delete alu;
    delete combinedMemory;
}

bool **ControlUnit::operate(bool *instruction, bool cl) {
    bool **instructionResult = instructionDecoder->operate(instruction);
    if (instructionResult[0][0]) {
        bool **memoryResult = combinedMemory->operate(false, false, false, instructionResult[1], cl);
        bool *y = selector16Two->operate(instructionResult[0][3], memoryResult[2], memoryResult[0]);
        bool *aluResult = alu->operate(instructionResult[0][4], instructionResult[0][5], instructionResult[0][6], instructionResult[0][7], instructionResult[0][8], instructionResult[0][9], memoryResult[1], y);
        delete[] memoryResult;
        memoryResult = combinedMemory->operate(instructionResult[0][10], instructionResult[0][11], instructionResult[0][12], aluResult, cl);
        bool j = condition->operate(instructionResult[0][15], instructionResult[0][14], instructionResult[0][13], aluResult);
        bool **finalResult = new bool*[2];
        finalResult[0] = &j;
        finalResult[1] = memoryResult[0];
        delete[] y;
        delete[] memoryResult[1];
        delete[] memoryResult[2];
        delete[] memoryResult;
        delete[] aluResult;
        delete[] instructionResult[0];
        delete[] instructionResult[1];
        delete[] instructionResult;
        return finalResult;
    }
    else {
        bool **memoryResult = combinedMemory->operate(instructionResult[0][10], instructionResult[0][11], instructionResult[0][12], instructionResult[1], cl);
        bool *y = selector16Two->operate(instructionResult[0][3], memoryResult[2], memoryResult[0]);
        bool *aluResult = alu->operate(instructionResult[0][4], instructionResult[0][5], instructionResult[0][6], instructionResult[0][7], instructionResult[0][8], instructionResult[0][9], memoryResult[1], y);
        bool j = condition->operate(instructionResult[0][15], instructionResult[0][14], instructionResult[0][13], aluResult);
        bool **finalResult = new bool*[2];
        finalResult[0] = &j;
        finalResult[1] = memoryResult[0];
        delete[] y;
        delete[] memoryResult[1];
        delete[] memoryResult[2];
        delete[] memoryResult;
        delete[] aluResult;
        delete[] instructionResult[0];
        delete[] instructionResult[1];
        delete[] instructionResult;
        return finalResult;
    }
}

