//
// Created by Trung Dam on 20.12.24.
//

#ifndef WS_BORE1_H
#define WS_BORE1_H
#include "basestateslow1.h"


class WS_Bore1 : public BaseStateSlow1 {
public:
    TriggerProcessingState heightBelt() override;
};



#endif //WS_BORE1_H
