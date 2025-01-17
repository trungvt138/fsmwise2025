//
// Created by Trung Dam on 20.12.24.
//

#ifndef WS_HIGH2_H
#define WS_HIGH2_H
#include "basestateslow2.h"


class WS_High2 : public BaseStateSlow2 {
public:
    TriggerProcessingState heightBin() override;

    TriggerProcessingState heightBore() override;

    TriggerProcessingState heightBelt() override;

    void enterByDeepHistoryEntryPoint() override;
};



#endif //WS_HIGH2_H
