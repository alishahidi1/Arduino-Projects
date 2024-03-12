// C++ code
//

int speakerPin = 12;
int tones[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440, 502, 530, 6500, 640};
int number =14;


void setup()
{
  for(int i = 0; i < number; i++){
    tone(speakerPin, tones[i]);
    delay(500);
  }
  noTone(speakerPin);
}

void loop()
{
  
}