#include<Wire.h>
byte slaveAddress = 8;
byte fingerDataArray[5];

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo4;
Servo servo5;

void setup()
{
  Wire.begin(slaveAddress);
  Wire.onReceive(receiveEvent);
Servo servo3;

  servo1.attach(1);
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);
  servo5.attach(5);
  
}

void loop()
{
  
}

void receiveEvent(int sizeOfDat)
{ 
  for(int i = 0; i < sizeOfDat; i++)
  {
 
    fingerDataArray[i] = Wire.read();

   int finger1 = fingerDataArray[0];
   int finger2 = fingerDataArray[1];
   int finger3 = fingerDataArray[2];
   int finger4 = fingerDataArray[3];
   int finger5 = fingerDataArray[4];

   
   servo1.write(finger1);
   servo2.write(finger2);
   servo3.write(finger3);
   servo4.write(finger4);
   servo5.write(finger5);
   
  }
}
