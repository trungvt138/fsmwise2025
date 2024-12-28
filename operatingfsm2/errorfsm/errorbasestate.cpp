//
// Created by Trung Dam on 20.12.24.
//

#include "errorbasestate.h"

#include "waiterror.h"
#include <iostream>
using namespace std;

void ErrorBaseState::initSubFSM() {
}

void ErrorBaseState::setData(ContextData *data) {
    this->data = data;
}

void ErrorBaseState::setAction(Actions *action) {
    this->action = action;
}

void ErrorBaseState::enterViaPseudoStart() {
    new(this) WaitError;
    enterByDefaultEntryPoint();
}

void ErrorBaseState::enterViaDeepHistory() {
}

void ErrorBaseState::resetDeepHistory() {
}

void ErrorBaseState::showState() {
}
