//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS52_H
#define AS52_H
#include "calibratingbasestate.h"


class AS52 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState startRise2() override;
};



#endif //AS52_H
