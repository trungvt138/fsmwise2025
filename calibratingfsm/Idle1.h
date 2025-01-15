//
// Created by Trung Dam on 03.01.25.
//

#ifndef IDLE1_H
#define IDLE1_H
#include "calibratingbasestate.h"


class Idle1 : public CalibratingBaseState {
public:
    void entry() override;
    void exit() override;
    TriggerProcessingState startRise1() override;
};



#endif //IDLE1_H
