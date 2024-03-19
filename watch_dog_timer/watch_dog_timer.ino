// C++ code
//

#include <avr/wdt.h>

void setup()
{
  Serial.begin(9600);
  //wdt_enable(x);
  //wdt_reset();
  //wdt_disable();
  
  wdt_enable(WDTO_1S);
  
}

void loop()
{
  Serial.println("Start!");
  while(1);
  Serial.println("Unwatched!");
  
}