// Código 6 - Serial entre 2 arduínos - Arduino 1   
   
void setup() {
  Serial.begin(9600);
}

void loop() {
   Serial.print("c");
   delay(500);
   Serial.print("p");
   delay(500);
}