#include <avr/interrupt.h>
#include <avr/power.h>
#include <avr/sleep.h>
#include <avr/io.h>

void setup() {
  DDRD &= B00000011;
  DDRB = B00000000;

  PORTD |= B11111100;
  PORTB |= B11111111;

  pinMode(13, OUTPUT);
  digitalWrite(13, 1);
}

void loop() {
  delay(1000);

  sleepNow();
}

void sleepNow(){
  attachInterrupt(0, pinFunc, LOW);
  delay(100);

  set_sleep_mode(SLEEP_MODE_PWR_SAVE);
  sleep_enable();
  digitalWrite(13, 0);

  sleep_mode();
  sleep_disable();

  digitalWrite(13,1);
}

void pinFunc(void){
  detachInterrupt(0);
}