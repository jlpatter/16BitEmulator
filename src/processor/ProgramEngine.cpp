//
// Created by Joshua on 3/16/2021.
//

#include <fstream>
#include <sstream>
#include <iostream>
#include "../../include/processor/ProgramEngine.h"

ProgramEngine::ProgramEngine() {
    counter = new Counter();
    bool **tempROM = new bool*[100];
    currentAddress = 0;

    std::ifstream infile("../fibo.joshcomp");
    std::string line;
    int k = 0;
    while (std::getline(infile, line))
    {
        std::istringstream iss(line);
        bool *input = new bool[16];
        int i = 0;
        bool hasCommand = false;
        for (char& c : line) {
            if (c == '#') {
                break;
            }
            if (c == '0') {
                hasCommand = true;
                input[i] = false;
            }
            if (c == '1') {
                hasCommand = true;
                input[i] = true;
            }
            i++;
        }

        if (hasCommand) {
            tempROM[k] = input;
            k++;
        }
        else {
            delete[] input;
        }
    }
    programSize = k;
    rom = new bool*[programSize];
    for (int i = 0; i < programSize; i++) {
        rom[i] = tempROM[i];
    }
    delete[] tempROM;
}

ProgramEngine::~ProgramEngine() {
    delete counter;
    for (int i = 0; i < programSize; i++) {
        delete[] rom[i];
    }
    delete[] rom;
}

bool *ProgramEngine::operate(bool j, bool *x, bool cl) {
    bool *y = counter->operate(j, x, cl);
    int addr = bitArrayToInt(y);
    currentAddress = addr;
    return rom[addr];
}

int ProgramEngine::bitArrayToInt(const bool *x) {
    int ret = 0;
    int tmp;
    for (int i = 0; i < 16; i++) {
        tmp = x[i];
        ret |= tmp << (16 - i - 1);
    }
    return ret;
}

int ProgramEngine::getProgramSize() {
    return programSize;
}

int ProgramEngine::getCurrentAddress() {
    return currentAddress;
}
