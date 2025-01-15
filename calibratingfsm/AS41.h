//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS41_H
#define AS41_H


#include "calibratingbasestate.h"


class AS41 : public CalibratingBaseState {
public:
    void entry() override;
    void exit() override;
    TriggerProcessingState sortRise1() override;
};



#endif //AS41_H
