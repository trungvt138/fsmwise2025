//
// Created by Trung Dam on 03.12.24.
//

#ifndef MAINFSM_H
#define MAINFSM_H
#include "basestate.h"


class MainFSM : public BaseState {
public:
    void enterByDefaultEntryPoint() override;
    void entry() override;
    void exit() override;

    void showState() override;

    void handleDefaultExit(const TriggerProcessingState &handled) override;

    void startShortPressed1() override;

    void startShortPressed2() override;

    void startLongPressed1() override;

    void startLongPressed2() override;

    void resetPressed1() override;

    void resetPressed2() override;

    void stopPressed1() override;

    void stopPressed2() override;

    void estopUnpressed1() override;

    void estopUnpressed2() override;

    void startRise1() override;

    void startFall1() override;

    void startRise2() override;

    void startFall2() override;

    void slideRise1() override;

    void slideFall1() override;

    void slideRise2() override;

    void slideFall2() override;

    void heightStart1() override;

    void heightStart2() override;

    void heightEnd1() override;

    void heightEnd2() override;

    void metalRise1() override;

    void metalFall1() override;

    void metalRise2() override;

    void metalFall2() override;

    //void connectionBack() override;

    void connectionLost() override;

    void estopPressed1() override;

    void estopPressed2() override;

    void endRise1() override;

    void endRise2() override;

    void endFall1() override;

    void endFall2() override;

    void sortRise1() override;

    void sortFall1() override;

    void sortRise2() override;

    void sortFall2() override;

    void ws_lost() override;

    void ws_early() override;

    void irqUpdate() override;

    void ws_height() override;

    void ws_metal() override;
};



#endif //MAINFSM_H
