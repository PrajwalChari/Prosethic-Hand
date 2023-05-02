#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup() {
  servo1.attach(1);
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);
  servo5.attach(5);
  
}

void loop() {

  //servo3.write(0);
  //servo4.write(0);
  //servo5.write(0);

  //delay(1000);
  
  //servo3.write(180);
 // delay(500);
  //servo3.write(0);
  
  //delay(500);
  
  servo4.write(270);
  delay(500);
  servo4.write(0);
  
  //delay(500);
  
  //servo5.write(180);
 // delay(500);
  //servo5.write(0);

  delay(5000);

 

}
