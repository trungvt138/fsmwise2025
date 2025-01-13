//
// Created by Trung Dam on 20.12.24.
//

#ifndef WS_FLAT2_H
#define WS_FLAT2_H
#include "basestateslow2.h"


class WS_Flat2 : public BaseStateSlow2 {
public:
    TriggerProcessingState heightBin() override;

    TriggerProcessingState heightBelt() override;
};



#endif //WS_FLAT2_H
