#include <Servo.h>

Servo miServo;

int botonSube = 10; // El botón está conectado al pin 2
int botonBaja = 8;
int Led1=6;
int botonLed1=7;


Servo myservo;
int buttonPin1 = 2;
int buttonPin2 = 3;
int buttonState1;
int buttonState2;

void setup() {
  miServo.attach(9);
  pinMode(botonSube, INPUT); // Configura el pin del botón como entrada
  pinMode(botonBaja, INPUT);
  miServo.write(90);
  pinMode(Led1, OUTPUT);// Led - pin de salida 
  pinMode(botonLed1, INPUT); // pulsador - pin de entrada 
  Serial.begin(9600);
  myservo.attach(12);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);

}

void loop() {
  if (digitalRead(botonSube) == HIGH) { // Si el botón está presionado
    miServo.write(0); // Mueve el servomotor a 180 grados
    delay(4500); // Espera 3 segundos
    miServo.write(90); // Mueve el servomotor a 0 grados
    delay(4500); // Espera 3 segundos
    
  }

  if (digitalRead(botonBaja) == HIGH) { // Si el botón está presionado
    miServo.write(180); // Mueve el servomotor a 180 grados
    delay(4500); // Espera 3 segundos
    miServo.write(90); // Mueve el servomotor a 0 grados
    delay(4500); // Espera 3 segundos
    
  }

  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  
  if (buttonState1 == HIGH) {
    myservo.write(180);
  }
  
  if (buttonState2 == HIGH) {
    myservo.write(-200);
  }
  Serial.println(buttonState1);
  Serial.println(buttonState2);

  

  
  
  

  
  


}

