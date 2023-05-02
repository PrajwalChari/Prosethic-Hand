void setup() {

pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
pinMode(A5,INPUT);

Serial.begin(9600);
  
}

void loop() {

int finger1a = analogRead(A1);
int finger2a = analogRead(A2);
int finger3a = analogRead(A3);
int finger4a = analogRead(A4);
int finger5a = analogRead(A5);

int finger1 = map(finger1a,300,1024,0,180);
int finger2 = map(finger2a,300,1024,0,180);
int finger3 = map(finger3a,0,1024,0,180);
int finger4 = map(finger4a,300,1024,0,180);
int finger5 = map(finger5a,0,1024,0,180);


if(finger1 < 0)
{finger1 = 0;}

if(finger2 < 0)
{finger2 = 0;}

if(finger3 < 0)
{finger3 = 0;}

if(finger4 < 0)
{finger4 = 0;}

if(finger5 < 0)
{finger5 = 0;}





Serial.print("Finger 1:");
Serial.println(finger1);

Serial.print("Finger 2:");
Serial.println(finger2);

Serial.print("Finger 3:");
Serial.println(finger3);

Serial.print("Finger 4:");
Serial.println(finger4);

Serial.print("Finger 5:");
Serial.println(finger5);
delay(250);
}
