//
// Created by Trung Dam on 12.12.24.
//

#ifndef FB1_H
#define FB1_H
#include "operatingbasestate1.h"


class FB1 : public OperatingBaseState1 {
public:
    ~FB1() {};

    void entry() override;

    void exit() override;

    void enterViaPseudoStart() override;

    void enterViaDeepHistory() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    void showState() override;

    TriggerProcessingState startRise1() override;

    TriggerProcessingState startFall1() override;

    TriggerProcessingState endRise1() override;

    TriggerProcessingState endFall1() override;

    TriggerProcessingState sortRise1() override;

    TriggerProcessingState sortFall1() override;

    TriggerProcessingState slideRise1() override;

    TriggerProcessingState slideFall1() override;

    TriggerProcessingState heightStart1() override;

    TriggerProcessingState heightEnd1() override;

    TriggerProcessingState metalRise1() override;

    TriggerProcessingState metalFall1() override;

    TriggerProcessingState startShortPressed1() override;

    TriggerProcessingState motor_timer_end() override;
};



#endif //FB1_H
