const byte led = 9;
const byte interruptPin = 0;
volatile byte state = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(interruptPin,ledOn,CHANGE);
//  attachInterrupt(0,ledOff,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,state);
//  delay(10);
}

void ledOn() {
  state = !state;
}

//void ledOff(){
//  state = !state;
//}

