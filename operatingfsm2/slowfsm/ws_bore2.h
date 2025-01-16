//
// Created by Trung Dam on 20.12.24.
//

#ifndef WS_BORE2_H
#define WS_BORE2_H
#include "basestateslow2.h"


class WS_Bore2 : public BaseStateSlow2 {
public:
    TriggerProcessingState heightBelt() override;

    void enterByDeepHistoryEntryPoint() override;
};



#endif //WS_BORE2_H
