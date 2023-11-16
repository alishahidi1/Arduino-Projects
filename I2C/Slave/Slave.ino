#include<Wire.h>

void setup() {
  // put your setup code here, to run once:
  Wire.begin(8);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
}

void receiveEvent(int howMany){
  char c;
  while(Wire.available()>1){
    c=Wire.read();
    Serial.print(c);
  }
  int v=Wire.read();
  Serial.println(v);
}

