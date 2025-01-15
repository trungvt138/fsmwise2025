//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS21_H
#define AS21_H
#include "calibratingbasestate.h"


class AS21 : public CalibratingBaseState {
public:
    void entry() override;
    void exit() override;
    TriggerProcessingState heightStart1() override;
};



#endif //AS21_H
