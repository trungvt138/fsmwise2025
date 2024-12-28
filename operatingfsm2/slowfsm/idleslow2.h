//
// Created by Trung Dam on 20.12.24.
//

#ifndef IDLESLOW2_H
#define IDLESLOW2_H
#include "basestateslow2.h"


class IdleSlow2 : public BaseStateSlow2 {
public:
    TriggerProcessingState heightFlat() override;

    TriggerProcessingState heightHigh() override;
};



#endif //IDLESLOW2_H
