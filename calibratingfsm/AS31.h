//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS31_H
#define AS31_H
#include "calibratingbasestate.h"


class AS31 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState sortRise1() override;
};



#endif //AS31_H
