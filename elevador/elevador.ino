#include <Servo.h>

Servo myservo; // Crear un objeto de servo
int pinServo = 9; // Definir el pin PWM al que está conectado el servo
int pinBoton1 = 10; // Definir el pin digital al que está conectado el botón 1
int pinBoton2 = 8; // Definir el pin digital al que está conectado el botón 2
int tiempo = 0; // Definir una variable de tiempo inicializada en cero
bool boton1Presionado = false; // Definir una variable de estado inicializada en falso para el botón 1
bool boton2Presionado = false; // Definir una variable de estado inicializada en falso para el botón 2
Servo servo1;
int servopin = 7;
int angulo = 0;
int buttonPin1 = 5;
int buttonPin2 = 6;
int buttonState1 = 0;
int buttonState2 = 0; 

int ledPin1 = 11; // Conecta el LED 1 al pin 10
int ledPin2 = 12; // Conecta el LED 2 al pin 11
int buttonPin = 2; // Conecta el botón al pin 2
int ledState1 = LOW; // Estado inicial del LED 1
int ledState2 = LOW; // Estado inicial del LED 2
int buttonState; // Estado del botón
int lastButtonState = LOW; // Estado del botón en la última lectura
unsigned long lastDebounceTime = 0; // Último momento en el que se leyó el botón
unsigned long debounceDelay = 50; // Retardo para evitar rebotes en el botón

void setup(){
  Serial.begin(9600);
  myservo.attach(pinServo); // Asignar el pin al objeto de servo
  pinMode(pinBoton1, INPUT); // Definir el pin del botón 1 como entrada
  pinMode(pinBoton2, INPUT); // Definir el pin del botón 2 como entrada
  servo1.attach(servopin);  
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  servo1.write(180); 
  pinMode(ledPin1, OUTPUT); // Configura el pin del LED 1 como salida
  pinMode(ledPin2, OUTPUT); // Configura el pin del LED 2 como salida
  pinMode(buttonPin, INPUT); // Configura el pin del botón como entrada
}

void loop() {
  if(digitalRead(pinBoton1) == HIGH && !boton1Presionado){ // Si el botón 1 está presionado y la variable de estado es falsa
    boton1Presionado = true; // Establecer la variable de estado del botón 1 en verdadero
    while(tiempo < 4500){ // Mientras el tiempo sea menor a 5000 milisegundos (5 segundos)
      myservo.write(360); // Girar el servomotor a 360 grados en dirección horaria
      delay(15); // Esperar 15 milisegundos antes de actualizar la posición del servomotor
      tiempo += 15; // Incrementar el tiempo en 15 milisegundos
    }
    boton1Presionado = false; // Establecer la variable de estado del botón 1 en falso
    tiempo = 0; // Reiniciar la variable de tiempo a cero
    myservo.write(90);
  }

  if(digitalRead(pinBoton2) == HIGH && !boton2Presionado){ // Si el botón 2 está presionado y la variable de estado es falsa
    boton2Presionado = true; // Establecer la variable de estado del botón 2 en verdadero
    while(tiempo < 4500){ // Mientras el tiempo sea menor a 5000 milisegundos (5 segundos)
      myservo.write(0); // Girar el servomotor a 360 grados en dirección anti-horaria
      delay(15); // Esperar 15 milisegundos antes de actualizar la posición del servomotor
      tiempo += 15; // Incrementar el tiempo en 15 milisegundos
    }
    boton2Presionado = false; // Establecer la variable de estado del botón 2 en falso
    tiempo = 0; // Reiniciar la variable de tiempo a cero
    myservo.write(90);
    
  }
  Serial.println(pinBoton1);
  Serial.println(pinBoton2);

  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  if (buttonState1 == HIGH)
  {
    angulo++;
    if (angulo >= 180)
    {
      angulo = 180;   
    }
  }

  if (buttonState2 == HIGH)
  {
    angulo--;
    if (angulo <= 0)
    {
      angulo = 0;
    }
  }
  servo1.write(angulo);  
  delay(10);

  ////////////focos DOBLES////////////////////////////////
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

  //////////////////////FOCO///////////////////////////////////////////////////

}



