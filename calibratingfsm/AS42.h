//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS42_H
#define AS42_H


#include "calibratingbasestate.h"


class AS42 : public CalibratingBaseState {
public:
    void entry() override;
    void exit() override;
    TriggerProcessingState endRise1() override;
};



#endif //AS42_H
