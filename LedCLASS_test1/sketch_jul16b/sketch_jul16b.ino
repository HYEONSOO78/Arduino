#include "LedClass.h"
LedClass l13(13);
LedClass l2(2);

void setup() {
  // put your setup code here, to run once:

  l13.begin();
  l2.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  l13.turn_on();
  delay(1000);
  l13.turn_off();
  delay(1000);
   l2.turn_on();
  delay(1000);
  l2.turn_off();
  delay(1000);

}
