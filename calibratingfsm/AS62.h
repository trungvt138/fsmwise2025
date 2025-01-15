//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS62_H
#define AS62_H
#include "calibratingbasestate.h"


class AS62 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState startRise2() override;
};



#endif //AS62_H
