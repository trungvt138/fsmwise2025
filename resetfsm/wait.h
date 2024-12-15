//
// Created by Trung Dam on 03.12.24.
//

#ifndef WAIT_H
#define WAIT_H
#include "basestatereset.h"


class Wait : public BaseStateReset {
public:
    TriggerProcessingState resetPressed1() override;

    TriggerProcessingState resetPressed2() override;

    void showState() override;
};



#endif //WAIT_H
