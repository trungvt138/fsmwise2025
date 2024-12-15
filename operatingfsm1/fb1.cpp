//
// Created by Trung Dam on 12.12.24.
//

#include "fb1.h"
#include <iostream>
using namespace std;

void FB1::entry() {
    OperatingBaseState1::entry();
}

void FB1::exit() {
    OperatingBaseState1::exit();
}

void FB1::enterViaPseudoStart() {
    OperatingBaseState1::enterViaPseudoStart();
}

void FB1::enterViaDeepHistory() {
    entry();
    fb1runFSM->enterViaDeepHistory();
    //fb1sortFSM->enterViaDeepHistory();
}

void FB1::enterByDefaultEntryPoint() {
    entry();
    fb1runFSM->enterViaPseudoStart();
    fb1sortFSM->enterViaPseudoStart();
}

void FB1::enterByDeepHistoryEntryPoint() {
    OperatingBaseState1::enterByDeepHistoryEntryPoint();
}

void FB1::leavingState() {
    OperatingBaseState1::leavingState();
}

void FB1::showState() {
    OperatingBaseState1::showState();
}

TriggerProcessingState FB1::startRise1() {
    return fb1runFSM->startRise1();
}

TriggerProcessingState FB1::motor_timer_end() {
    return fb1runFSM->motor_timer_end();
}

TriggerProcessingState FB1::startFall1() {
    return OperatingBaseState1::startFall1();
}

TriggerProcessingState FB1::endRise1() {
    return OperatingBaseState1::endRise1();
}

TriggerProcessingState FB1::endFall1() {
    return OperatingBaseState1::endFall1();
}

TriggerProcessingState FB1::sortRise1() {
    return OperatingBaseState1::sortRise1();
}

TriggerProcessingState FB1::sortFall1() {
    return OperatingBaseState1::sortFall1();
}

TriggerProcessingState FB1::slideRise1() {
    cout << "slideRise1" << endl;
    return OperatingBaseState1::slideRise1();
}

TriggerProcessingState FB1::slideFall1() {
    return OperatingBaseState1::slideFall1();
}

TriggerProcessingState FB1::heightStart1() {
    return fb1runFSM->heightStart1();
}

TriggerProcessingState FB1::heightEnd1() {
    return fb1runFSM->heightEnd1();
}

TriggerProcessingState FB1::metalRise1() {
    return fb1runFSM->metalRise1();
}

TriggerProcessingState FB1::metalFall1() {
    return fb1runFSM->metalFall1();
}

TriggerProcessingState FB1::startShortPressed1() {
    return OperatingBaseState1::startShortPressed1();
}
