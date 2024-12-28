//
// Created by Trung Dam on 12.12.24.
//

#ifndef SLOW_H
#define SLOW_H
#include "runningbasestate.h"


class Slow : public RunningBaseState {
public:
    void entry() override;

    void exit() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    void showState() override;

    //TriggerProcessingState heightEnd1() override;

    TriggerProcessingState handleDefaultExit(TriggerProcessingState state);

    TriggerProcessingState heightFlat() override;

    TriggerProcessingState heightHigh() override;

    TriggerProcessingState heightBore() override;

    TriggerProcessingState heightBelt() override;

};



#endif //SLOW_H
