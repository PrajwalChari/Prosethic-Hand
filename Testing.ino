void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {

int flexsensor = analogRead(A0);
Serial.println(flexsensor);
delay(200);


}
