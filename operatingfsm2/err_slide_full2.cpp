//
// Created by Trung Dam on 12.12.24.
//

#include "err_slide_full2.h"

void Err_slide_full2::entry() {
    OperatingBaseState2::entry();
}

void Err_slide_full2::exit() {
    OperatingBaseState2::exit();
}

void Err_slide_full2::enterViaPseudoStart() {
    OperatingBaseState2::enterViaPseudoStart();
}

void Err_slide_full2::enterViaDeepHistory() {
    OperatingBaseState2::enterViaDeepHistory();
}

void Err_slide_full2::enterByDefaultEntryPoint() {
    OperatingBaseState2::enterByDefaultEntryPoint();
}

void Err_slide_full2::enterByDeepHistoryEntryPoint() {
    OperatingBaseState2::enterByDeepHistoryEntryPoint();
}

void Err_slide_full2::leavingState() {
    OperatingBaseState2::leavingState();
}

void Err_slide_full2::showState() {
    OperatingBaseState2::showState();
}

TriggerProcessingState Err_slide_full2::startRise2() {
    return OperatingBaseState2::startRise2();
}

TriggerProcessingState Err_slide_full2::startFall2() {
    return OperatingBaseState2::startFall2();
}

TriggerProcessingState Err_slide_full2::endRise2() {
    return OperatingBaseState2::endRise2();
}

TriggerProcessingState Err_slide_full2::endFall2() {
    return OperatingBaseState2::endFall2();
}

TriggerProcessingState Err_slide_full2::sortRise2() {
    return OperatingBaseState2::sortRise2();
}

TriggerProcessingState Err_slide_full2::sortFall2() {
    return OperatingBaseState2::sortFall2();
}

TriggerProcessingState Err_slide_full2::slideRise2() {
    return OperatingBaseState2::slideRise2();
}

TriggerProcessingState Err_slide_full2::slideFall2() {
    return OperatingBaseState2::slideFall2();
}

TriggerProcessingState Err_slide_full2::heightStart2() {
    return OperatingBaseState2::heightStart2();
}

TriggerProcessingState Err_slide_full2::heightEnd2() {
    return OperatingBaseState2::heightEnd2();
}

TriggerProcessingState Err_slide_full2::metalRise2() {
    return OperatingBaseState2::metalRise2();
}

TriggerProcessingState Err_slide_full2::metalFall2() {
    return OperatingBaseState2::metalFall2();
}

TriggerProcessingState Err_slide_full2::startShortPressed2() {
    return OperatingBaseState2::startShortPressed2();
}
