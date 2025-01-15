//
// Created by Trung Dam on 03.01.25.
//
#ifndef AS81_H
#define AS81_H
#include "calibratingbasestate.h"

class AS81 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState sortRise2() override;
};
#endif //AS81_H
