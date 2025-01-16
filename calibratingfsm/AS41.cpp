//
// Created by Trung Dam on 03.01.25.
//

#include "AS41.h"
#include <iostream>

#include "AS51.h"
using namespace std;

void AS41::entry() {
    action->startTimer();
}

void AS41::exit() {
    action->saveTimeFast(4);
    action->driveStopOff2();
}

TriggerProcessingState AS41::endRise1() {
	cout << "AS41::endRise1()" << endl;
    leavingState();
    new(this) AS51;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}


