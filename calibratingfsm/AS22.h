//
// Created by Trung Dam on 04.01.25.
//

#ifndef AS22_H
#define AS22_H
#include "calibratingbasestate.h"


class AS22 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState heightEnd1() override;
};



#endif //AS22_H
