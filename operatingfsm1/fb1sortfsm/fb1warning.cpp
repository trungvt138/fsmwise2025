//
// Created by Trung Dam on 20.12.24.
//

#include "fb1warning.h"
#include <iostream>

#include "fb1sortok.h"
using namespace std;

void FB1Warning::entry() {
    action->lightYellowOn1();
}

void FB1Warning::exit() {
    action->lightYellowOff1();
}

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

    if (action->issortout(1) ) { //TODO: check slide2 full vlt nötig
       leavingState();
       return TriggerProcessingState::explicitexit;
    } else {
        action->openJunction1();
        //std::thread([this]() {
        	//std::this_thread::sleep_for(std::chrono::seconds(1));
        	action->closeJunction1();
        //}).detach();
    	return TriggerProcessingState::consumed;
    }
    //return TriggerProcessingState::pending;
}
