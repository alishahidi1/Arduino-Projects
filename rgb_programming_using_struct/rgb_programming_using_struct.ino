struct RGB{
  
  byte r;
  byte g;
  byte b;
  
};

RGB getColor(RGB Color);
void displayRGB(RGB color);
void setColor(RGB color);

struct _RGB{
  
  int pinR;
  int pinG;
  int pinB;
};

_RGB led1 = {3, 5, 6};
_RGB led2 = {9, 10, 11};


void setup()
{
  pinMode(led1.pinR, OUTPUT);
  pinMode(led1.pinG, OUTPUT);
  pinMode(led1.pinB, OUTPUT);
  
  pinMode(led2.pinR, OUTPUT);
  pinMode(led2.pinG, OUTPUT);
  pinMode(led2.pinB, OUTPUT);
  
  Serial.begin(9600);
  RGB rgb1 = {250, 0, 128};
  Serial.println("___________________");
  
  rgb1 = (RGB){10, 20, 30};
  RGB rgb2;
  rgb2 = getColor(rgb1);
    
  Serial.println(rgb2.r);
  Serial.println(rgb2.g);
  Serial.println(rgb2.b);
    
  Serial.println("___________________");
  delay(2000);
  
  displayRGB(rgb1);
  
}

void loop()
{
  RGB rgb10 = {255, 255, 255};
  RGB rgb11 = {255, 0, 0};
  RGB rgb12 = {0, 255, 0};
  RGB rgb13 = {0, 0, 255};
  RGB rgb14 = {255, 255, 0};
  RGB rgb15 = {128, 0, 128};
  RGB rgb16 = {0, 255, 255};
  
  setColor(rgb10);
  delay(1000);
  setColor(rgb11);
  delay(1000);
  setColor(rgb12);
  delay(1000);
  setColor(rgb13);
  delay(1000);
  setColor(rgb14);
  delay(1000);
  setColor(rgb15);
  delay(1000);
  setColor(rgb16);
  delay(1000);
}

void setColor(RGB color){
  
  analogWrite(led1.pinR, color.r);
  analogWrite(led1.pinG, color.g);
  analogWrite(led1.pinB, color.b);
}

RGB getColor(RGB Color)
{
  RGB returnRGB;
  returnRGB.r = Color.r;
  returnRGB.g = Color.g;
  returnRGB.b = Color.b;
  
  return returnRGB;
}

void displayRGB(RGB color){
	
  Serial.println(color.r);
  Serial.println("--------------");
  Serial.println(color.g);
  Serial.println("--------------");
  Serial.println(color.b);
  Serial.println("--------------");
}
