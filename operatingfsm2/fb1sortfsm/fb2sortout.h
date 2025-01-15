//
// Created by trung on 15/12/2024.
//

#ifndef FB2SORTOUT_H
#define FB2SORTOUT_H
#include "fb2sortbasestate.h"


class FB2SortOut : public FB2SortBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState slideRise2() override;
};



#endif //FB1SORTOUT_H
