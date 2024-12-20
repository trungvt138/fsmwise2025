#include <iostream>

#include "misc/action.h"
#include "misc/context.h"

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

    //Test Sort
    fsm.startShortPressed1();
    fsm.startRise1();
    fsm.heightStart1();
    fsm.heightEnd1();
    fsm.sortRise1();
    fsm.slideRise1();
}
