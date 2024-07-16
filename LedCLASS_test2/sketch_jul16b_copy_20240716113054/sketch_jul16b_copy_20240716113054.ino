#include "motor.h"
Motor A_IA(2,13);


void setup() {
  // put your setup code here, to run once:
  A_IA.begin(115200);
  A_IA.stop


  
  pinMode(A_IA,OUTPUT);
  pinMode(A_IB,OUTPUT);

}


  l13.begin();
  l2.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  if  (Serial.available()>0)  {
      char c = Serial.read();
      if(c== 'f') {
        analoogWrite(A_IA,128);
        analoogWrite(A_IB,0);
      }
      else if(c=='b'){
        analoogWrite(A_IA,0);
        analoogWrite(A_IB,128);
      } 
      else if(c=='a'){
        analoogWrite(A_IA,0);
        analoogWrite(A_IB,0);
      }
    }
 }
  
  
  
  
  l13.turn_on();
  delay(1000);
  l13.turn_off();
  delay(1000);
   l2.turn_on();
  delay(1000);
  l2.turn_off();
  delay(1000);

}
