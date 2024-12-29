//
// Created by Trung Dam on 12.12.24.
//

#include "fb2runwait.h"

#include "fb2runidle.h"
#include <iostream>

#include "fb2running.h"
using namespace std;

void Fb2RunWait::initSubFSM() {
    FB2RunBaseState::initSubFSM();
}

void Fb2RunWait::entry() {
    FB2RunBaseState::entry();
}

void Fb2RunWait::exit() {
    action->driveRight1();
}

void Fb2RunWait::enterByDefaultEntryPoint() {
    entry();
}

void Fb2RunWait::enterByDeepHistoryEntryPoint() {
    FB2RunBaseState::enterByDeepHistoryEntryPoint();
}

void Fb2RunWait::leavingState() {
    exit();
}

TriggerProcessingState Fb2RunWait::endFall2() {
    leavingState();
    if (data->isFB1Clear()) {
        new(this) Fb2RunIdle;
        enterByDefaultEntryPoint();
    } else {
        new(this) Running2;
        enterByDeepHistoryEntryPoint();
    }
    return TriggerProcessingState::consumed;
}
