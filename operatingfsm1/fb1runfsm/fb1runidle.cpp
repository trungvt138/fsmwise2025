//
// Created by Trung Dam on 12.12.24.
//

#include "fb1runidle.h"
#include <iostream>
#include "fb1running.h"
using namespace std;

void Fb1RunIdle::entry() {

}

void Fb1RunIdle::exit() {

}

void Fb1RunIdle::initSubFSM() {
    FB1RunBaseState::initSubFSM();
}

void Fb1RunIdle::enterByDefaultEntryPoint() {
    entry();
}

void Fb1RunIdle::enterByDeepHistoryEntryPoint() {
    FB1RunBaseState::enterByDeepHistoryEntryPoint();
}

void Fb1RunIdle::leavingState() {
    exit();
}

TriggerProcessingState Fb1RunIdle::startRise1() {
    cout << "Fb1RunIdle::startRise1" << endl;
    leavingState();
    new(this) Running;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

void Fb1RunIdle::showState() {
	cout << "Im in Fb1RunIdle" << endl;
}
