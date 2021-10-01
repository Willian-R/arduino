// Código 9 - Troca estado de led por botão

(link = https://www.tinkercad.com/things/6bTvyg3CL8e-resistores-de-pull-up/editel?sharecode=bWyN49tA3SGjxCKJ_roG6Z78TfivZQvfwfzmBnI8zOI= )

const int pinLed=12;
const int pinBut=10;
int ledestado=0; // deve ser global para manter estado entre
// chamadas da função loop. Ou local, declarada como static.

void setup()
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinBut, INPUT);
}

void loop()
{
if (digitalRead(pinBut)==HIGH)
     {
     ledestado=!ledestado;
     digitalWrite(pinLed, ledestado);
     delay(500); // dá um tempinho para o botão estabilizar
     }
}