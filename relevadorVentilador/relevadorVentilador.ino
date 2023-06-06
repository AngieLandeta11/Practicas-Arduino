#define RELAY_PIN 18 // Pin de señal del relé

void setup() {
  pinMode(RELAY_PIN, OUTPUT); // Configura el pin del relé como salida
}

void loop() {
  digitalWrite(RELAY_PIN, HIGH); // Enciende el relé, lo que activa el ventilador
  delay(5000); // Espera 5 segundos
  digitalWrite(RELAY_PIN, LOW); // Apaga el relé, lo que desactiva el ventilador
  delay(5000); // Espera 5 segundos
}

