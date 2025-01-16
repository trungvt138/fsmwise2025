//
// Created by Trung Dam on 03.01.25.
//

#include "AS32.h"
#include <iostream>

#include "AS42.h"
using namespace std;

void AS32::entry() {
    action->startTimer();
}

void AS32::exit() {
	action->saveTimeSlow(3);
}

TriggerProcessingState AS32::sortRise1() {
	cout << "AS32::sortRise1()" << endl;
    action->openJunction1();

    // std::thread([this]() {
    // 	std::this_thread::sleep_for(std::chrono::seconds(2));
    // 	action->closeJunction1();
    // }).detach();
    leavingState();
    new(this) AS42;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
