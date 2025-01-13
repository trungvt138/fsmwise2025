//
// Created by Trung Dam on 18.12.24.
//

#ifndef CONNECTIONLOST_H
#define CONNECTIONLOST_H
#include "basestateestop.h"


class ConnectionLost : public BaseStateEstop {
public:
    TriggerProcessingState estopPressed1() override;

    TriggerProcessingState connectionBack() override;

    TriggerProcessingState estopPressed2() override;
};



#endif //CONNECTIONLOST_H
