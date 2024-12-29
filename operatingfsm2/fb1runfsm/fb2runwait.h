//
// Created by Trung Dam on 12.12.24.
//

#ifndef WAIT2_H
#define WAIT2_H
#include "fb2runbasestate.h"


class Fb2RunWait : public FB2RunBaseState {
public:
    void initSubFSM() override;

    void entry() override;

    void exit() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    TriggerProcessingState endFall2() override;
};



#endif //WAIT2_H
