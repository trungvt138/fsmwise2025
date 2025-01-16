//
// Created by Trung Dam on 03.01.25.
//

#include "AS81.h"
#include <iostream>

#include "AS91.h"
using namespace std;

void AS81::entry() {
	action->startTimer();
    action->driveSlowOff2();
}

void AS81::exit() {
	action->saveTimeFast(8);
    //TODO: wm->savetime();
}

TriggerProcessingState AS81::sortRise2() {
//    action->closeJunction2();
//
//    std::thread([this]() {
//    	std::this_thread::sleep_for(std::chrono::seconds(1));
//    	action->openJunction2();
//    }).detach();
    leavingState();
    new(this) AS91;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
