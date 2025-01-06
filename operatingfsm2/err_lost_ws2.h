//
// Created by Trung Dam on 22.12.24.
//

#ifndef ERR_LOST_WS2_H
#define ERR_LOST_WS2_H
#include "operatingbasestate2.h"


class Err_lost_ws2 : public OperatingBaseState2 {
public:
    void entry() override;

    void exit() override;

    void enterViaPseudoStart() override;

    void enterViaDeepHistory() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    void showState() override;

    TriggerProcessingState startRise2() override;

    TriggerProcessingState startFall2() override;

    TriggerProcessingState endRise2() override;

    TriggerProcessingState endFall2() override;

    TriggerProcessingState sortRise2() override;

    TriggerProcessingState sortFall2() override;

    TriggerProcessingState slideRise2() override;

    TriggerProcessingState slideFall2() override;

    TriggerProcessingState heightStart2() override;

    TriggerProcessingState heightEnd2() override;

    TriggerProcessingState metalRise2() override;

    TriggerProcessingState metalFall2() override;

    TriggerProcessingState startShortPressed2() override;
};

#endif //ERR_LOST_WS2_H