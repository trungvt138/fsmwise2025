//
// Created by Trung Dam on 20.12.24.
//

#include "ws_high1.h"
#include <iostream>

#include "bore1.h"
#include "flat1.h"
#include "pseudoendslow1.h"
using namespace std;

TriggerProcessingState WS_High1::heightFlat() {
    cout << "WS_High1::heightFlat()" << endl;
    leavingState();
    new(this) Flat1;
    enterByDefaultEntryPoint();
    return BaseStateSlow1::heightFlat();
}

TriggerProcessingState WS_High1::heightBore() {
    cout << "WS_High1::heightBore()" << endl;
    leavingState();
    new(this) Bore1;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState WS_High1::heightBelt() {
    cout << "WS_High1::heightBelt()" << endl;
    leavingState();
    //TODO: set_ws_height(high)
    new(this) PseudoEndSlow1;
    return TriggerProcessingState::endstatereached;
}
