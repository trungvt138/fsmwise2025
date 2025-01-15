//
// Created by Trung Dam on 03.01.25.
//

#include "Idle2.h"
#include <iostream>
using namespace std;
#include "AS21.h"

void Idle2::entry() {
    CalibratingBaseState::entry();
}

void Idle2::exit() {
    cout << "WS_F auflegen" << endl;
}

TriggerProcessingState Idle2::startRise1() {
    leavingState();
    new(this) AS21;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
