//
// Created by Trung Dam on 20.12.24.
//

#include "high1.h"
#include <iostream>

#include "ws_bin1.h"
using namespace std;

TriggerProcessingState High1::heightFlat() {
    cout << "High1::heightFlat()" << endl;
    leavingState();
    new(this) WS_Bin1;
    enterByDefaultEntryPoint();
    return BaseStateSlow1::heightFlat();
}
