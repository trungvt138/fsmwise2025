//
// Created by Trung Dam on 12.12.24.
//

#include "runningbasestate2.h"
#include <iostream>

#include "fast2.h"
#include "../slowfsm/pseudostartslow2.h"
using namespace std;

void RunningBaseState2::initSubFSM() {
    slowfsm = new PseudostartSlow2();
}

void RunningBaseState2::setData(ContextData *data) {
    this->data = data;
    slowfsm->setData(data);
}

void RunningBaseState2::setAction(Actions *action) {
    this->action = action;
    slowfsm->setAction(action);
}

void RunningBaseState2::enterViaPseudoStart() {
    new(this) Fast2;
    enterByDefaultEntryPoint();
}

void RunningBaseState2::enterViaDeepHistory() {
    //entry();
    enterByDefaultEntryPoint();
}

void RunningBaseState2::resetDeepHistory() {
}

