#include "Arduino.h"

#define THERM_PIN A7
int senseVal = 0, outputVal = 0;

void setup() {
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);

  int senseVal = analogRead(THERM_PIN);
  int outputVal = map(senseVal, 0, 1023, 0, 255);
  Serial.print("sensor = ");
  Serial.print(senseVal);
  Serial.print("\t output = ");
  Serial.println(outputVal);
}

