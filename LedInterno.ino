/*

Primer programa para ESP32 

*/

void setup() {
  // Inicializo el pin digital LED_BUILTIN como output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// La funcion Loop se ejecuta hasta que se corta la alimentacion
void loop() {

  digitalWrite(LED_BUILTIN, HIGH);   // enciende el LED  (HIGH es el nivel de salida)
  
  delay(1000);                       // espera un segundo (1000 milisegundos)
  
  digitalWrite(LED_BUILTIN, LOW);    // apago LED poniendo la salida en LOW
  
  delay(1000);                       // espera un segundo (1000 milisegundos)
  
}
