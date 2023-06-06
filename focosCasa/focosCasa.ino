int ledPin1 = 11; // Conecta el LED 1 al pin 10
int ledPin2 = 12; // Conecta el LED 2 al pin 11
int buttonPin = 2; // Conecta el botón al pin 2

int ledState1 = LOW; // Estado inicial del LED 1
int ledState2 = LOW; // Estado inicial del LED 2
int buttonState; // Estado del botón
int lastButtonState = LOW; // Estado del botón en la última lectura
unsigned long lastDebounceTime = 0; // Último momento en el que se leyó el botón
unsigned long debounceDelay = 50; // Retardo para evitar rebotes en el botón

void setup() {
  pinMode(ledPin1, OUTPUT); // Configura el pin del LED 1 como salida
  pinMode(ledPin2, OUTPUT); // Configura el pin del LED 2 como salida
  pinMode(buttonPin, INPUT); // Configura el pin del botón como entrada
}

void loop() {
  int reading = digitalRead(buttonPin); // Lee el estado del botón

  if (reading != lastButtonState) {
    lastDebounceTime = millis(); // Actualiza el último momento en que se leyó el botón
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading; // Actualiza el estado del botón

      if (buttonState == HIGH) {
        // Cambia el estado de los LEDs
        if (ledState1 == LOW) {
          ledState1 = HIGH;
          ledState2 = HIGH;
        } else {
          ledState1 = LOW;
          ledState2 = LOW;
        }

        // Actualiza el estado de los LEDs
        digitalWrite(ledPin1, ledState1);
        digitalWrite(ledPin2, ledState2);
      }
    }
  }

  lastButtonState = reading; // Actualiza el estado del botón en la última lectura
}

