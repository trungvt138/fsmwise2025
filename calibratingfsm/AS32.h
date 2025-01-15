//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS32_H
#define AS32_H
#include "calibratingbasestate.h"


class AS32 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState sortRise1() override;
};



#endif //AS32_H
