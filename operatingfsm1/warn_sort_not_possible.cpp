//
// Created by Trung Dam on 12.12.24.
//

#include "warn_sort_not_possible.h"

Warn_sort_not_possible::~Warn_sort_not_possible() {
}

void Warn_sort_not_possible::entry() {
    OperatingBaseState1::entry();
}

void Warn_sort_not_possible::exit() {
    OperatingBaseState1::exit();
}

void Warn_sort_not_possible::enterViaPseudoStart() {
    OperatingBaseState1::enterViaPseudoStart();
}

void Warn_sort_not_possible::enterViaDeepHistory() {
    OperatingBaseState1::enterViaDeepHistory();
}

void Warn_sort_not_possible::enterByDefaultEntryPoint() {
    OperatingBaseState1::enterByDefaultEntryPoint();
}

void Warn_sort_not_possible::enterByDeepHistoryEntryPoint() {
    OperatingBaseState1::enterByDeepHistoryEntryPoint();
}

void Warn_sort_not_possible::leavingState() {
    OperatingBaseState1::leavingState();
}

void Warn_sort_not_possible::showState() {
    OperatingBaseState1::showState();
}

TriggerProcessingState Warn_sort_not_possible::startRise1() {
    return OperatingBaseState1::startRise1();
}

TriggerProcessingState Warn_sort_not_possible::startFall1() {
    return OperatingBaseState1::startFall1();
}

TriggerProcessingState Warn_sort_not_possible::endRise1() {
    return OperatingBaseState1::endRise1();
}

TriggerProcessingState Warn_sort_not_possible::endFall1() {
    return OperatingBaseState1::endFall1();
}

TriggerProcessingState Warn_sort_not_possible::sortRise1() {
    return OperatingBaseState1::sortRise1();
}

TriggerProcessingState Warn_sort_not_possible::sortFall1() {
    return OperatingBaseState1::sortFall1();
}

TriggerProcessingState Warn_sort_not_possible::slideRise1() {
    return OperatingBaseState1::slideRise1();
}

TriggerProcessingState Warn_sort_not_possible::slideFall1() {
    return OperatingBaseState1::slideFall1();
}

TriggerProcessingState Warn_sort_not_possible::heightStart1() {
    return OperatingBaseState1::heightStart1();
}

TriggerProcessingState Warn_sort_not_possible::heightEnd1() {
    return OperatingBaseState1::heightEnd1();
}

TriggerProcessingState Warn_sort_not_possible::metalRise1() {
    return OperatingBaseState1::metalRise1();
}

TriggerProcessingState Warn_sort_not_possible::metalFall1() {
    return OperatingBaseState1::metalFall1();
}

TriggerProcessingState Warn_sort_not_possible::startShortPressed1() {
    return OperatingBaseState1::startShortPressed1();
}
