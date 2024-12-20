//
// Created by Trung Dam on 03.12.24.
//

#ifndef BASESTATEMAIN_H
#define BASESTATEMAIN_H

#include "../misc/action.h"
#include "../misc/contextdata.h"
#include "../misc/triggerprocessingstate.h"
#include "../operatingfsm1/operatingbasestate1.h"
#include "../operatingfsm2/operatingbasestate2.h"
#include "../calibratingfsm/calibratingbasestate.h"

class BaseStateMain {
protected:
    Actions *actions;
    ContextData *data;
    OperatingBaseState1 *operatingFSM1;
    OperatingBaseState2 *operatingFSM2;
    CalibratingBaseState *calibratingFSM;

public:
    virtual ~BaseStateMain() {
        delete operatingFSM1;
        delete operatingFSM2;
        delete calibratingFSM;
    };

    virtual void initSubFSM();

    void setData(ContextData *data);
    void setAction(Actions *action);

    virtual bool isPseudoStartState(){return false;};
    virtual bool isPseudoEndState(){return false;};

    virtual void enterByDefaultEntryPoint(){entry();};
    virtual void enterByDeepHistoryEntryPoint(){entry();};
    virtual void leavingState(){exit();};

    virtual void enterViaPseudoStart();
    virtual void enterViaDeepHistory();

    virtual void resetDeepHistory(){};

    virtual void entry(){};
    virtual void exit(){};

    virtual void handleDefaultExit(const TriggerProcessingState &handled) {};
    
    virtual TriggerProcessingState startShortPressed1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState startShortPressed2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState startLongPressed1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState startLongPressed2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState resetPressed1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState resetPressed2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState stopPressed1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState stopPressed2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState estopPressed1(){return TriggerProcessingState::pending;}
    virtual TriggerProcessingState estopPressed2(){return TriggerProcessingState::pending;}
    virtual TriggerProcessingState estopUnpressed1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState estopUnpressed2(){ return TriggerProcessingState::pending; }

    virtual TriggerProcessingState startRise1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState startFall1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState endRise1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState endFall1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState sortRise1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState sortFall1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState slideRise1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState slideFall1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightStart1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightEnd1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState metalRise1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState metalFall1(){ return TriggerProcessingState::pending; }

    virtual TriggerProcessingState startRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState startFall2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState slideRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState slideFall2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState endRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState endFall2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState sortRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState sortFall2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightStart2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightEnd2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState metalRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState metalFall2(){ return TriggerProcessingState::pending; }

    virtual TriggerProcessingState connectionLost(){return TriggerProcessingState::pending;}
    virtual TriggerProcessingState ws_timer_end(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState motor_timer_end(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState irqUpdate(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState ws_height(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState ws_metal(){ return TriggerProcessingState::pending; }

    virtual void showState();
};



#endif //BASESTATEMAIN_H
