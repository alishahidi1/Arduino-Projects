#include <Wire.h>
#include <Adafruit_LEDBackpack.h>
#include <Adafruit_GFX.h>

Adafruit_7segment display = Adafruit_7segment();

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Initialize the display
  display.begin(0x70);  // Pass in the address of your HT16K33 display
  display.setBrightness(15); // Adjust brightness (0-15)
}

void loop() {
  // Calculate elapsed time
  unsigned long elapsedTime = millis() / 1000; // Convert milliseconds to seconds

  // Calculate minutes and seconds
  int minutes = elapsedTime / 60; // Calculate minutes
  int seconds = elapsedTime % 60; // Calculate remaining seconds

  // Display minutes and seconds
  //display.print(now.hour(), DEC); // Display hours
  
  display.writeDigitNum(0, minutes / 10);
  display.writeDigitNum(1, minutes % 10); // Display tens digit of minutes
  display.writeDigitNum(3, seconds / 10); // Display ones digit of minutes
  display.writeDigitNum(4, seconds % 10);
  display.drawColon(true); // Enable colon
  display.writeDisplay();

  // Wait for one second before updating the display with the next time
  delay(1000);
}
