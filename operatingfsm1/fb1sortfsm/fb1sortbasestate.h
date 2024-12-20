//
// Created by Trung Dam on 11.12.24.
//

#ifndef FB1SORTBASESTATE_H
#define FB1SORTBASESTATE_H
#include "../../misc/action.h"
#include "../../misc/contextdata.h"
#include "../../misc/triggerprocessingstate.h"


class FB1SortBaseState {
protected:
    Actions *action;
    ContextData *data;
public:
    virtual void initSubFSM();

    void setData(ContextData *data);
    void setAction(Actions *action);

    virtual void entry(){};
    virtual void exit(){};

    void enterViaPseudoStart(){enterByDefaultEntryPoint();};

    void enterViaDeepHistory(){enterByDeepHistoryEntryPoint();};

    //void resetDeepHistory();

    virtual void enterByDefaultEntryPoint(){entry();};
    virtual void enterByDeepHistoryEntryPoint(){entry();};

    virtual void leavingState(){exit();};
    void showState();

    virtual TriggerProcessingState sortRise1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState sortFall1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState slideRise1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState slideFall1(){ return TriggerProcessingState::pending; }
};



#endif //FB1SORTBASESTATE_H
