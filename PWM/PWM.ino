int led =9;
int pot =A0;
int reading;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*for (int i=1; i<256; i+=5)
  {
    analogWrite(led,i);
    delay(10);
  }*/
  reading = analogRead(pot)/4;
  analogWrite(led,reading);
}
