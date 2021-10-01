// Código 7 - Serial entre 2 arduínos - Arduino 2   

const int pinLed = 13;

void setup() {
  pinMode(pinLed,OUTPUT);
  Serial.begin(9600);
}

void loop() {
if (Serial.available())
   {
   char c=Serial.read();
   if (c=='c')
      digitalWrite(pinLed,HIGH);
   else if (c=='p') 
      digitalWrite(pinLed,LOW);
   }
}