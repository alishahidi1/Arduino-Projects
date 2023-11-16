#include<Wire.h>

void setup() {
  // put your setup code here, to run once:
  Wire.begin(8);
  Wire.onRequest(AliEvent);
}

void loop() {
  // put your main code here, to run repeatedly:

}

int indx = 0;
char Arr[11] = {'A','l','i',' ','S','h','a','h','i','d','i'};

void AliEvent(){
  Wire.write(Arr[indx]);
  indx++;

  if (indx>10){
    indx=0;
  }
}

