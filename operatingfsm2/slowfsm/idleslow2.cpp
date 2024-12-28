//
// Created by Trung Dam on 20.12.24.
//

#include "idleslow2.h"
#include <iostream>

#include "ws_flat2.h"
#include "ws_high2.h"
using namespace std;

TriggerProcessingState IdleSlow2::heightFlat() {
    cout << "IdleSlow2::heightFlat()" << endl;
    leavingState();
    new(this) WS_Flat2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState IdleSlow2::heightHigh() {
    cout << "IdleSlow2::heightHigh()" << endl;
    leavingState();
    new(this) WS_High2;
    return TriggerProcessingState::consumed;
}
