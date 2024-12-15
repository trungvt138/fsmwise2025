//
// Created by Trung Dam on 11.12.24.
//

#ifndef PSEUDOSTARTOPERATING1_H
#define PSEUDOSTARTOPERATING1_H
#include "operatingbasestate1.h"
#include <iostream>
using namespace std;

class PseudoStartOperating1 : public OperatingBaseState1 {
public:
    void enterViaDeepHistory() override {enterViaPseudoStart();};

    void showState() override {
        cout << "PseudoStartOperating1::showState()" << endl;
    }
};
#endif //PSEUDOSTARTOPERATING1_H
