//
// Created by Trung Dam on 03.01.25.
//
#include "AS62.h"
#include <iostream>
#include "AS72.h"
using namespace std;

void AS62::entry() {
	action->driveSlowOn2();
	action->startTimer();
	action->driveStopOn1();
	action->driveSlowOff1();
}

void AS62::exit() {
//	action->saveTimeFast(6);
	action->saveTimeSlow(6);

}

TriggerProcessingState AS62::heightStart2() {
	cout << "AS62::heightStart2()" << endl;
    leavingState();
    new(this) AS72;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
