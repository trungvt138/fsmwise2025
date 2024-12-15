//
// Created by Trung Dam on 08.12.24.
//

#ifndef IDLE_H
#define IDLE_H
#include "basestatemain.h"


class Idle : public BaseStateMain {
public:
    void entry() override;
    void exit() override;
    TriggerProcessingState startShortPressed1() override;
    TriggerProcessingState startShortPressed2() override;
    TriggerProcessingState startLongPressed1() override;
    TriggerProcessingState startLongPressed2() override;
    void resetDeepHistory() override;

    void showState() override;
};



#endif //IDLE_H
