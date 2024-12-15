//
// Created by Trung Dam on 03.12.24.
//

#ifndef E2PRESSED_H
#define E2PRESSED_H
#include "basestateestop.h"


class E2Pressed : public BaseStateEstop {
public:
    TriggerProcessingState estopPressed1() override;

    TriggerProcessingState estopUnpressed2() override;

    void showState() override;
};



#endif //E2PRESSED_H
