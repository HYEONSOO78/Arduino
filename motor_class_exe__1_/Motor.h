#ifndef _MOTOR_H_
#define _MOTOR_H_

class Motor{
public:
  // 생성자 
  Motor(int IA, int IB);
  void begin();
  void stop();
  void go_forward();
  void go_backward();
  int ia, ib;

private:

};

#endif 