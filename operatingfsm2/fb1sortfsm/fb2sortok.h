//
// Created by trung on 15/12/2024.
//

#ifndef FB2OK_H
#define FB2OK_H
#include "fb2sortbasestate.h"


class FB2SortOK : public FB2SortBaseState {
public:
    void entry() override;

    void exit() override;

    void enterByDefaultEntryPoint() override;

    void enterByDeepHistoryEntryPoint() override;

    void leavingState() override;

    TriggerProcessingState sortRise2() override;

    TriggerProcessingState sortFall2() override;

    TriggerProcessingState slideRise2() override;

    TriggerProcessingState slideFall2() override;
};



#endif //FB2OK_H
