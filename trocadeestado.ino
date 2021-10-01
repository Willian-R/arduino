// Código 8 - Troca estado em interrupção

// troca o estado do LED quando é chamada
// a rotina de interrupção
int pin = 13;

volatile int state = LOW;

void setup()
{
  pinMode(pin, OUTPUT);
  attachInterrupt(0, blink, CHANGE);
}

void loop()
{
  digitalWrite(pin, state);
}

void blink()
{
  state = !state;
}