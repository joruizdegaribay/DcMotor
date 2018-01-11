#include <DcMotor.h>

DcMotor myMotor(6, 7);

void setup() {

}

void loop() {

  for (int i = 0; i <= 255; i++) {
    myMotor.move(FORWARD, i);
    delay(10);
  }
  delay(1000);
  for (int i = 255; i >= 0; i--) {
    myMotor.move(FORWARD, i);
    delay(10);
  }
  delay(1000);
}
