//
// Created by Trung Dam on 20.12.24.
//

#ifndef WS_HIGH1_H
#define WS_HIGH1_H
#include "basestateslow1.h"


class WS_High1 : public BaseStateSlow1 {
public:
    TriggerProcessingState heightBin() override;

    TriggerProcessingState heightBore() override;

    TriggerProcessingState heightBelt() override;
};



#endif //WS_HIGH1_H
