/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include <stdint.h>
#include <stdio.h>

#define UBRRH
#include <Arduino.h>
#include <avr/io.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long delayPeriod = 200;
  digitalWrite(LED_BUILTIN,HIGH);
  delay(delayPeriod);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delayPeriod);
}
