class Flasher{
  
  int ledPin;
  long onTime;
  long offTime;
  
  int ledState;
  unsigned long previousMillis;
  
  public:
  	Flasher(int pin, long on, long off){
      
      ledPin = pin;
      onTime = on;
      offTime = off;
      
      pinMode(ledPin, OUTPUT);
      
      ledState = LOW;
      previousMillis = 0;
      
  	}
  	
  	void Update(){
      
      unsigned long currentMillis = millis();
      
      if (ledState == HIGH && currentMillis - previousMillis >= onTime){
      
        ledState = LOW;
        previousMillis = currentMillis;
        digitalWrite(ledPin, ledState);
      }
      else if (ledState == LOW && currentMillis - previousMillis >= offTime){
      
        ledState = HIGH;
        previousMillis = currentMillis;
        digitalWrite(ledPin, ledState);
      }
    }
};


Flasher led1(11, 1000, 100);
Flasher led2(12, 100, 1000);
Flasher led3(13, 1000, 1000);


void setup()
{
  
}

void loop()
{
  led1.Update();
  led2.Update();
  led3.Update();
}