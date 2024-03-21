#include "MyLibrary.h"

MyLib mylb(true);


void setup()
{
  // Serial.begin(9600);
  mylb.begin();
  randomSeed(analogRead(A0));
}

void loop()
{
  long rndNo = mylb.getRandomNumber();
  Serial.println(rndNo);
  Serial.println(analogRead(A0));
  Serial.println("___________");
  delay(1000);
}