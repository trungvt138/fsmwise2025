//
// Created by Trung Dam on 11.12.24.
//

#ifndef FB1RUNBASESTATE_H
#define FB1RUNBASESTATE_H
#include "../../misc/action.h"
#include "../../misc/contextdata.h"
#include "../runningfsm/runningbasestate.h"
#include "../../misc/triggerprocessingstate.h"

class FB1RunBaseState {
protected:
    Actions *action;
    ContextData *data;
    RunningBaseState *runningfsm;
public:
    virtual void initSubFSM();

    void setData(ContextData *data);
    void setAction(Actions *action);

    virtual void entry(){};
    virtual void exit(){};

    void enterViaPseudoStart();

    void enterViaDeepHistory();

    virtual void resetDeepHistory();

    virtual void enterByDefaultEntryPoint(){entry();};
    virtual void enterByDeepHistoryEntryPoint(){entry();};

    virtual void leavingState(){exit();};
    virtual void showState();

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
    virtual TriggerProcessingState ws_metal(){ return TriggerProcessingState::pending; };

    virtual TriggerProcessingState endFall2(){ return TriggerProcessingState::pending; };
    virtual TriggerProcessingState startRise2(){ return TriggerProcessingState::pending; };
    virtual TriggerProcessingState slideRise2(){ return TriggerProcessingState::pending; };

    virtual TriggerProcessingState heightFlat1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightHigh1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightBore1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightBelt1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightBin1(){ return TriggerProcessingState::pending; }
};



#endif //FB1RUNBASESTATE_H
