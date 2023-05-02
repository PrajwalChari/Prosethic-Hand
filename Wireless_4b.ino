#include <SPI.h>
#include <RH_ASK.h>

RH_ASK rf_driver;
 
   uint16_t finger1 = 0;
   uint16_t finger2 = 0;
   uint16_t finger3 = 0;
   uint16_t finger4 = 0;
   uint16_t finger5 = 0;

void setup() {
  // put your setup code here, to run once:
  rf_driver.init();
  Serial.Begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 typedef struct
{
    uint16_t   finger1;
    uint16_t   finger2;
    uint16_t   finger3;
    uint16_t   finger4;
    uint16_t   finger5;
} FingerDat;

FingerDat data;
uint8_t datalen = sizeof(data);
if (   rf_driver.recv((uint8_t*)&data, &datalen)
    && datalen == sizeof(data));
{
   finger1 = ntohs(data.finger1);
   finger2 = ntohs(data.finger2);
   finger3 = ntohs(data.finger3);
   finger4 = ntohs(data.finger4);
   finger5 = ntohs(data.finger5);

   Serial.println(finger1);
   

}
}
