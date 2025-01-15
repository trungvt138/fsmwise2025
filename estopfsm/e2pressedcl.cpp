/*
 * e2pressedcl.cpp
 *
 *  Created on: 09.01.2025
 *      Author: infwcv674
 */

#include "e2pressedcl.h"
#include "connectionlost.h"
#include "e2pressed.h"
#include "bothpressedcl.h"
#include <iostream>
using namespace std;

TriggerProcessingState E2PressedCL::connectionBack() {
	cout << "E2PressedCL::connectionBack" << endl;
	leavingState();
	new(this) E2Pressed;
	enterByDefaultEntryPoint();
	return TriggerProcessingState::consumed;
}

TriggerProcessingState E2PressedCL::estopPressed1() {
	cout << "E2PressedCL::estopPressed1" << endl;
	leavingState();
	new(this) BothPressedCL;
	enterByDefaultEntryPoint();
	return TriggerProcessingState::consumed;
}

TriggerProcessingState E2PressedCL::estopUnpressed2() {
	cout << "E2PressedCL::estopUnpressed2" << endl;
	leavingState();
	new(this) ConnectionLost;
	enterByDefaultEntryPoint();
	return TriggerProcessingState::consumed;
}
