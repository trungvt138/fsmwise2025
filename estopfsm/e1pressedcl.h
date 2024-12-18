//
// Created by Trung Dam on 18.12.24.
//

#ifndef E1PRESSEDCL_H
#define E1PRESSEDCL_H
#include "basestateestop.h"


class E1PressedCL : public BaseStateEstop {
public:
    TriggerProcessingState estopUnpressed1() override;

    TriggerProcessingState connectionBack() override;
};



#endif //E1PRESSEDCL_H
