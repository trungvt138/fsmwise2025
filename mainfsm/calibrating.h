//
// Created by Trung Dam on 08.12.24.
//

#ifndef CALIBRATING_H
#define CALIBRATING_H
#include "basestatemain.h"


class Calibrating : public BaseStateMain {
public:
    void entry() override;
    void exit() override;

    void enterByDefaultEntryPoint() override;

    void resetDeepHistory() override;

    TriggerProcessingState handleDefaultExit(const TriggerProcessingState &handled) override;

    TriggerProcessingState startRise1() override;

    TriggerProcessingState startFall1() override;

    TriggerProcessingState endRise1() override;

    TriggerProcessingState endFall1() override;

    TriggerProcessingState sortRise1() override;

    TriggerProcessingState sortFall1() override;

    TriggerProcessingState heightStart1() override;

    TriggerProcessingState heightEnd1() override;

    TriggerProcessingState startRise2() override;

    TriggerProcessingState startFall2() override;

    TriggerProcessingState endRise2() override;

    TriggerProcessingState endFall2() override;

    TriggerProcessingState sortRise2() override;

    TriggerProcessingState sortFall2() override;

    TriggerProcessingState heightStart2() override;

    TriggerProcessingState heightEnd2() override;
};



#endif //CALIBRATING_H
