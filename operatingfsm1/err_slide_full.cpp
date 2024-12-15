//
// Created by Trung Dam on 12.12.24.
//

#include "err_slide_full.h"

Err_slide_full::~Err_slide_full() {
}

void Err_slide_full::entry() {
    OperatingBaseState1::entry();
}

void Err_slide_full::exit() {
    OperatingBaseState1::exit();
}

void Err_slide_full::enterViaPseudoStart() {
    OperatingBaseState1::enterViaPseudoStart();
}

void Err_slide_full::enterViaDeepHistory() {
    OperatingBaseState1::enterViaDeepHistory();
}

void Err_slide_full::enterByDefaultEntryPoint() {
    OperatingBaseState1::enterByDefaultEntryPoint();
}

void Err_slide_full::enterByDeepHistoryEntryPoint() {
    OperatingBaseState1::enterByDeepHistoryEntryPoint();
}

void Err_slide_full::leavingState() {
    OperatingBaseState1::leavingState();
}

void Err_slide_full::showState() {
    OperatingBaseState1::showState();
}

TriggerProcessingState Err_slide_full::startRise1() {
    return OperatingBaseState1::startRise1();
}

TriggerProcessingState Err_slide_full::startFall1() {
    return OperatingBaseState1::startFall1();
}

TriggerProcessingState Err_slide_full::endRise1() {
    return OperatingBaseState1::endRise1();
}

TriggerProcessingState Err_slide_full::endFall1() {
    return OperatingBaseState1::endFall1();
}

TriggerProcessingState Err_slide_full::sortRise1() {
    return OperatingBaseState1::sortRise1();
}

TriggerProcessingState Err_slide_full::sortFall1() {
    return OperatingBaseState1::sortFall1();
}

TriggerProcessingState Err_slide_full::slideRise1() {
    return OperatingBaseState1::slideRise1();
}

TriggerProcessingState Err_slide_full::slideFall1() {
    return OperatingBaseState1::slideFall1();
}

TriggerProcessingState Err_slide_full::heightStart1() {
    return OperatingBaseState1::heightStart1();
}

TriggerProcessingState Err_slide_full::heightEnd1() {
    return OperatingBaseState1::heightEnd1();
}

TriggerProcessingState Err_slide_full::metalRise1() {
    return OperatingBaseState1::metalRise1();
}

TriggerProcessingState Err_slide_full::metalFall1() {
    return OperatingBaseState1::metalFall1();
}

TriggerProcessingState Err_slide_full::startShortPressed1() {
    return OperatingBaseState1::startShortPressed1();
}
