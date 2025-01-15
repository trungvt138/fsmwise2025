//
// Created by Trung Dam on 11.12.24.
//

#include "fb2runbasestate.h"
#include "../runningfsm/runningpseudostart2.h"
#include "fb2runidle.h"
#include <iostream>
using namespace std;

void FB2RunBaseState::initSubFSM() {
    runningfsm = new RunningPseudoStart2();
    runningfsm->initSubFSM();
}

void FB2RunBaseState::setData(ContextData *data) {
    this->data = data;
    runningfsm->setData(data);
}

void FB2RunBaseState::setAction(Actions *action) {
    this->action = action;
    runningfsm->setAction(action);
}

void FB2RunBaseState::enterViaPseudoStart() {
    new(this) Fb2RunIdle;
    enterByDefaultEntryPoint();
}

void FB2RunBaseState::enterViaDeepHistory() {
    enterByDeepHistoryEntryPoint();
}

void FB2RunBaseState::resetDeepHistory() {
    leavingState();
    runningfsm->exit();
    new(this) Fb2RunIdle;
}

void FB2RunBaseState::showState() {
}
