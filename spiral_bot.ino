//left 0 = forward
//right 180 = forward
//and vice versa

#include <Servo.h>
Servo leftMotor;
Servo rightMotor;

int rightSpeed=110;
int timeDraw=2300;

void setup() {
  leftMotor.attach(6);
  rightMotor.attach(7);

  spiral();
  Stop();
}

void loop() { 
}

void spiral(){
  for (rightSpeed>90; rightSpeed--   ;){
    leftMotor.write(0);
    rightMotor.write(rightSpeed);
    delay(timeDraw);
    timeDraw= 0.95*timeDraw;
   }
}

void Stop(){
  leftMotor.write(90);
  rightMotor.write(90);
}
