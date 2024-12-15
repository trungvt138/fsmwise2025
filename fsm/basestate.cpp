//
// Created by Trung Dam on 02.12.24.
//

#include "basestate.h"

#include <iostream>

#include "mainFSM.h"
#include "../mainfsm/pseudostartmain.h"
using namespace std;

void BaseState::initSubFSM() {
    mainfsm = new PseudoStartMain();
    mainfsm -> initSubFSM();
    estopfsm = new BaseStateEstop();
    estopfsm -> initSubFSM();
}

void BaseState::setData(ContextData *data){
    this->data = data;
    mainfsm->setData(data);
    estopfsm->setData(data);
}

void BaseState::enterViaDeepHistory() {
}

void BaseState::setAction(Actions *action){
    this->action = action;
    mainfsm->setAction(action);
    estopfsm->setAction(action);
}

void BaseState::enterViaPseudoStart() {
    cout << "\nInitial transition taken" << endl;
    // init-transition action
    new(this) MainFSM;
    enterByDefaultEntryPoint();
}
