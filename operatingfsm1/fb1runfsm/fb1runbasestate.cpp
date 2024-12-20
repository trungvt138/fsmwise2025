//
// Created by Trung Dam on 11.12.24.
//

#include "fb1runbasestate.h"
#include "../runningfsm/runningpseudostart.h"
#include "fb1runidle.h"
#include <iostream>
using namespace std;

void FB1RunBaseState::initSubFSM() {
    runningfsm = new RunningPseudoStart();
    runningfsm->initSubFSM();
}

void FB1RunBaseState::setData(ContextData *data) {
    this->data = data;
    runningfsm->setData(data);
}

void FB1RunBaseState::setAction(Actions *action) {
    this->action = action;
    runningfsm->setAction(action);
}

void FB1RunBaseState::enterViaPseudoStart() {
    new(this) Fb1RunIdle;
    enterByDefaultEntryPoint();
}

void FB1RunBaseState::enterViaDeepHistory() {
    enterByDeepHistoryEntryPoint();
}

void FB1RunBaseState::resetDeepHistory() {
    leavingState();
    runningfsm->exit();
    new(this) Fb1RunIdle;
}

void FB1RunBaseState::showState() {
}
