//
// Created by Trung Dam on 12.12.24.
//

#ifndef RUNNING2_H
#define RUNNING2_H
#include "fb2runbasestate.h"


class Running2 : public FB2RunBaseState {
public:
    void initSubFSM() override;

    void entry() override;

    void exit() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    TriggerProcessingState heightStart2() override;

    TriggerProcessingState heightEnd2() override;

    TriggerProcessingState metalRise2() override;

    TriggerProcessingState metalFall2() override;

    TriggerProcessingState endRise2() override;

    TriggerProcessingState heightFlat() override;

    TriggerProcessingState heightHigh() override;

    TriggerProcessingState heightBore() override;

    TriggerProcessingState heightBelt() override;

    TriggerProcessingState heightBin() override;

    TriggerProcessingState slideRise2() override;
};



#endif //RUNNING2_H
