//
// Created by Trung Dam on 20.12.24.
//

#ifndef FB2WARNING_H
#define FB2WARNING_H
#include "fb2sortbasestate.h"


class FB2Warning : public FB2SortBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState slideFall2() override;

    TriggerProcessingState sortRise2() override;
};



#endif //FB2WARNING_H
