//
// Created by Trung Dam on 12.12.24.
//

#ifndef WAIT_H
#define WAIT_H
#include "fb1runbasestate.h"


class Fb1RunWait : public FB1RunBaseState {
public:
    void initSubFSM() override;

    void entry() override;

    void exit() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    TriggerProcessingState endFall2() override;

    TriggerProcessingState slideRise2() override;
};



#endif //WAIT_H
