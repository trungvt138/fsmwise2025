//
// Created by Trung Dam on 12.12.24.
//

#include "err_new_ws.h"

Err_new_ws::~Err_new_ws() {
}

void Err_new_ws::entry() {
    OperatingBaseState1::entry();
}

void Err_new_ws::exit() {
    OperatingBaseState1::exit();
}

void Err_new_ws::enterViaPseudoStart() {
    OperatingBaseState1::enterViaPseudoStart();
}

void Err_new_ws::enterViaDeepHistory() {
    OperatingBaseState1::enterViaDeepHistory();
}

void Err_new_ws::enterByDefaultEntryPoint() {
    OperatingBaseState1::enterByDefaultEntryPoint();
}

void Err_new_ws::enterByDeepHistoryEntryPoint() {
    OperatingBaseState1::enterByDeepHistoryEntryPoint();
}

void Err_new_ws::leavingState() {
    OperatingBaseState1::leavingState();
}

void Err_new_ws::showState() {
    OperatingBaseState1::showState();
}

TriggerProcessingState Err_new_ws::startRise1() {
    return OperatingBaseState1::startRise1();
}

TriggerProcessingState Err_new_ws::startFall1() {
    return OperatingBaseState1::startFall1();
}

TriggerProcessingState Err_new_ws::endRise1() {
    return OperatingBaseState1::endRise1();
}

TriggerProcessingState Err_new_ws::endFall1() {
    return OperatingBaseState1::endFall1();
}

TriggerProcessingState Err_new_ws::sortRise1() {
    return OperatingBaseState1::sortRise1();
}

TriggerProcessingState Err_new_ws::sortFall1() {
    return OperatingBaseState1::sortFall1();
}

TriggerProcessingState Err_new_ws::slideRise1() {
    return OperatingBaseState1::slideRise1();
}

TriggerProcessingState Err_new_ws::slideFall1() {
    return OperatingBaseState1::slideFall1();
}

TriggerProcessingState Err_new_ws::heightStart1() {
    return OperatingBaseState1::heightStart1();
}

TriggerProcessingState Err_new_ws::heightEnd1() {
    return OperatingBaseState1::heightEnd1();
}

TriggerProcessingState Err_new_ws::metalRise1() {
    return OperatingBaseState1::metalRise1();
}

TriggerProcessingState Err_new_ws::metalFall1() {
    return OperatingBaseState1::metalFall1();
}

TriggerProcessingState Err_new_ws::startShortPressed1() {
    return OperatingBaseState1::startShortPressed1();
}
