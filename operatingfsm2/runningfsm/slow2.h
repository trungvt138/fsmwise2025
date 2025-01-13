//
// Created by Trung Dam on 12.12.24.
//

#ifndef SLOW2_H
#define SLOW2_H
#include "runningbasestate2.h"


class Slow2 : public RunningBaseState2 {
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

    TriggerProcessingState heightBin() override;

};



#endif //SLOW_H
