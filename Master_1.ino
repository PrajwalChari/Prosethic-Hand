#include<Wire.h>
#include <SPI.h>
#include <RH_ASK.h>

RH_ASK rf_driver;
 
byte slaveAddress = 8;
int sizeOfDat = 5;


  
void setup()
{
  Wire.begin();
  rf_driver.init();
}

void loop()
{
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
  uint16_t finger1 = ntohs(data.finger1);
  uint16_t finger2 = ntohs(data.finger2);
  uint16_t finger3 = ntohs(data.finger3);
  uint16_t finger4 = ntohs(data.finger4);
  uint16_t finger5 = ntohs(data.finger5);
  
   byte fingerDataArray[sizeOfDat] = {finger1, finger2, finger3, finger4, finger5};

  Wire.beginTransmission(slaveAddress);
  for (int i = 0; i < (sizeOfDat - 1); i++)
  {
    Wire.write(fingerDataArray[i]);
  }
  Wire.endTransmission();

}
}
