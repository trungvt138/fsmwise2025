//
// Created by Trung Dam on 20.12.24.
//

#ifndef WS_FLAT1_H
#define WS_FLAT1_H
#include "basestateslow1.h"


class WS_Flat1 : public BaseStateSlow1 {
public:
    TriggerProcessingState heightBelt() override;

    TriggerProcessingState heightBin() override;
};



#endif //WS_FLAT1_H
