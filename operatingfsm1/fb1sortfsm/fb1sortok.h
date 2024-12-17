//
// Created by trung on 15/12/2024.
//

#ifndef FB1OK_H
#define FB1OK_H
#include "fb1sortbasestate.h"


class FB1SortOK : FB1SortBaseState {
public:
    void entry() override;

    void exit() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    TriggerProcessingState sortRise1() override;

    TriggerProcessingState sortFall1() override;

    TriggerProcessingState slideRise1() override;

    TriggerProcessingState slideFall1() override;
};



#endif //FB1OK_H
