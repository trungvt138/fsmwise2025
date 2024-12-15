//
// Created by Trung Dam on 03.12.24.
//

#ifndef ESTOPFSM_H
#define ESTOPFSM_H
#include "basestate.h"


class EstopFSM : public BaseState {
public:
    void enterViaPortE1() override;

    void enterViaPortE2() override;

    void handleDefaultExit(const TriggerProcessingState &handled) override;

    void entry() override;

    void exit() override;

    void showState() override;

    void resetPressed1() override;

    void resetPressed2() override;

    void estopPressed1() override;

    void estopPressed2() override;

    void estopUnpressed1() override;

    void estopUnpressed2() override;

    //void connectionLost() override;

    //void connectionBack() override;
};



#endif //ESTOPFSM_H
