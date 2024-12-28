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

TriggerProcessingState Fb1RunWait::end2Fall() {
    leavingState();
    if (data->isFB1Clear()) {
        new(this) Fb1RunIdle;
        enterByDefaultEntryPoint();
    } else {
        new(this) Running;
        enterByDeepHistoryEntryPoint();
    }
    return TriggerProcessingState::consumed;
}
