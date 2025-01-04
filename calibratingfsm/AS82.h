//
// Created by Trung Dam on 03.01.25.
//
#ifndef AS82_H
#define AS82_H
#include "calibratingbasestate.h"

class AS82 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState sortRise2() override;
};
#endif //AS82_H
