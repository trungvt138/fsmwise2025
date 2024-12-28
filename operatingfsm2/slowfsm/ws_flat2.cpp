//
// Created by Trung Dam on 20.12.24.
//

#include "ws_flat2.h"
#include <iostream>

#include "high2.h"
#include "pseudoendslow2.h"
using namespace std;

TriggerProcessingState WS_Flat2::heightHigh() {
    cout << "WS_Flat2::heightHigh()" << endl;
    leavingState();
    new(this) High2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState WS_Flat2::heightBelt() {
    cout << "WS_Flat2::heightBelt()" << endl;
    leavingState();
    //TODO: set_ws_height(flat)
    new(this) PseudoEndSlow2;
    return TriggerProcessingState::endstatereached;
}
