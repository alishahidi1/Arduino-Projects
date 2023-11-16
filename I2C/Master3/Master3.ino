#include<Wire.h>

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);
}

char rChar;
String str = "Name = ";
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(str);
  Wire.requestFrom(8,1);

  while(Wire.available()>0){
    rChar = Wire.read();
    str+=rChar;
  }
  Serial.println(str);
  delay(200);
}
