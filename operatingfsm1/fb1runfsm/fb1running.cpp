//
// Created by Trung Dam on 12.12.24.
//

#include "fb1running.h"
#include <iostream>
#include "fb1runidle.h"
#include "fb1runwait.h"
using namespace std;

void Running::initSubFSM() {
    FB1RunBaseState::initSubFSM();
}

void Running::entry() {
	action->driveStopOff1();
}

void Running::exit() {
    action->driveStopOn1();
}

void Running::enterByDefaultEntryPoint() {
    entry();
    runningfsm->enterViaPseudoStart();
}

void Running::enterByDeepHistoryEntryPoint() {
    entry();
    runningfsm->enterViaDeepHistory();
}

void Running::leavingState() {
    FB1RunBaseState::leavingState();
}

TriggerProcessingState Running::endRise1() {
    cout << "Running::endRise1()" << endl;
    //TODO:  wm check FB2 clear here
    //if !FB2_clear:
    if (!action->isFbEmpty(2)) {
    	runningfsm->exit();
    	leavingState();
    	new(this) Fb1RunWait;
    	enterByDefaultEntryPoint();
    	return TriggerProcessingState::consumed;
    }


    //else:
    return TriggerProcessingState::pending;
}

TriggerProcessingState Running::startRise2() {
	cout << "Running::startRise2()" << endl;
	//TODO: wm check FB1 clear here
	//if FB1_clear:
	if (action->isFbEmpty(1)) {
		runningfsm->exit();
		leavingState();
		new(this) Fb1RunIdle;
		enterByDefaultEntryPoint();
		return TriggerProcessingState::consumed;
	}
	//else:
	return TriggerProcessingState::pending;
}

TriggerProcessingState Running::heightStart1() {
    return runningfsm->heightStart1();
}

TriggerProcessingState Running::heightEnd1() {
    return runningfsm->heightEnd1();
}

TriggerProcessingState Running::metalRise1() {
    return runningfsm->metalRise1();
}

TriggerProcessingState Running::metalFall1() {
    return runningfsm->metalFall1();
}

TriggerProcessingState Running::heightFlat1() {
    return runningfsm->heightFlat1();
}

TriggerProcessingState Running::heightHigh1() {
    return runningfsm->heightHigh1();
}

TriggerProcessingState Running::heightBore1() {
    return runningfsm->heightBore1();
}

TriggerProcessingState Running::heightBelt1() {
    return runningfsm->heightBelt1();
}
