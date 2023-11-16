int led=3;
char ch;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  while(Serial.available())
  {
    ch = Serial.read();
    if (ch == '1')
    {
      digitalWrite(led,1);
    }
    else if (ch == '0')
    {
      digitalWrite(led,0);
    }
  }
}



