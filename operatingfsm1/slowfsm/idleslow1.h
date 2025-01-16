//
// Created by Trung Dam on 20.12.24.
//

#ifndef IDLESLOW1_H
#define IDLESLOW1_H
#include "basestateslow1.h"


class IdleSlow1 : public BaseStateSlow1 {
public:
    TriggerProcessingState heightFlat() override;

    TriggerProcessingState heightHigh() override;

    void enterByDeepHistoryEntryPoint() override;
};



#endif //IDLESLOW1_H
