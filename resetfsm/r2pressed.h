//
// Created by Trung Dam on 03.12.24.
//

#ifndef R2PRESSED_H
#define R2PRESSED_H
#include "basestatereset.h"


class R2Pressed : public BaseStateReset {
public:
    void showState() override;

    TriggerProcessingState resetPressed1() override;
};



#endif //R2PRESSED_H
