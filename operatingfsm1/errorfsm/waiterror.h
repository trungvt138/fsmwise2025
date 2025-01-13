//
// Created by Trung Dam on 20.12.24.
//

#ifndef WAITERROR_H
#define WAITERROR_H
#include "errorbasestate.h"

class WaitError : public ErrorBaseState {
public:
    void exit() override;

    TriggerProcessingState resetPressed1() override;
};
#endif //WAITERROR_H
