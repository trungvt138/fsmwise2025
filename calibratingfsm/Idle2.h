//
// Created by Trung Dam on 03.01.25.
//

#ifndef IDLE2_H
#define IDLE2_H
#include "calibratingbasestate.h"


class Idle2 : public CalibratingBaseState {
public:
    void entry() override;
    void exit() override;
    TriggerProcessingState startRise1() override;
};



#endif //IDLE2_H
