//
// Created by Trung Dam on 04.01.25.
//
#ifndef FERTIG1_H
#define FERTIG1_H
#include "calibratingbasestate.h"


class Fertig1 : public CalibratingBaseState {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState endFall2() override;
};



#endif //FERTIG1_H
