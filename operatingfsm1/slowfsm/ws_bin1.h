//
// Created by Trung Dam on 20.12.24.
//

#ifndef WS_BIN1_H
#define WS_BIN1_H
#include "basestateslow1.h"


class WS_Bin1 : public BaseStateSlow1 {
public:
    TriggerProcessingState heightBelt() override;

    TriggerProcessingState heightBore() override;

    void enterByDeepHistoryEntryPoint() override;
};



#endif //WS_BIN1_H
