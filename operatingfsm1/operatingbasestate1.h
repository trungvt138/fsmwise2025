//
// Created by Trung Dam on 11.12.24.
//

#ifndef OPERATINGBASESTATE1_H
#define OPERATINGBASESTATE1_H
#include "../misc/action.h"
#include "../misc/contextdata.h"

#include "../misc/triggerprocessingstate.h"
#include "fb1runfsm/fb1runbasestate.h"
#include "fb1sortfsm/fb1sortbasestate.h"


class OperatingBaseState1 {
protected:
    Actions *actions;
    ContextData *data;
    FB1RunBaseState *fb1runFSM;
    FB1SortBaseState *fb1sortFSM;
public:
    virtual ~OperatingBaseState1() {
        delete fb1runFSM;
        delete fb1sortFSM;
    };
    void initSubFSM();
    void setAction(Actions *action);
    void setData(ContextData *data);

    virtual void entry(){};
    virtual void exit(){};

    virtual void enterViaPseudoStart();

    virtual void enterViaDeepHistory();

    virtual void resetDeepHistory();

    virtual void enterByDefaultEntryPoint(){entry();};
    virtual void enterByDeepHistoryEntryPoint(){entry();};

    virtual void leavingState(){exit();};
    virtual void showState(){};

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
    virtual TriggerProcessingState startShortPressed1(){ return TriggerProcessingState::pending; };
    virtual TriggerProcessingState ws_early(){ return TriggerProcessingState::pending; };
    virtual TriggerProcessingState ws_lost(){ return TriggerProcessingState::pending; };
};



#endif //OPERATINGBASESTATE1_H
