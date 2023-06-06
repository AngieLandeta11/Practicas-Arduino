const int buttonPin = 9;  // Pin del botón
const int fanPin = 8;     // Pin del transistor o relé

int buttonState = HIGH;   // Estado inicial del botón
int fanState = LOW;       // Estado inicial del ventilador

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(fanPin, OUTPUT);
}

void loop() {
  int buttonReading = digitalRead(buttonPin);

  // Verificar si el botón ha sido presionado
  if (buttonReading == LOW && buttonState == HIGH) {
    // Cambiar el estado del ventilador
    if (fanState == LOW) {
      fanState = HIGH;
      digitalWrite(fanPin, fanState);
    } else {
      fanState = LOW;
      digitalWrite(fanPin, fanState);
    }
    delay(50);  // Esperar para evitar rebotes del botón
  }

  buttonState = buttonReading;
}
