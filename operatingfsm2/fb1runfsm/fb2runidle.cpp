//
// Created by Trung Dam on 12.12.24.
//

#include "fb2runidle.h"
#include <iostream>
#include "fb2running.h"
using namespace std;

void Fb2RunIdle::entry() {

}

void Fb2RunIdle::exit() {

}

void Fb2RunIdle::initSubFSM() {
    FB2RunBaseState::initSubFSM();
}

void Fb2RunIdle::enterByDefaultEntryPoint() {
    entry();
}

void Fb2RunIdle::enterByDeepHistoryEntryPoint() {
    FB2RunBaseState::enterByDeepHistoryEntryPoint();
}

void Fb2RunIdle::leavingState() {
    exit();
}

TriggerProcessingState Fb2RunIdle::motor_timer_end() {
    cout << "Fb2RunIdle::motor_timer_end" << endl;
    leavingState();
    new(this) Fb2RunIdle;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Fb2RunIdle::endFall1() {
    cout << "Fb2RunIdle::endFall1" << endl;
    leavingState();
    new(this) Running2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

void Fb2RunIdle::showState() {
	cout << "Im in Fb2RunIdle state" << endl;
}
