//
// Created by Trung Dam on 20.12.24.
//

#include "ws_flat1.h"
#include <iostream>

#include "high1.h"
#include "pseudoendslow1.h"
using namespace std;

TriggerProcessingState WS_Flat1::heightHigh() {
    cout << "WS_Flat1::heightHigh()" << endl;
    leavingState();
    new(this) High1;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState WS_Flat1::heightBelt() {
    cout << "WS_Flat1::heightBelt()" << endl;
    leavingState();
    new(this) PseudoEndSlow1;
    return TriggerProcessingState::endstatereached;
}
