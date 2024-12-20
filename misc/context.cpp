//
// Created by Trung Dam on 02.12.24.
//

#include "context.h"

#include "../fsm/pseudostartstate.h"

Context::Context(Actions *shared_action) : action(shared_action) {
    state = new PseudoStartState();
    state->initSubFSM();

    // all state pointer should be initialised now
    state->setData(&data);
    state->setAction(shared_action);

    // ready to go ...
    state->enterViaPseudoStart();  // Start state machine with initial transition
}

Context::~Context() {
    delete state;
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

void Context::ws_lost() {
    state->ws_lost();
}

void Context::ws_early() {
    state->ws_early();
}

void Context::irqUpdate() {
    state->irqUpdate();
}

void Context::ws_height() {
    state->ws_height();
}

void Context::ws_metal() {
    state->ws_metal();
}

void Context::connectionLost() {
    state->connectionLost();
}

void Context::connectionBack() {
    state->connectionBack();
}

void Context::heightFlat() {
    state->heightFlat();
}

void Context::heightHigh() {
    state->heightHigh();
}

void Context::heightBore() {
    state->heightBore();
}

void Context::heightBelt() {
    state->heightBelt();
}

void Context::showState() {
    state->showState();
}
