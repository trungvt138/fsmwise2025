//
// Created by Trung Dam on 05.01.25.
//

#ifndef LOGIC_H
#define LOGIC_H
#include "../../Message/ComponentLink.h"
#include "../../Message/IComponentLink.h"
#include "action.h"
#include "context.h"
#include "../PulseMessage.h"

class Logic: protected ComponentLink, public IComponentLink {
private:
    Context *context;
    Actions *action;

    std::thread* threadFSM;
    int _dispatcherChannelID;
    bool begin;
    bool running;
    void logic();
public:
    void start();
    void send(Message message) {ComponentLink::send(message);}
    Message receive() {return ComponentLink::receive();}
    int connect(int chid) {return ComponentLink::connect(chid);}
    int provide() {return ComponentLink::provide();}
    void registerDispatcher(int dispatcherChannelID);
    void handleEvent(int code, int event);
    void stop();
    Logic(Actions *shared_action);
    virtual ~Logic();

};



#endif //LOGIC_H
