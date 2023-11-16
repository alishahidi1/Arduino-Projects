#include<Wire.h>

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
}

//String str = "Ali Shahidi";
//char [] str1 = "Ali Shahidi";
char *mystr = "Ali Shahidi";

void loop() {
  // put your main code here, to run repeatedly:
  Wire.beginTransmission(8);
  Wire.write(mystr);
  Wire.endTransmission();
  delay(300);
}
