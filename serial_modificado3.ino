// Código 5 - Serial   
   
void setup() 
   {
   Serial.begin(9600);
   }

void loop() {
   int byteRec; 
   // envia mensagem ao receber dado:
   if (Serial.available() > 0) {
      // lê dado recebido:
      byteRec = Serial.read();
      Serial.print("Recebi: ");
      Serial.println(byteRec, DEC);
      }
   }   