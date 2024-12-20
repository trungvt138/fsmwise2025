//
// Created by Trung Dam on 20.12.24.
//

#include "basestateslow1.h"

void BaseStateSlow1::setData(ContextData *data) {
    this->data = data;
}

void BaseStateSlow1::setAction(Actions *action) {
    this->action = action;
}

void BaseStateSlow1::enterViaPseudoStart() {
    //TODO new(this) IdleSlow1;
    enterByDefaultEntryPoint();
}

void BaseStateSlow1::enterViaDeepHistory() {
    enterByDeepHistoryEntryPoint();
}

void BaseStateSlow1::resetDeepHistory() {
}
