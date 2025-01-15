//
// Created by Trung Dam on 11.12.24.
//

#ifndef OPERATINGBASESTATE2_H
#define OPERATINGBASESTATE2_H
#include "../misc/action.h"
#include "../misc/contextdata.h"
#include "../misc/triggerprocessingstate.h"
#include "fb1runfsm/fb2runbasestate.h"
#include "fb1sortfsm/fb2sortbasestate.h"
#include "errorfsm/errorbasestate2.h"


class OperatingBaseState2 {
protected:
    Actions *actions;
    ContextData *data;
    FB2RunBaseState *fb2runFSM;
    FB2SortBaseState *fb2sortFSM;
    ErrorBaseState2 *errorFSM2;
public:
    virtual ~OperatingBaseState2() {
        delete fb2runFSM;
        delete fb2sortFSM;
        delete errorFSM2;
    };
    void initSubFSM();
    void setAction(Actions *action);
    void setData(ContextData *data);

    virtual void entry(){};
    virtual void exit(){};

    virtual void enterViaPseudoStart();
    virtual void enterViaErrNewWS(){}
    virtual void enterViaErrLostWS(){}
    virtual void enterViaErrSlideFull(){}

    virtual void enterViaDeepHistory();

    virtual void resetDeepHistory();

    virtual void enterByDefaultEntryPoint(){entry();};
    virtual void enterByDeepHistoryEntryPoint(){entry();};

    virtual void leavingState(){exit();};
    virtual void showState(){};


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

    virtual TriggerProcessingState startShortPressed2(){ return TriggerProcessingState::pending; };
    virtual TriggerProcessingState resetPressed2() { return TriggerProcessingState::pending; };
    virtual TriggerProcessingState ws_early(){ return TriggerProcessingState::pending; };
    virtual TriggerProcessingState ws_lost(){ return TriggerProcessingState::pending; };

    virtual TriggerProcessingState endFall1(){ return TriggerProcessingState::pending; }

    virtual TriggerProcessingState heightFlat2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightHigh2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightBore2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightBelt2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightBin2(){ return TriggerProcessingState::pending; }
};



#endif //OPERATINGBASESTATE2_H
