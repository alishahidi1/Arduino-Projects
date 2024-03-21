String inputString = "";
bool stringComplete = false;

void setup() {
  Serial.begin(9600);

}

void loop() {
  if (stringComplete){
    Serial.println(inputString);
    inputString = "";
    stringComplete = false;
  }

}

void serialEvent(){
  while(Serial.available()){
    char ch = (char)Serial.read();
    inputString += ch;
    if (ch == '\n'){
      stringComplete = true;
    }
  }
}
