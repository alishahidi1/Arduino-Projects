
const byte 	BUTTON_PIN = 7;
const byte led1 = 3;
const byte led2 = 4;

class Button{
  
  byte state;
  unsigned long buttonDownMs;
  
  public:
    void setup(){

      pinMode(BUTTON_PIN, INPUT_PULLUP);
      pinMode(led1, OUTPUT);
      pinMode(led2, OUTPUT);
      state = HIGH;
    }
  	
  	void loop(){
      
      byte prevState = state;
      state = digitalRead(BUTTON_PIN);
      
      if(prevState == HIGH && state == LOW){
      
        buttonDownMs = millis();
      }
      else if (prevState == LOW && state == HIGH){
      
        if(millis() - buttonDownMs < 50){
          /*ignore*/
          Serial.println("ignore this for debounce");
        }
        else if (millis() - buttonDownMs < 250){
        
          //Short Click
          Serial.println("Short Click");
          digitalWrite(led1,1);
          digitalWrite(led2,0);
        }
        else{
        
          //Long Click
          Serial.println("Long Click");
          digitalWrite(led2,1);
          digitalWrite(led1,0);
        }
      }
  	}
};

Button btn;

void setup()
{
  Serial.begin(9600);
  
  btn.setup();
}

void loop()
{
  btn.loop();
}