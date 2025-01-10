//
// Created by Trung Dam on 12.12.24.
//

#ifndef IDLE2_H
#define IDLE2_H
#include "fb2runbasestate.h"


class Fb2RunIdle : public FB2RunBaseState {
public:
    void initSubFSM() override;

    void entry() override;

    void exit() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    TriggerProcessingState motor_timer_end() override;

    //TriggerProcessingState startRise2() override;

    TriggerProcessingState endFall1() override;
};



#endif //IDLE2_H
