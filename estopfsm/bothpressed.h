//
// Created by Trung Dam on 03.12.24.
//

#ifndef BOTHPRESSED_H
#define BOTHPRESSED_H
#include "basestateestop.h"


class BothPressed : public BaseStateEstop {
public:
    TriggerProcessingState estopUnpressed1() override;

    TriggerProcessingState estopUnpressed2() override;

    TriggerProcessingState connectionLost() override;

    void showState() override;
};



#endif //BOTHPRESSED_H
