//
// Created by Trung Dam on 12.12.24.
//

#include "fast.h"
#include <iostream>

#include "slow.h"
using namespace std;

void Fast::entry() {
    action->driveRight1();
}

void Fast::exit() {
    RunningBaseState::exit();
}

void Fast::enterByDefaultEntryPoint() {
    entry();
}

void Fast::enterByDeepHistoryEntryPoint() {
    RunningBaseState::enterByDeepHistoryEntryPoint();
}

void Fast::leavingState() {
    RunningBaseState::leavingState();
}

void Fast::showState() {
    RunningBaseState::showState();
}

TriggerProcessingState Fast::heightStart1() {
    leavingState();
    new(this) Slow;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Fast::metalRise1() {
    leavingState();
    new(this) Fast;
    //TODO: update metal ws
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Fast::metalFall1() {
    return RunningBaseState::metalFall1();
}
