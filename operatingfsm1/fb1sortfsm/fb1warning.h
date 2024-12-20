//
// Created by Trung Dam on 20.12.24.
//

#ifndef FB1WARNING_H
#define FB1WARNING_H
#include "fb1sortbasestate.h"


class FB1Warning : public FB1SortBaseState {
public:
    TriggerProcessingState slideFall1() override;

    TriggerProcessingState sortRise1() override;
};



#endif //FB1WARNING_H
