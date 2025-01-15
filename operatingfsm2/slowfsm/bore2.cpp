//
// Created by Trung Dam on 20.12.24.
//

#include "bore2.h"
#include <iostream>

#include "ws_bore2.h"
using namespace std;

TriggerProcessingState Bore2::heightHigh() {
    cout << "Bore1::heightHigh()" << endl;
    leavingState();
    new(this) WS_Bore2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
