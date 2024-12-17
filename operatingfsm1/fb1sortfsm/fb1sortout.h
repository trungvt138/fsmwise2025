//
// Created by trung on 15/12/2024.
//

#ifndef FB1SORTOUT_H
#define FB1SORTOUT_H
#include "fb1sortbasestate.h"


class FB1SortOut : public FB1SortBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState slideRise1() override;
};



#endif //FB1SORTOUT_H
