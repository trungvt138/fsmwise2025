//
// Created by Trung Dam on 20.12.24.
//

#include "fb1warning.h"
#include <iostream>

#include "fb1sortok.h"
using namespace std;

TriggerProcessingState FB1Warning::slideFall1() {
    cout << "FB1Warning::slideFall1" << endl;
    leavingState();
    new(this) FB1SortOK;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB1Warning::sortRise1() {
    cout << "FB1Warning::sortRise1" << endl;
    //TODO: check sequence here
    //if (!checksequence() && isSlide2Full())
    leavingState();
    return TriggerProcessingState::explicitexit;
    //else
    //leavingState()
}
