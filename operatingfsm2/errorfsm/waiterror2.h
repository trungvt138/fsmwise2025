//
// Created by Trung Dam on 20.12.24.
//

#ifndef WAITERROR2_H
#define WAITERROR2_H
#include "errorbasestate2.h"

class WaitError2 : public ErrorBaseState2 {
public:
    void exit() override;

    TriggerProcessingState resetPressed1() override;

    TriggerProcessingState resetPressed2() override;
};
#endif //WAITERROR2_H
