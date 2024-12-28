//
// Created by Trung Dam on 20.12.24.
//

#include "high2.h"
#include <iostream>

#include "ws_bin2.h"
using namespace std;

TriggerProcessingState High2::heightFlat() {
    cout << "High2::heightFlat()" << endl;
    leavingState();
    new(this) WS_Bin2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
