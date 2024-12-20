//
// Created by Trung Dam on 03.12.24.
//

#include "basestatereset.h"
#include <iostream>

#include "wait.h"
using namespace std;

void BaseStateReset::enterViaPseudoStart() {
    cout << "Entering Reset via Pseudo Start" << endl;
    new(this) Wait;
    enterByDefaultEntryPoint();
}
