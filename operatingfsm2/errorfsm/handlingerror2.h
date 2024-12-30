//
// Created by Trung Dam on 20.12.24.
//

#ifndef HANDLINGERROR2_H
#define HANDLINGERROR2_H
#include "errorbasestate2.h"


class HandlingError2 : public ErrorBaseState2 {
public:
    void entry() override;

    TriggerProcessingState startShortPressed1() override;

    TriggerProcessingState startShortPressed2() override;
};



#endif //HANDLINGERROR2_H
