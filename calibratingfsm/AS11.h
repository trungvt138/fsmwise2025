//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS11_H
#define AS11_H
#include "calibratingbasestate.h"


class AS11 : public CalibratingBaseState {
public:
    void entry() override;
    void exit() override;
    TriggerProcessingState heightStart1() override;
};



#endif //AS11_H
