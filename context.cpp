//
// Created by Trung Dam on 02.12.24.
//

#include "context.h"
#include <thread>
#include <chrono>
#include "../fsm/pseudostartstate.h"

Context::Context(Actions *shared_action, Weltmodell* weltmodell) : action(shared_action) {
    this->weltmodell = weltmodell;
    action->closeJunction1();
    action->closeJunction2();
    action->driveStopOn1();
    action->driveStopOn2();
    action->lightGreenOff1();
    action->lightGreenOff2();
    action->lightRedOff1();
    action->lightYellowOff1();
    action->lightYellowOff2();
	state = new PseudoStartState();
    state->initSubFSM();

    // all state pointer should be initialised now
    state->setData(&data);
    state->setAction(shared_action);
    //state->setWM(weltmodell);

    // ready to go ...
    state->enterViaPseudoStart();  // Start state machine with initial transition
}

Context::~Context() {
    delete state;
}

void Context::updateEstop(bool val) {
    data.setE2PressedAfterCL(val);
}

void Context::startShortPressed1() {
    state->startShortPressed1();
}

void Context::startShortPressed2() {
    state->startShortPressed2();
}

void Context::startLongPressed1() {
    state->startLongPressed1();
}

void Context::startLongPressed2() {
    state->startLongPressed2();
}

void Context::resetPressed1() {
    state->resetPressed1();
}

void Context::resetPressed2() {
    state->resetPressed2();
}

void Context::stopPressed1() {
    state->stopPressed1();
}

void Context::stopPressed2() {
    state->stopPressed2();
}
void Context::estopPressed1() {
    state->estopPressed1();
}

void Context::estopPressed2() {

    state->estopPressed2();
}

void Context::estopUnpressed1() {
    state->estopUnpressed1();
}

void Context::estopUnpressed2() {
    state->estopUnpressed2();
}

void Context::startRise1() {
    state->startRise1();
}

void Context::startFall1() {
    state->startFall1();
}

void Context::startRise2() {
    state->startRise2();
}

void Context::startFall2() {
    state->startFall2();
}

void Context::slideRise1() {
    state->slideRise1();
}

void Context::slideFall1() {
    state->slideFall1();
}

void Context::slideRise2() {
    state->slideRise2();
}

void Context::slideFall2() {
    state->slideFall2();
}

void Context::endRise1() {
    state->endRise1();
}

void Context::endRise2() {
    state->endRise2();
}

void Context::endFall1() {
    state->endFall1();
}

void Context::endFall2() {
    state->endFall2();
}

void Context::sortRise1() {
    state->sortRise1();
}

void Context::sortRise2() {
    state->sortRise2();
}

void Context::heightStart1() {
    state->heightStart1();
}

void Context::heightStart2() {
    state->heightStart2();
}

void Context::heightEnd1() {
    state->heightEnd1();
}

void Context::heightEnd2() {
    state->heightEnd2();
}

void Context::metalRise1() {
    state->metalRise1();
}

void Context::metalFall1() {
    state->metalFall1();
}

void Context::metalRise2() {
    state->metalRise2();
}

void Context::metalFall2() {
    state->metalFall2();
}

void Context::sortFall1() {
    state->sortFall1();
}

void Context::sortFall2() {
    state->sortFall2();
}

void Context::ws_lost1() {
    state->ws_lost1();
}

void Context::ws_early1() {
    state->ws_early1();
}

void Context::ws_lost2() {
    state->ws_lost2();
}

void Context::ws_early2() {
    state->ws_early2();
}

void Context::connectionLost() {
    state->connectionLost();
}

void Context::connectionBack() {
    state->connectionBack();
}

void Context::heightFlat1() {
    state->heightFlat1();
}

void Context::heightHigh1() {
    state->heightHigh1();
}

void Context::heightBore1() {
    state->heightBore1();
}

void Context::heightBelt1() {
    state->heightBelt1();
}

void Context::heightBin1() {
    state->heightBin1();
}

void Context::heightFlat2() {
    state->heightFlat2();
}

void Context::heightHigh2() {
    state->heightHigh2();
}

void Context::heightBore2() {
    state->heightBore2();
}

void Context::heightBelt2() {
    state->heightBelt2();
}

void Context::heightBin2() {
    state->heightBin2();
}

void Context::showState() {
    state->showState();
}
