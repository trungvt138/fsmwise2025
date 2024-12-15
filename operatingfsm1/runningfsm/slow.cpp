//
// Created by Trung Dam on 12.12.24.
//

#include "slow.h"
#include <iostream>

#include "fast.h"
using namespace std;

void Slow::entry() {
    action->driveSlowOn1();
}

void Slow::exit() {
    action->driveSlowOff1();
}

void Slow::enterByDefaultEntryPoint() {
    entry();
}

void Slow::enterByDeepHistoryEntryPoint() {
    entry();
}

void Slow::leavingState() {
    exit();
}

void Slow::showState() {
    RunningBaseState::showState();
}

TriggerProcessingState Slow::heightEnd1() {
    cout << "Height end 1" << endl;
    leavingState();
    //TODO: save/update ws height
    new(this) Fast;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
