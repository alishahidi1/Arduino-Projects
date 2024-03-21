#include "MyLibrary.h"

MyLib::MyLib(bool displayMsg){

  // Serial.begin(9600);
  _msg = displayMsg;
}

long MyLib::getRandomNumber(){
  unsigned long Number = random(100, 1000);
  return Number * getPi();
}

void MyLib::begin(int baudRate){
  Serial.begin(baudRate);
  if (_msg){
    Serial.println("Input is True!");
  }
}

float MyLib::getPi(){
  return 3.14;
}