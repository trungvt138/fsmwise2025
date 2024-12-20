//
// Created by Trung Dam on 20.12.24.
//

#ifndef HIGH1_H
#define HIGH1_H
#include "basestateslow1.h"


class High1 : public BaseStateSlow1 {
public:
    TriggerProcessingState heightFlat() override;
};



#endif //HIGH1_H
