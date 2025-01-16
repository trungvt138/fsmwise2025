//
// Created by Trung Dam on 20.12.24.
//

#ifndef WS_BIN2_H
#define WS_BIN2_H
#include "basestateslow2.h"


class WS_Bin2 : public BaseStateSlow2 {
public:
    TriggerProcessingState heightBelt() override;

    TriggerProcessingState heightBore() override;

    void enterByDeepHistoryEntryPoint() override;
};



#endif //WS_BIN2_H
