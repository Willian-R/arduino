// Código 10 - Uso da função millis

unsigned long time;
	
void setup(){
	Serial.begin(9600);
	}
void loop(){
	Serial.print("Tempo:");
	time = millis();
	// escreve o tempo em milisegundos desde 
	// o início do programa
	Serial.println(time);
	// espera um segundo entre um envio e outro
	delay(1000);
}