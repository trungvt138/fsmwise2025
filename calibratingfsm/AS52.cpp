//
// Created by Trung Dam on 03.01.25.
//

#include "AS52.h"
#include <iostream>
#include "AS62.h"
using namespace std;

void AS52::entry() {
	action->driveStopOff2();
	action->driveRight2();
	action->startTimer();
}

void AS52::exit() {
	action->saveTimeSlow(5);
}

TriggerProcessingState AS52::startRise2() {
	cout << "AS52::startRise2()" << endl;
	action->setCaliHighHole2();
    leavingState();
    new(this) AS62;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
