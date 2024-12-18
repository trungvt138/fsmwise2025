#include <iostream>

#include "action.h"
#include "context.h"

int main(int argc, char** argv)
{
    auto *action = new Actions();
    Context fsm(action);
    fsm.startShortPressed1();
    //Test EStop
    /*fsm.estopPressed1();
    fsm.estopUnpressed1();
    fsm.resetPressed1();
    fsm.resetPressed2();
    fsm.startShortPressed1();*/

    //Test Running
    /*fsm.motor_timer_end();
    fsm.startRise1();
    fsm.heightStart1();
    fsm.estopPressed1();
    fsm.estopUnpressed1();
    fsm.resetPressed1();
    fsm.resetPressed2();
    fsm.startShortPressed1();*/

    //Test History
    fsm.startShortPressed1();
    fsm.startRise1();
    fsm.heightStart1();
    fsm.stopPressed1();
    fsm.startShortPressed1();
    fsm.connectionLost();
    fsm.connectionBack();
    fsm.estopUnpressed2();
    fsm.resetPressed1();
    fsm.resetPressed2();
}
