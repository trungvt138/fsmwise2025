//
// Created by Trung Dam on 03.01.25.
//

#include "AS51.h"
#include <iostream>

#include "AS61.h"
using namespace std;

void AS51::entry() {
    action->startTimer();
}

void AS51::exit() {
    action->saveTimeFast(5);
    action->driveStopOn1();
}

TriggerProcessingState AS51::startRise2() {
	cout << "AS51::startRise2()" << endl;
	action->setCaliFlat2();
    leavingState();
    new(this) AS61;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
