//
// Created by Trung Dam on 12.12.24.
//

#ifndef FAST2_H
#define FAST2_H
#include "runningbasestate2.h"


class Fast2 : public RunningBaseState2 {
public:
    void entry() override;

    void exit() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    void showState() override;

    TriggerProcessingState heightStart2() override;

    TriggerProcessingState metalRise2() override;

    TriggerProcessingState metalFall2() override;
};



#endif //FAST2_H
