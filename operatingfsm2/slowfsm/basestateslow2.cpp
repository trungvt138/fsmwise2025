//
// Created by Trung Dam on 20.12.24.
//

#include "basestateslow2.h"
#include "idleslow2.h"
#include <iostream>
using namespace std;

void BaseStateSlow2::setData(ContextData *data) {
    this->data = data;
}

void BaseStateSlow2::setAction(Actions *action) {
    this->action = action;
}

void BaseStateSlow2::enterViaPseudoStart() {
    new(this) IdleSlow2;
    enterByDefaultEntryPoint();
}

void BaseStateSlow2::enterViaDeepHistory() {
    enterByDeepHistoryEntryPoint();
}

void BaseStateSlow2::resetDeepHistory() {
}
