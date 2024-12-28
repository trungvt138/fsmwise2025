//
// Created by Trung Dam on 20.12.24.
//

#include "bore1.h"
#include <iostream>

#include "ws_bore1.h"
using namespace std;

TriggerProcessingState Bore1::heightHigh() {
    cout << "Bore1::heightHigh()" << endl;
    leavingState();
    new(this) WS_Bore1;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
