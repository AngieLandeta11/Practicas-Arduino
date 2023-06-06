// Pin del botón
const int botonPin = 2;
// Pin del LED
const int ledPin = 13;

// Variable para almacenar el estado del LED
int ledEstado = LOW;
// Variable para almacenar el estado anterior del botón
int botonEstadoAnterior = HIGH;
// Variable para almacenar el tiempo de la última vez que se presionó el botón
unsigned long tiempoAnterior = 0;
// Intervalo mínimo entre dos pulsaciones consecutivas del botón
unsigned long intervaloDebounce = 50;

void setup() {
  // Configuración del pin del botón como entrada
  pinMode(botonPin, INPUT);
  // Configuración del pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Lectura del estado actual del botón
  int botonEstado = digitalRead(botonPin);

  // Comprobar si el estado del botón ha cambiado
  if (botonEstado != botonEstadoAnterior) {
    // Almacenar el tiempo actual
    unsigned long tiempoActual = millis();
    // Comprobar si ha pasado suficiente tiempo desde la última vez que se pulsó el botón
    if (tiempoActual - tiempoAnterior > intervaloDebounce) {
      // Actualizar el tiempo anterior
      tiempoAnterior = tiempoActual;
      // Si el botón está siendo presionado
      if (botonEstado == LOW) {
        // Cambiar el estado del LED
        ledEstado = !ledEstado;
        // Encender o apagar el LED según el nuevo estado
        digitalWrite(ledPin, ledEstado);
      }
    }
  }

  // Almacenar el estado actual del botón como estado anterior
  botonEstadoAnterior = botonEstado;
}

