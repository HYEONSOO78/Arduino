#include "motor.h"


Motor::motor(){
}
void LedClass::begin(){
pinMode(13,OUTPUT);
}
void LedClass::turn_on(){
digitalWrite(13,HIGH);
}
void LedClass::turn_off(){
digitalWrite(13,LOW);
}
