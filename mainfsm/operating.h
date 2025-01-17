//
// Created by Trung Dam on 08.12.24.
//

#ifndef OPERATING_H
#define OPERATING_H
#include "basestatemain.h"


class Operating : public BaseStateMain {
public:
    void entry() override;
    void exit() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void resetDeepHistory() override;

    TriggerProcessingState resetPressed1() override;

    TriggerProcessingState resetPressed2() override;

    TriggerProcessingState stopPressed1() override;

    TriggerProcessingState stopPressed2() override;

    TriggerProcessingState startRise1() override;

    TriggerProcessingState startFall1() override;

    TriggerProcessingState startRise2() override;

    TriggerProcessingState startFall2() override;

    TriggerProcessingState slideRise1() override;

    TriggerProcessingState slideFall1() override;

    TriggerProcessingState slideRise2() override;

    TriggerProcessingState slideFall2() override;

    TriggerProcessingState endRise1() override;

    TriggerProcessingState endRise2() override;

    TriggerProcessingState endFall1() override;

    TriggerProcessingState endFall2() override;

    TriggerProcessingState heightStart1() override;

    TriggerProcessingState heightStart2() override;

    TriggerProcessingState heightEnd1() override;

    TriggerProcessingState heightEnd2() override;

    TriggerProcessingState metalRise1() override;

    TriggerProcessingState metalFall1() override;

    TriggerProcessingState metalRise2() override;

    TriggerProcessingState metalFall2() override;

    TriggerProcessingState sortRise1() override;

    TriggerProcessingState sortFall1() override;

    TriggerProcessingState sortRise2() override;

    TriggerProcessingState sortFall2() override;

    //TriggerProcessingState connectionLost() override;

    TriggerProcessingState startShortPressed1() override;

    TriggerProcessingState startShortPressed2() override;

    TriggerProcessingState ws_early1() override;

    TriggerProcessingState ws_lost1() override;

    TriggerProcessingState ws_early2() override;

    TriggerProcessingState ws_lost2() override;

    TriggerProcessingState heightFlat1() override;

    TriggerProcessingState heightHigh1() override;

    TriggerProcessingState heightBore1() override;

    TriggerProcessingState heightBelt1() override;

    TriggerProcessingState heightBin1() override;

    TriggerProcessingState heightFlat2() override;

    TriggerProcessingState heightHigh2() override;

    TriggerProcessingState heightBore2() override;

    TriggerProcessingState heightBelt2() override;

    TriggerProcessingState heightBin2() override;

    void showState() override;
};



#endif //OPERATING_H
