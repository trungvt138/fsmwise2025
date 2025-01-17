//
// Created by Trung Dam on 12.12.24.
//

#include "fb1runwait.h"

#include "fb1runidle.h"
#include <iostream>

#include "fb1running.h"
using namespace std;

void Fb1RunWait::initSubFSM() {
    FB1RunBaseState::initSubFSM();
}

void Fb1RunWait::entry() {
    FB1RunBaseState::entry();
}

void Fb1RunWait::exit() {
	action->driveSlowOff1();
    action->driveRight1();
}

void Fb1RunWait::enterByDefaultEntryPoint() {
    entry();
}

void Fb1RunWait::enterByDeepHistoryEntryPoint() {
    FB1RunBaseState::enterByDeepHistoryEntryPoint();
}

void Fb1RunWait::leavingState() {
    exit();
}

TriggerProcessingState Fb1RunWait::endFall2() {
	cout << "Fb1RunWait::endFall2()" << endl;
    leavingState();
    new(this) Running;
    enterByDeepHistoryEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Fb1RunWait::slideRise2() {
	cout << "Fb1RunWait::slideRise2()" << endl;
    leavingState();
    new(this) Running;
    enterByDeepHistoryEntryPoint();
    return TriggerProcessingState::consumed;
}
