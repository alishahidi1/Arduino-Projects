int red_led = 9;
int green_led = 10;
int blue_led = 11;

int red;
int green;
int blue;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led,OUTPUT);
  pinMode(green_led,OUTPUT);
  pinMode(blue_led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  red = random(256);
  green = random(256);
  blue = random(256);

  analogWrite(red_led,red);
  analogWrite(green_led,green);
  analogWrite(blue_led,blue);

  delay(100);

}
