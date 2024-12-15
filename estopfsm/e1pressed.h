//
// Created by Trung Dam on 03.12.24.
//

#ifndef E1PRESSED_H
#define E1PRESSED_H
#include "basestateestop.h"


class E1Pressed : public BaseStateEstop {
public:
    TriggerProcessingState estopPressed2() override;

    TriggerProcessingState estopUnpressed1() override;

    void showState() override;
};



#endif //E1PRESSED_H
