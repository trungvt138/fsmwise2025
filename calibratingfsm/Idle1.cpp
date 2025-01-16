//
// Created by Trung Dam on 03.01.25.
//

#include "Idle1.h"
#include <iostream>
using namespace std;
#include "AS11.h"

void Idle1::entry() {
    cout << "WS_F auflegen" << endl;
    action->setCaliBand();
}

void Idle1::exit() {
    //cout << "WS_F auflegen" << endl;
    action->driveStopOff1();
    //actions->driveStopOff2();
}

TriggerProcessingState Idle1::startRise1() {
	cout << "enter Cali Idle 1" << endl;
	action->setCaliFlat1();
    leavingState();
    new(this) AS11;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
