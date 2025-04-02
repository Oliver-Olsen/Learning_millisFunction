#include <Arduino.h>

unsigned long timer = 0;
unsigned long timeElapsed = 0;
unsigned long prevTime = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  timer = millis();
  if (timer - prevTime >= 1000)
  {
    prevTime = timer;
    timeElapsed++;
    Serial.println(timeElapsed);
  }
}
