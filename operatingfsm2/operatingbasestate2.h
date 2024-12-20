//
// Created by Trung Dam on 11.12.24.
//

#ifndef OPERATINGBASESTATE2_H
#define OPERATINGBASESTATE2_H
#include "../misc/action.h"
#include "../misc/contextdata.h"
#include "../misc/triggerprocessingstate.h"


class OperatingBaseState2 {
protected:
    Actions *actions;
    ContextData *contextData;
public:
    virtual ~OperatingBaseState2();
    void initSubFSM();
    void setAction(Actions *action);
    void setData(ContextData *data);

    void enterViaPseudoStart();

    void enterViaDeepHistory();

    void resetDeepHistory();

    void showState();

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
    virtual TriggerProcessingState startShortPressed2(){ return TriggerProcessingState::pending; };
};



#endif //OPERATINGBASESTATE_H
