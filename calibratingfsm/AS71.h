//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS71_H
#define AS71_H
#include "calibratingbasestate.h"


class AS71 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState heightEnd2() override;
};



#endif //AS71_H
