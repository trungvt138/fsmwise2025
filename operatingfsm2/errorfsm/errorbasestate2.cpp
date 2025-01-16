//
// Created by Trung Dam on 20.12.24.
//

#include "errorbasestate2.h"

#include "waiterror2.h"
#include <iostream>
using namespace std;

void ErrorBaseState2::initSubFSM() {
}

void ErrorBaseState2::setData(ContextData *data) {
    this->data = data;
}

void ErrorBaseState2::setAction(Actions *action) {
    this->action = action;
}

void ErrorBaseState2::enterViaPseudoStart() {
    new(this) WaitError2;
    enterByDefaultEntryPoint();
}

void ErrorBaseState2::enterViaDeepHistory() {
}

void ErrorBaseState2::resetDeepHistory() {
	exit();
	new(this) ErrorBaseState2;
}

void ErrorBaseState2::showState() {
}
