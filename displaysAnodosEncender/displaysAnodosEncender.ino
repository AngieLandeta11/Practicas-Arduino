// Definición de pines para el display
int segmentoA = 7;
int segmentoB = 8;
int segmentoC = 9;
int segmentoD = 10;
int segmentoE = 11;
int segmentoF = 12;
int segmentoG = 13;
//7, 8, 9, 10, 11, 12, 13
//14, 15, 2, 3, 4, 5, 6

void setup() {
  // Configuración de pines como salidas
  pinMode(segmentoA, OUTPUT);
  pinMode(segmentoB, OUTPUT);
  pinMode(segmentoC, OUTPUT);
  pinMode(segmentoD, OUTPUT);
  pinMode(segmentoE, OUTPUT);
  pinMode(segmentoF, OUTPUT);
  pinMode(segmentoG, OUTPUT);
}

void loop() {
  // Encender segmentos para mostrar el número 1
  digitalWrite(segmentoB, HIGH);
  digitalWrite(segmentoC, HIGH);
  
  delay(1000); // Esperar 1 segundo
  
  // Apagar todos los segmentos
  digitalWrite(segmentoA, LOW);
  digitalWrite(segmentoB, LOW);
  digitalWrite(segmentoC, LOW);
  digitalWrite(segmentoD, LOW);
  digitalWrite(segmentoE, LOW);
  digitalWrite(segmentoF, LOW);
  digitalWrite(segmentoG, LOW);
  
  delay(1000); // Esperar 1 segundo
}
