//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS72_H
#define AS72_H
#include "calibratingbasestate.h"


class AS72 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState heightStart2() override;
};



#endif //AS72_H
