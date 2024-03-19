// C++ code
//
int j = 14;
void setup()
{
  for (int i = 14; i <= 18; i++){
    pinMode(i, OUTPUT);
  }
  
  pinMode(19, INPUT);
}

void loop()
{
  if (digitalRead(19)){
    digitalWrite(j, 1);
    delay(300);
    digitalWrite(j, 0);
    delay(300);
    
    j++;
    
    if (j == 19){
      j = 14;
    }
  }
}