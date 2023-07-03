/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/Documents/CTD_2023/Labs/Lab10/src/Lab10.ino"
void setup();
void loop();
#line 1 "/Users/admin/Documents/CTD_2023/Labs/Lab10/src/Lab10.ino"
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(MANUAL);

#define BUTTON D3
#define LED D2

void setup()
{
  Serial1.begin(9600);
  Serial1.available();
  pinMode(D3, INPUT);
  pinMode(D2, OUTPUT);
}
void loop()
{
  if (Serial1.available() > 0)
  {
    char value = Serial1.read();
    if (value != '?')
    {
      digitalWrite(LED, value-'0');
    }
    else
    {
      Serial1.print(digitalRead(BUTTON));
    }
  }
}