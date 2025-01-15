//
// Created by Trung Dam on 11.12.24.
//

#ifndef PSEUDOSTARTOPERATING2_H
#define PSEUDOSTARTOPERATING2_H
#include "../mainfsm/operating.h"

class PseudoStartOperating2 : public OperatingBaseState2 {
public:
    void enterViaDeepHistory() override {enterViaPseudoStart();};
};
#endif //PSEUDOSTARTOPERATING2_H
