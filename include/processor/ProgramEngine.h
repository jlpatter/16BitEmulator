//
// Created by Joshua on 3/16/2021.
//

#ifndef INC_16BITEMULATOR_PROGRAMENGINE_H
#define INC_16BITEMULATOR_PROGRAMENGINE_H

#include "../memory/Counter.h"

class ProgramEngine {
private:
    Counter *counter;
    bool **rom;
    int programSize;
    int currentAddress;
public:
    ProgramEngine();
    ~ProgramEngine();
    int getProgramSize() const;
    int getCurrentAddress() const;
    bool *operate(bool j, bool *x, bool cl);
    static int bitArrayToInt(const bool *x);
};

#endif //INC_16BITEMULATOR_PROGRAMENGINE_H
