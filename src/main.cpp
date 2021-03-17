#include <iostream>
#include <sstream>
#include "../include/processor/ControlUnit.h"
#include "../include/processor/ProgramEngine.h"

int main() {
    auto *programEngine = new ProgramEngine();
    auto *controlUnit = new ControlUnit();
    bool zero[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false};

    bool *instruction = programEngine->operate(false, zero, false);
    bool **returnValue = controlUnit->operate(instruction, false);

    for (int i = 0; i < programEngine->getProgramSize(); i++) {
        instruction = programEngine->operate(false, returnValue[1], true);
        returnValue = controlUnit->operate(instruction, true);

        std::cout << returnValue[0][0] << std::endl;
        for (int j = 0; j < 16; j++) {
            std::cout << returnValue[1][j];
        }

        std::cout << std::endl;

        instruction = programEngine->operate(false, returnValue[1], false);
        returnValue = controlUnit->operate(instruction, false);
    }

    delete controlUnit;
    return 0;
}
