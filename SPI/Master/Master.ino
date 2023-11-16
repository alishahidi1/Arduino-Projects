#include<SPI.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  digitalWrite(SS,HIGH);
  SPI.begin();

  SPI.setClockDivider(SPI_CLOCK_DIV8);

}

void loop() {
  // put your main code here, to run repeatedly:
  char c;
  digitalWrite(SS,LOW);
  for (const char *p = "Ali Shahidi\r";c=*p;p++){
    SPI.transfer(c);
    Serial.print(c);
  }
  digitalWrite(SS,LOW);
  delay(200);
}
