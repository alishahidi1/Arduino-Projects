int led = 3;
char data;

int pot = A0;
int reading;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
   
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available())
  {
    data = Serial.read();
    if (data == '1')
    {
      digitalWrite(led,1);
    }
    else if (data == '2')
    {
      digitalWrite(led,0);
    }
    else if (data == '3')
    {
      reading = analogRead(pot);
      Serial.println(reading);
    }
  }

}
