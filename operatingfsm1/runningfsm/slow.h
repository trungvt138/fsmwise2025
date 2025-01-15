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

    TriggerProcessingState heightFlat1() override;

    TriggerProcessingState heightHigh1() override;

    TriggerProcessingState heightBore1() override;

    TriggerProcessingState heightBelt1() override;

    TriggerProcessingState heightBin1() override;

};



#endif //SLOW_H
