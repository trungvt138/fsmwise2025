//
// Created by Trung Dam on 12.12.24.
//

#ifndef RUNNING_H
#define RUNNING_H
#include "fb1runbasestate.h"


class Running : public FB1RunBaseState {
public:
    void initSubFSM() override;

    void entry() override;

    void exit() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    TriggerProcessingState heightStart1() override;

    TriggerProcessingState heightEnd1() override;

    TriggerProcessingState metalRise1() override;

    TriggerProcessingState metalFall1() override;

    TriggerProcessingState endRise1() override;

    TriggerProcessingState heightFlat() override;

    TriggerProcessingState heightHigh() override;

    TriggerProcessingState heightBore() override;

    TriggerProcessingState heightBelt() override;
};



#endif //RUNNING_H
