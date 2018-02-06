#include <DcMotor.h>

DcMotor myMotor;

void setup() {
	
	myMotor.begin(6, 7);
}

void loop() {

  myMotor.goForward();
  delay(1000);
  myMotor.stop();
  delay(1000);
}
