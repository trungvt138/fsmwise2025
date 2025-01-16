//
// Created by Trung Dam on 03.01.25.
//

#include "Idle2.h"
#include <iostream>
using namespace std;
#include "AS12.h"

void Idle2::entry() {
	cout << "WS_B auflegen" << endl;
}

void Idle2::exit() {
    action->driveStopOff1();
}

TriggerProcessingState Idle2::startRise1() {
	action->setCaliHighHole1();
    leavingState();
    new(this) AS12;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
