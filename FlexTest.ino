
#include <Servo.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;


void setup() {
  Servo1.attach(1);
  Servo2.attach(2);
  Servo3.attach(3);
  Servo4.attach(4);
  Servo5.attach(5);
  

}

void loop() {
 Servo1.write(0);
 Servo2.write(0);
 Servo3.write(0);
 Servo4.write(0);
 Servo5.write(0);
 
 delay(500);
 
 Servo1.write(180);
 Servo2.write(180);
 Servo3.write(180);
 Servo4.write(180);
 Servo5.write(180);
 
 delay(500);
 
}
