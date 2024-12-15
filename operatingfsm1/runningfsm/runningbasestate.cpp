//
// Created by Trung Dam on 12.12.24.
//

#include "runningbasestate.h"
#include <iostream>

#include "fast.h"
using namespace std;

void RunningBaseState::setData(ContextData *data) {
    this->data = data;
}

void RunningBaseState::setAction(Actions *action) {
    this->action = action;
}

void RunningBaseState::enterViaPseudoStart() {
    new(this) Fast;
    enterByDefaultEntryPoint();
}

void RunningBaseState::enterViaDeepHistory() {
    entry();
}

void RunningBaseState::resetDeepHistory() {
}

