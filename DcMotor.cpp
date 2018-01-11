#include "DcMotor.h"

void DcMotor::begin(uint8_t directionPin, uint8_t speedPin){

	_directionPin = directionPin;
	_speedPin = speedPin;
	
	pinMode(_directionPin, OUTPUT);
	pinMode(_speedPin, OUTPUT);
	
	stop();
}

void DcMotor::stop(){
	
	digitalWrite(_directionPin, LOW);
	digitalWrite(_speedPin, LOW);
}

void DcMotor::goForward(){
	
	digitalWrite(_directionPin, LOW);
	digitalWrite(_speedPin, HIGH);
}

void DcMotor::goBackward(){

	digitalWrite(_directionPin, HIGH);
	digitalWrite(_speedPin, LOW);
}

void DcMotor::move(uint8_t direction, uint8_t speed){
	
	if (direction == FORWARD){
		digitalWrite(_directionPin, LOW);
		analogWrite(_speedPin, speed);
	}
	else{
		digitalWrite(_directionPin, HIGH);
		analogWrite(_speedPin, 255 - speed);
	}		
}

void DcMotor::move(int16_t speed){
	
	if (speed == 0){
		stop();
	} else if (speed > 0){
		digitalWrite(_directionPin, LOW);
		analogWrite(_speedPin, speed);
	}
	else{
		digitalWrite(_directionPin, HIGH);
		analogWrite(_speedPin, 255 - speed);
	}		
}
