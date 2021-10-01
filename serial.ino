// Código 2 - Serial

void setup() // roda apenas uma vez, ao iniciar o programa
   {
   Serial.begin(9600); // configura a serial para 9600
   Serial.println("Olá! Sou o Arduino!"); // envia a mensagem pela serial
   }
void loop() // fica rodando continuamente
   {
   // não faz nada
   }