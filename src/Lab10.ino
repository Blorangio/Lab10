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