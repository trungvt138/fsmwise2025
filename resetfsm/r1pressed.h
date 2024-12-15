//
// Created by Trung Dam on 03.12.24.
//

#ifndef R1PRESSED_H
#define R1PRESSED_H
#include "basestatereset.h"


class R1Pressed : public BaseStateReset {
public:
    TriggerProcessingState resetPressed2() override;

    void showState() override;
};



#endif //R1PRESSED_H
