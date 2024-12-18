//
// Created by Trung Dam on 18.12.24.
//

#ifndef BOTHPRESSEDCL_H
#define BOTHPRESSEDCL_H
#include "basestateestop.h"


class BothPressedCL : public BaseStateEstop {
public:
    TriggerProcessingState estopUnpressed1() override;

    TriggerProcessingState connectionBack() override;
};



#endif //BOTHPRESSEDCL_H
