//
// Created by Trung Dam on 20.12.24.
//

#include "idleslow1.h"
#include <iostream>

#include "ws_flat1.h"
#include "ws_high1.h"
using namespace std;

TriggerProcessingState IdleSlow1::heightFlat() {
    cout << "IdleSlow1::heightFlat()" << endl;
    leavingState();
    new(this) WS_Flat1;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState IdleSlow1::heightHigh() {
    cout << "IdleSlow1::heightHigh()" << endl;
    leavingState();
    new(this) WS_High1;
    return TriggerProcessingState::consumed;
}
