#include<Wire.h>
byte num_Ali=0;

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Wire.beginTransmission(8);
  Wire.write("Ali orders number: ");
  Wire.write(num_Ali);
  Wire.endTransmission();

  num_Ali++;
  delay(500);
}
