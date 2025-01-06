//
// Created by Trung Dam on 05.01.25.
//

#include "logic.h"

Logic::Logic(Actions *shared_action) : action(shared_action) {
	this->context = new Context(action);
	this->threadFSM = new std::thread(&Logic::logic,this);
	this->begin = false;
	this->running = true;
	this->_dispatcherChannelID = -1;
}


void Logic::logic(){
    while (this->running) {
        if (this->begin) {
        	//std::cout << "Start Logic Recievig: " << std::endl;
        	Message message = this->receive();
        	int code = message.getCode();
        	//std::cout << "Context receive code: " << code << std::endl;
        	int value = message.getValue();
        	//std::cout << "Context receive Value: " << value << std::endl;
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
}

void Logic::handleEvent(int code, int value){

	//std::cout << "Handling Event" << std::endl;
if(code==MASTER_HAL_FSM){
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
	    	this->context->heightFlat();
	        break;
	    case WS_BAND:
	    	this->context->heightBelt();
	        break;
	    case WS_HIGH:
	    	this->context->heightHigh();
	        break;
	    case WS_HOLE:
	    	this->context->heightBore();
	        break;

	    default:
	        // Optional: Handle unexpected cases
	        break;
	}}else if (code == SLAVE_HAL_QNET_FSM) {
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
				this->context->heightFlat();
			break;
			case WS_BAND:
				this->context->heightBelt();
			break;
			case WS_HIGH:
				this->context->heightHigh();
			break;
			case WS_HOLE:
				this->context->heightBore();
			break;

			default:
				// Optional: Handle unexpected cases
					break;
        }
  	}

		switch(code){
		case CONNECTION_BACK:
			this->context->connection_back();
			break;
		case CONNECTION_LOST:
			this->context->connection_lost();
			break;
			case HEIGHT_CALIBRATION:
				this->context->height_calibration();
				break;
			case HEIGHT_BAND:
				this->context->height_band();
				break;
			case HEIGHT_HOLE:
				this->context->height_hole();
				break;
			case HEIGHT_FLAT:
				this->context->height_flat();
				break;
			case HEIGHT_HIGH:
				this->context->height_high();
				break;
			case QNET_MESSAGE:
				switch(value){
				case WS_GONE:
					break;
				case WS_MISSING:
					break;
				case WS_FALSE_PLACEMENT:
					break;
				case SS_T_EST2_UNPRESSED:
			    	this->context->ss_t_est2_unpressed();
					break;
				case SS_T_EST2_PRESSED:
			    	this->context->ss_t_est2_pressed();

					break;
				case SS_LS_SLI2_FULL:
			    	this->context->ss_ls_sli2_full();

					break;
				case SS_LS_SLI2_RISE:
			    	this->context->ss_ls_sli2_rise();

					break;
				case SS_T_RST2_PRESSED:
			    	this->context->ss_t_rst2_pressed();

					break;
				case SS_T_EST1_UNPRESSED:
			    	this->context->ss_t_est1_unpressed();
					break;
				case SS_T_EST1_PRESSED:
			    	this->context->ss_t_est1_pressed();

					break;
				case SS_LS_SLI1_FULL:
			    	this->context->ss_ls_sli1_full();

					break;
				case SS_LS_SLI1_RISE:
			    	this->context->ss_ls_sli1_rise();

					break;
				case SS_T_RST1_PRESSED:
			    	this->context->ss_t_rst1_pressed();

					break;
				}
				break;
			default:
				break;
		}

}

void Logic::stop(){
	this->running = false;
	this->threadFSM->join();
	delete this->threadFSM;
}