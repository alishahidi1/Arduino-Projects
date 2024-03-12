#include <Servo.h>//import the servo library

Servo coreservo; //Name the Servo
int delay_time = 1000;
void setup() {
  coreservo.attach(9);
  //coreservo.write(0);
  /*Attach the named servo object to Digital IO 13, use following syntax: 
  servoname.attach(Pin#, minimum Pulse width (ms), maximum pulse width (ms)); 
  if you want to define the pulse widths for your motor*/
  Serial.begin(9600);
  Serial.println("Enter the desired rotaray angle:");
}

void loop() {
  
  
  if (Serial.available())                                                                   //If something is entered into the Serial Monitor
   {
    int angle = Serial.parseInt();                                                         //Take the first Integer entered and set the speed variable to the entered value
    coreservo.write(angle);
    Serial.println(coreservo.read());
  	delay(delay_time);
    Serial.println("Enter the desired rotaray angle:");
   }
  
  //delay(delay_time);
  /* If you wanted to read the angle of your servo at any given time, use servoname.read();
   * If you wanted to write a pulse of a certain width use servoname.writemicroseconds(value in microseconds);
   */
}