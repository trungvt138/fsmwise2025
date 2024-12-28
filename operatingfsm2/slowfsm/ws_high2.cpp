//
// Created by Trung Dam on 20.12.24.
//

#include "ws_high2.h"
#include <iostream>

#include "bore2.h"
#include "flat2.h"
#include "pseudoendslow2.h"
using namespace std;

TriggerProcessingState WS_High2::heightFlat() {
    cout << "WS_High2::heightFlat()" << endl;
    leavingState();
    new(this) Flat2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState WS_High2::heightBore() {
    cout << "WS_High2::heightBore()" << endl;
    leavingState();
    new(this) Bore2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState WS_High2::heightBelt() {
    cout << "WS_High2::heightBelt()" << endl;
    leavingState();
    //TODO: set_ws_height(high)
    new(this) PseudoEndSlow2;
    return TriggerProcessingState::endstatereached;
}
