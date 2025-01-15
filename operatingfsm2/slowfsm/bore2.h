//
// Created by Trung Dam on 20.12.24.
//

#ifndef BORE2_H
#define BORE2_H
#include "basestateslow2.h"


class Bore2 : public BaseStateSlow2 {
public:
    TriggerProcessingState heightHigh() override;
};



#endif //BORE2_H
