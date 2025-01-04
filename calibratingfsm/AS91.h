//
// Created by Trung Dam on 03.01.25.
//

#ifndef AS91_H
#define AS91_H
#include "calibratingbasestate.h"


class AS91 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState endRise2() override;
};




#endif //AS91_H
