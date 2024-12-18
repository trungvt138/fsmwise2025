//
// Created by Trung Dam on 03.12.24.
//

#ifndef RESETFSM_H
#define RESETFSM_H
#include "basestateestop.h"


class ResetFSM : public BaseStateEstop {
public:
    TriggerProcessingState handleDefaultExit();

    void enterByDefaultEntryPoint() override;

    void showState() override;

    TriggerProcessingState resetPressed1() override;

    TriggerProcessingState resetPressed2() override;

    TriggerProcessingState estopPressed1() override;

    TriggerProcessingState estopPressed2() override;

    TriggerProcessingState connectionLost() override;
};



#endif //RESETFSM_H
