//
// Created by Trung Dam on 03.12.24.
//

#include "basestatereset.h"
#include <iostream>

#include "wait.h"
using namespace std;

//TODO: implement resetfsm states
void BaseStateReset::enterViaPseudoStart() {
    cout << "Entering Via Pseudo Start" << endl;
    new(this) Wait;
    enterByDefaultEntryPoint();
}
