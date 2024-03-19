#include<TimerOne.h>
int s, m, h;


void setup()
{
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(clock_set);
  Serial.begin(9600);
}

void clock_set(){
  s++;
  
  if (s == 60){
    s = 0;
    m++;
    
    if (m == 60){
      s = 0;
      m = 0;
      h++;
      
      if (h == 24){
        h = m = s = 0;
      }
    }
  }
  
  Serial.print("Time: ");
  Serial.print(h);
  Serial.print(":");
  Serial.print(m);
  Serial.print(":");
  Serial.println(s);
  
}

void loop()
{
  
}