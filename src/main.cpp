#include <Arduino.h>

float voltage() {
  return (analogRead(A0) / 1024.0) * 3.3;
}

float current() {
  return analogRead(A0) * 3.3;
}

void setup() {
  Serial.begin(9600);
  Serial.println(" ");
}

void loop() {
  Serial.printf("\rSpannung an LED: %.2f V, Stromverbrauch: %.2f mA", voltage(), current());
  delay(100);
}