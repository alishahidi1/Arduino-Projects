#define led 13

void (* resetFunc) (void) = 0;


void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  Serial.println();
}

void loop()
{
  switch(user_input()){
    case '1': 
    	Serial.println("\n OK LED turned on!");
    	digitalWrite(led, 1);
    	break;
    
    case '2': 
    	Serial.println("\n OK LED turned off!");
    	digitalWrite(led, 0);
    	break;
    
    case '3':
    	Serial.println("\n OK, the LED is blinking!");
    	
        for (int i = 0; i<10; i++){
          digitalWrite(led, 1);
          delay(500);
          digitalWrite(led, 0);
          delay(500);
        }
    	break;
    
    case '4':
    	Serial.println("\n OK, Arduino is restarting!");
    	delay(1000);
    	resetFunc();
    	break;
    	
  }
}

char user_input(){
  
  while(1){
    Serial.println();
    Serial.println("Please select one of the following options: ");
    Serial.println(" 1 - Turn on the LED");
    Serial.println(" 2 - Turn off the LED");
    Serial.println(" 3 - Blink the LED");
    Serial.println(" 4 - Restart the Arduino");
    
    while(!Serial.available()){
      delay(1);
    }
    
    char ch = Serial.read();
    
    if (ch >= '1' && ch <= '4'){
      return ch;
    }
    else{
      Serial.println("\nInvalid selection");
    }
  }
}