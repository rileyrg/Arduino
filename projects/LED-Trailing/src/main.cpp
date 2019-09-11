#include <stdint.h>
#include <stdio.h>

#define UBRRH
#include <Arduino.h>
#include <avr/io.h>

int BASE = 3;
int NUM = 5;
void setup()
{
for (int i = BASE; i < BASE + NUM; i ++)
{
pinMode(i, OUTPUT);
//set port ‘i’ as an output port
}
}
void loop()
{
for (int i = BASE; i < BASE + NUM; i ++)
{
digitalWrite(i, LOW);
 delay(20);
}
for (int i = BASE; i < BASE + NUM; i ++)
{
digitalWrite(i, HIGH);
 delay(20);
}
}
