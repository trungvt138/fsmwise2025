//
// Created by Trung Dam on 20.12.24.
//

#ifndef HANDLINGERROR_H
#define HANDLINGERROR_H
#include "errorbasestate.h"


class HandlingError : public ErrorBaseState {
public:
    void entry() override;

    TriggerProcessingState startShortPressed1() override;
};



#endif //HANDLINGERROR_H
