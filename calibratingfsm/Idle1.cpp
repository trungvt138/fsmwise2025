//
// Created by Trung Dam on 03.01.25.
//

#include "Idle1.h"
#include <iostream>
using namespace std;
#include "AS11.h"

void Idle1::entry() {
    CalibratingBaseState::entry();
}

void Idle1::exit() {
    cout << "WS_F auflegen" << endl;
}

TriggerProcessingState Idle1::startRise1() {
    leavingState();
    new(this) AS11;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
