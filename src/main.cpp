#include <iostream>
#include <sstream>
#include "../include/processor/ControlUnit.h"
#include "../include/processor/ProgramEngine.h"

int main() {
    auto *programEngine = new ProgramEngine();
    auto *controlUnit = new ControlUnit();
    bool isRunning = true;
    bool zero[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false};

    bool *instruction = programEngine->operate(false, zero, false);
    bool **returnValue = controlUnit->operate(instruction, false);

    while (isRunning) {
        instruction = programEngine->operate(returnValue[0][0], returnValue[1], true);
        if (instruction != nullptr && programEngine->getCurrentAddress() < programEngine->getProgramSize()) {
            delete[] returnValue[0];
            delete[] returnValue[1];
            delete[] returnValue;
            returnValue = controlUnit->operate(instruction, true);

            std::cout << returnValue[0][0] << std::endl;
            for (int j = 0; j < 16; j++) {
                std::cout << returnValue[1][j];
            }

            std::cout << std::endl;

            if (programEngine->getCurrentAddress() >= programEngine->getProgramSize() ||
                programEngine->getCurrentAddress() < 0) {
                isRunning = false;
            } else {
                instruction = programEngine->operate(returnValue[0][0], returnValue[1], false);
                if (instruction != nullptr) {
                    delete[] returnValue[0];
                    delete[] returnValue[1];
                    delete[] returnValue;
                    returnValue = controlUnit->operate(instruction, false);
                }
                else {
                    isRunning = false;
                }
            }
        }
        else {
            isRunning = false;
        }
    }

    delete[] returnValue[0];
    delete[] returnValue[1];
    delete[] returnValue;
    delete controlUnit;
    delete programEngine;
    return 0;
}
