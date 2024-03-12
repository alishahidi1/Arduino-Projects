// C++ code
//

int my_delay = 1000;
int readPin = A5;


void setup()
{
  //pinMode(LED_BUILTIN, OUTPUT);
  //pinMode(readPin, INPUT);
  
  for(int i = 2; i<14; i++){
    pinMode(i, OUTPUT);
  }
  digitalWrite(2,1);
  
  Serial.begin(9600);
  
  
}

void loop()
{
  //digitalWrite(LED_BUILTIN, HIGH);
  //delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(LED_BUILTIN, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
  
  //Serial.println("Enter the Red value: ");
  //while (Serial.available()==0) {  }
  //red_v = Serial.parseInt();
  //delay(500);
  
  digitalWrite(8, 1);
  digitalWrite(9, 0);
  delay(my_delay);
  
  digitalWrite(8, 0);
  delay(my_delay);
  
  digitalWrite(7, 1);
  digitalWrite(8, 1);
  digitalWrite(9, 1);
  digitalWrite(11, 1);
  delay(my_delay);
  
  digitalWrite(13, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(11, 0);
  delay(my_delay);
  
  digitalWrite(8,1);
  delay(my_delay);
  
  digitalWrite(12,1);
  digitalWrite(13,0);
  digitalWrite(7, 1);
  delay(my_delay);
  
  digitalWrite(11,1);
  digitalWrite(12,0);
  digitalWrite(7,0);
  delay(my_delay);
  
  digitalWrite(8,0);
  digitalWrite(4,1);
  delay(my_delay);
  
  digitalWrite(12,1);
  digitalWrite(9,1);
  digitalWrite(8,1);
  digitalWrite(7,1);
  digitalWrite(4,0);
  delay(my_delay);
  
  digitalWrite(12,0);
  digitalWrite(7,0);
  digitalWrite(8,0);
  digitalWrite(11,0);
  delay(my_delay);
}

