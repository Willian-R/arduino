// Código 4 - Serial

void setup() // roda apenas uma vez, ao iniciar o programa
   { 
   Serial.begin(9600); // configura a serial para 9600
   }
void loop() // fica rodando continuamente
   {
   Serial.println("Olá! Sou o Arduino!"); // envia a mensagem pela serial
   delay(1000); // fica parado 1000 milisegundos
   }   