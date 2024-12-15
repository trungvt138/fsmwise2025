//
// Created by Trung Dam on 12.12.24.
//

#ifndef IDLE_H
#define IDLE_H
#include "fb1runbasestate.h"


class Fb1RunIdle : public FB1RunBaseState {
public:
    void initSubFSM() override;

    void entry() override;

    void exit() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    TriggerProcessingState motor_timer_end() override;

    TriggerProcessingState startRise1() override;
};



#endif //IDLE_H
