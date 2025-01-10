//
// Created by Trung Dam on 12.12.24.
//

#ifndef FB2_H
#define FB2_H
#include "operatingbasestate2.h"


class FB2 : public OperatingBaseState2 {
public:
    void entry() override;

    void exit() override;

    void enterViaPseudoStart() override;

    void enterViaDeepHistory() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    void showState() override;

    TriggerProcessingState handleDefaultExit(TriggerProcessingState processing_state);

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


    TriggerProcessingState endFall1() override;


    TriggerProcessingState startShortPressed2() override;

    TriggerProcessingState ws_early() override;

    TriggerProcessingState ws_lost() override;

    TriggerProcessingState heightFlat2() override;

    TriggerProcessingState heightHigh2() override;

    TriggerProcessingState heightBore2() override;

    TriggerProcessingState heightBelt2() override;
};



#endif //FB2_H
