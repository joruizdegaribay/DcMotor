#include <DcMotor.h>

DcMotor myMotor(6, 7);

void setup() {

}

void loop() {

  myMotor.goForward();
  delay(1000);
  myMotor.stop();
  delay(1000);
}
