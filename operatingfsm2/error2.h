//
// Created by Trung Dam on 20.12.24.
//

#ifndef ERROR2_H
#define ERROR2_H
#include "operatingbasestate2.h"


class Error2 : public OperatingBaseState2 {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState startShortPressed2() override;

    TriggerProcessingState resetPressed2() override;

    void enterViaErrNewWS() override;

    void enterViaErrLostWS() override;

    void enterViaErrSlideFull() override;

    void resetDeepHistory() override;

    virtual TriggerProcessingState handleDefaultExit(TriggerProcessingState state);
};



#endif //ERROR_H
