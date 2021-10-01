// Código 1 - BLINK
//link no tinkercad: Starters -> Arduino -> Blink

void setup() {
   pinMode(13, OUTPUT);
   }

void loop() {
   digitalWrite(13, HIGH);
   delay(1000);
   digitalWrite(13, LOW);
   delay(1000);
   }