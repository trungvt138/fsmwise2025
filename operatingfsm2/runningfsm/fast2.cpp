//
// Created by Trung Dam on 12.12.24.
//

#include "fast2.h"
#include <iostream>

#include "slow2.h"
using namespace std;

void Fast2::entry() {
    action->driveRight2();
}

void Fast2::exit() {
    RunningBaseState2::exit();
}

void Fast2::enterByDefaultEntryPoint() {
    entry();
}

void Fast2::enterByDeepHistoryEntryPoint() {
    RunningBaseState2::enterByDeepHistoryEntryPoint();
}

void Fast2::leavingState() {
    RunningBaseState2::leavingState();
}

void Fast2::showState() {
    RunningBaseState2::showState();
}

TriggerProcessingState Fast2::heightStart2() {
    leavingState();
    new(this) Slow2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Fast2::metalRise2() {
    leavingState();
    new(this) Fast2;
    //TODO: update metal ws
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Fast2::metalFall2() {
    return RunningBaseState2::metalFall2();
}
