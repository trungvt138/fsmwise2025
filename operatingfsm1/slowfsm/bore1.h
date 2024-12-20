//
// Created by Trung Dam on 20.12.24.
//

#ifndef BORE1_H
#define BORE1_H
#include "basestateslow1.h"


class Bore1 : public BaseStateSlow1 {
public:
    TriggerProcessingState heightHigh() override;
};



#endif //BORE1_H
