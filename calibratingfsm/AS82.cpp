//
// Created by Trung Dam on 03.01.25.
//

#include "AS82.h"
#include <iostream>

#include "AS92.h"
using namespace std;

void AS82::entry() {
    action->startTimer();
//    action->driveSlowOff2();
    //TODO: wm->starttimer();
}

void AS82::exit() {
//	action->saveTimeFast(8);
	action->saveTimeSlow(8);
}

TriggerProcessingState AS82::sortRise2() {
	cout << "AS82::sortRise2()" << endl;
//    action->closeJunction2();
//
//    std::thread([this]() {
//    	std::this_thread::sleep_for(std::chrono::seconds(1));
//    	action->openJunction2();
//    }).detach();
    leavingState();
    new(this) AS92;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
