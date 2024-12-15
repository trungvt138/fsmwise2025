//
// Created by Trung Dam on 12.12.24.
//

#ifndef FAST_H
#define FAST_H
#include "runningbasestate.h"


class Fast : public RunningBaseState {
public:
    void entry() override;

    void exit() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    void showState() override;

    TriggerProcessingState heightStart1() override;

    TriggerProcessingState metalRise1() override;

    TriggerProcessingState metalFall1() override;
};



#endif //FAST_H
