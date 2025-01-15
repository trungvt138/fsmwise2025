//
// Created by Trung Dam on 04.01.25.
//
#ifndef FERTIG2_H
#define FERTIG2_H
#include "calibratingbasestate.h"


class Fertig2 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState endFall2() override;
};



#endif //FERTIG2_H
