
int led =3;

int data;
int count_led;
int speed_led;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available())
  {
    //data = Serial.read();
    
    data = Serial.parseInt();
    count_led = Serial.parseInt();
    speed_led = Serial.parseInt();

    if (data == 1)
    {
      digitalWrite(led,1);
    }
    else if (data == 2)
    {
      digitalWrite(led,0);
    }
    else if (data == 3)
    {
      for (int i=1; i<=count_led;i++)
      {
        digitalWrite(led,1);
        delay(speed_led);
        digitalWrite(led,0);
        delay(speed_led);
      }
    }
  }
  delay(1);

}
