#include "Motor.h"

Motor m1(3,5);

void setup() {
  // put your setup code here, to run once:
  m1.begin();
  m1.stop();
}

void loop() {
  // put your main code here, to run repeatedly:
  m1.go_backward();
  delay(1000);
  m1.go_forward();
  delay(1000);
 
}
