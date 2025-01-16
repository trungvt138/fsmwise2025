//
// Created by Trung Dam on 03.01.25.
//

#include "AS31.h"
#include <iostream>

#include "AS41.h"
using namespace std;

void AS31::entry() {
    action->driveSlowOff1();
    action->startTimer();
}

void AS31::exit() {
    action->saveTimeFast(3);
}

TriggerProcessingState AS31::sortRise1() {
	cout << "AS31::sortRise1()" << endl;
    // action->openJunction1();
    //
    // std::thread([this]() {
    // 	std::this_thread::sleep_for(std::chrono::seconds(1));
    // 	action->closeJunction1();
    // }).detach();
    leavingState();
    new(this) AS41;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
