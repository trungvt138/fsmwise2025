//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS92_H
#define AS92_H
#include "calibratingbasestate.h"


class AS92 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState endRise2() override;
};




#endif //AS91_H
