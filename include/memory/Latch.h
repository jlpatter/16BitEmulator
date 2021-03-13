//
// Created by Joshua on 3/13/2021.
//

#ifndef INC_16BITEMULATOR_LATCH_H
#define INC_16BITEMULATOR_LATCH_H

class Latch {
private:
    bool out;
public:
    Latch();
    ~Latch();
    bool operate(bool st, bool d);
};

#endif //INC_16BITEMULATOR_LATCH_H
