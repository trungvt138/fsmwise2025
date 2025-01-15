//
// Created by Trung Dam on 05.01.25.
//

#include "logic.h"

Logic::Logic(Actions *shared_action) : action(shared_action) {
	
	this->begin = false;
	this->running = true;
	this->threadFSM = new std::thread(&Logic::logic,this);
	this->_dispatcherChannelID = -1;

	this->weltmodell = new Weltmodell();
	this->weltmodell->init_wm();

	this->action->setWeltmodell(this->weltmodell);
	this->context = new Context(action, this->weltmodell);
}


void Logic::logic(){
    while (this->running) {
        if (this->begin) {
//    		printf("Running Logic Pooling \n");
        	Message message = this->receive();
        	int code = message.getCode();
        	int value = message.getValue();

        	std::cout << "Context receive code: " << code << " and value: "<< value << std::endl;
        	//std::cout << "Context receive Value: " << value << std::endl;

			this->weltmodell->handle_pulse_message(message);
			
        	this->handleEvent(code, value);
        }
    }
}


void Logic::registerDispatcher(int dispatcherChannelID){
	this->_dispatcherChannelID = dispatcherChannelID;
	//std::cout << "Register into Context: Dispatcher Channel ID: " << this->_dispatcherChannelID << std::endl;
}


void Logic::start() {
	this->begin = true;
}

Logic::~Logic() {
	this->running = false;
	this->threadFSM->join();
	delete this->threadFSM;
	delete this->weltmodell;
}

void Logic::handleEvent(int code, int value) {

	//std::cout << "Handling Event" << std::endl;
	if(code == MASTER_HAL_FSM) {
		switch(value) {
		    case LB_START_RISE:
		        this->context->startRise1();
		        break;
		    case LB_START_FALL:
	    		this->context->startFall1();
		        break;
		    case SS_METAL_RISE:
	    		this->context->metalRise1();
		        break;
		    case SS_METAL_FALL:
	    		this->context->metalFall1();
		        break;
		    case LB_END_RISE:
	    		this->context->endRise1();
		        break;
		    case LB_END_FALL:
	    		this->context->endFall1();
		        break;
		    case LB_SORT_RISE:
	    		this->context->sortRise1();
		        break;
		    case LB_SORT_FALL:
	    		this->context->sortFall1();
		        break;
		    case LB_SLIDE_RISE:
	    		this->context->slideRise1();
		        break;
		    case LB_SLIDE_FALL:
	    		this->context->slideFall1();
		        break;
		    case B_START_SHORTPRESSED:
	    		this->context->startShortPressed1();
		        break;
		    case B_START_LONGPRESSED:
	    		this->context->startLongPressed1();
		        break;
		    case B_STOP_PRESSED:
	    		this->context->stopPressed1();
		        break;
		    case B_ESTOP_PRESSED:
	    		this->context->estopPressed1();
		        break;
		    case B_ESTOP_UNPRESSED:
	    		this->context->estopUnpressed1();
		        break;
		    case B_RESET_PRESSED:
	    		this->context->resetPressed1();
		        break;
		    case WS_FLAT:
	    		this->context->heightFlat1();
		        break;
		    case WS_BAND:
	    		this->context->heightBelt1();
		        break;
		    case WS_HIGH:
	    		this->context->heightHigh1();
		        break;
		    case WS_HOLE:
	    		this->context->heightBore1();
		        break;


		    default:
		        // Optional: Handle unexpected cases
		        break;
		}
	} else if (code == SLAVE_HAL_QNET_FSM) {
		switch(value) {
			case LB_START_RISE:
				this->context->startRise2();
				break;
			case LB_START_FALL:
				this->context->startFall2();
				break;
			case SS_METAL_RISE:
				this->context->metalRise2();
				break;
			case SS_METAL_FALL:
				this->context->metalFall2();
				break;
			case LB_END_RISE:
				this->context->endRise2();
				break;
			case LB_END_FALL:
				this->context->endFall2();
				break;
			case LB_SORT_RISE:
				this->context->sortRise2();
				break;
			case LB_SORT_FALL:
				this->context->sortFall2();
				break;
			case LB_SLIDE_RISE:
				this->context->slideRise2();
				break;
			case LB_SLIDE_FALL:
				this->context->slideFall2();
				break;
			case B_START_SHORTPRESSED:
				this->context->startShortPressed2();
				break;
			case B_START_LONGPRESSED:
				this->context->startLongPressed2();
				break;
			case B_STOP_PRESSED:
				this->context->stopPressed2();
				break;
			case B_ESTOP_PRESSED:
				this->context->estopPressed2();
				break;
			case B_ESTOP_UNPRESSED:
				this->context->estopUnpressed2();
				break;
			case B_RESET_PRESSED:
				this->context->resetPressed2();
				break;
			case WS_FLAT:
				this->context->heightFlat2();
				break;
			case WS_BAND:
				this->context->heightBelt2();
				break;
			case WS_HIGH:
				this->context->heightHigh2();
				break;
			case WS_HOLE:
				this->context->heightBore2();
				break;
			case CONNECTION_LOST:
	            this->context->connectionLost();
	            break;
			case CONNECTION_BACK:
				this->context->connectionBack();
				break;
			default:
				// Optional: Handle unexpected cases
				break;
	    }
	}
}

void Logic::stop(){
	this->running = false;
	this->threadFSM->join();
	delete this->threadFSM;
}
