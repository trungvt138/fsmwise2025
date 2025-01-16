//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS51_H
#define AS51_H
#include "calibratingbasestate.h"


class AS51 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState startRise2() override;
};



#endif //AS51_H
