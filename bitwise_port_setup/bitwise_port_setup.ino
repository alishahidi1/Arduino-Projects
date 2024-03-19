


void setup()
{
  DDRD = DDRD | B11111100;
}

void loop()
{
  PORTD = PORTD & B00000000;
  delay(500);
  PORTD = PORTD | B11111100;
  delay(500);
}