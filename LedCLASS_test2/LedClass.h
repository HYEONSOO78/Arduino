#ifndef LED_CLASS_H
#define LED_CLASS_H
class LedClass{
public:
  LedClass(int pin); //=def__init__(self):
  void begin();
  void turn_on();
  void turn_off();

  int pin_num;

private:
};

#endif