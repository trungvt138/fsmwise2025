/*
 * e2pressedcl.h
 *
 *  Created on: 09.01.2025
 *      Author: infwcv674
 */

#ifndef FSM_ESTOPFSM_E2PRESSEDCL_H_
#define FSM_ESTOPFSM_E2PRESSEDCL_H_

#include "basestateestop.h"

class E2PressedCL : public BaseStateEstop {
public:
	TriggerProcessingState connectionBack();
	TriggerProcessingState estopUnpressed2();
	TriggerProcessingState estopPressed1();
};

#endif /* FSM_ESTOPFSM_E2PRESSEDCL_H_ */
