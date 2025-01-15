//
// Created by Trung Dam on 11.12.24.
//

#ifndef FB2SORTBASESTATE_H
#define FB2SORTBASESTATE_H
#include "../../misc/action.h"
#include "../../misc/contextdata.h"
#include "../../misc/triggerprocessingstate.h"


class FB2SortBaseState {
protected:
    Actions *action;
    ContextData *data;
public:
    virtual void initSubFSM();

    void setData(ContextData *data);
    void setAction(Actions *action);

    virtual void entry(){};
    virtual void exit(){};

    void enterViaPseudoStart();

    void enterViaDeepHistory(){enterByDeepHistoryEntryPoint();};

    //void resetDeepHistory();

    virtual void enterByDefaultEntryPoint(){entry();};
    virtual void enterByDeepHistoryEntryPoint(){entry();};

    virtual void leavingState(){exit();};
    void showState();

    virtual TriggerProcessingState sortRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState sortFall2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState slideRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState slideFall2(){ return TriggerProcessingState::pending; }
};



#endif //FB2SORTBASESTATE_H
