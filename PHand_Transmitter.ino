// Include RadioHead Amplitude Shift Keying Library
#include <RH_ASK.h>
// Include dependant SPI Library 
#include <SPI.h> 
 
// Create Amplitude Shift Keying Object
RH_ASK rf_driver;
 
void setup()
{
    // Initialize ASK Object
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
data.finger1 = htons(180);
data.finger2 = htons(180);
data.finger3 = htons(180);
data.finger4 = htons(180);
data.finger5 = htons(180);
rf_driver.send((uint8_t*)&data, sizeof(data));
    rf_driver.waitPacketSent();
    delay(1000);

data.finger1 = htons(0);
data.finger2 = htons(0);
data.finger3 = htons(0);
data.finger4 = htons(0);
data.finger5 = htons(0);
rf_driver.send((uint8_t*)&data, sizeof(data));
    rf_driver.waitPacketSent();
    delay(1000);
}
