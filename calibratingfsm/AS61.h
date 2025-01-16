//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS61_H
#define AS61_H
#include "calibratingbasestate.h"


class AS61 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState heightStart2() override;
};



#endif //AS61_H
