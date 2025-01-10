//
// Created by Trung Dam on 12.12.24.
//

#include "runningbasestate.h"
#include <iostream>

#include "fast.h"
#include "../slowfsm/pseudostartslow1.h"
using namespace std;

void RunningBaseState::initSubFSM() {
    slowfsm = new PseudostartSlow1();
}

void RunningBaseState::setData(ContextData *data) {
    this->data = data;
    slowfsm->setData(data);
}

void RunningBaseState::setAction(Actions *action) {
    this->action = action;
    slowfsm->setAction(action);
}

void RunningBaseState::enterViaPseudoStart() {
    new(this) Fast;
    enterByDefaultEntryPoint();
}

void RunningBaseState::enterViaDeepHistory() {
    entry();
    enterByDefaultEntryPoint();
}

void RunningBaseState::resetDeepHistory() {
}

