#include <OneWire.h>                
#include <DallasTemperature.h>
 
OneWire ourWire(16);                //Se establece el pin 2  como bus OneWire
 
DallasTemperature sensors(&ourWire); //Se declara una variable u objeto para nuestro sensor
//int tPin = A2;//16
                // A  B  C   D   E   F   G  
int display2[7] = {14, 15, 2, 3, 4, 5, 6};
int display1[7] = {7, 8, 9, 10, 11, 12, 13};

// Definir un arreglo de dos dimensiones que mapee los números a los segmentos necesarios para mostrarlos en los displays
int numeros[10][7] = {  { 0,0,0,0,0,0,1 },    // 0
                          { 1,0,0,1,1,1,1 },    // 1
                          { 0,0,1,0,0,1,0 },    // 2
                          { 0,0,0,0,1,1,0 },    // 3
                          { 1,0,0,1,1,0,0 },    // 4
                          { 0,1,0,0,1,0,0 },    // 5
                          { 0,1,0,0,0,0,0 },    // 6
                          { 0,0,0,1,1,1,1 },    // 7
                          { 0,0,0,0,0,0,0 },    // 8
                          { 0,0,0,1,1,0,0 }};   // 9

void setup(){
  delay(100);
  Serial.begin(9600);
  //pinMode(tPin, INPUT); //16
  sensors.begin();   //Se inicia el sensor
  
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(17, OUTPUT);//foco
  pinMode(18, OUTPUT);//ventilador

  
}

void loop(){
  sensors.requestTemperatures();   //Se envía el comando para leer la temperatura
  float temp= sensors.getTempCByIndex(0); //Se obtiene la temperatura en ºC

  Serial.print("Temperatura= ");
  Serial.print(temp);
  Serial.println(" C");
    
  int temp_int = round(temp * 10); // Convierte la temperatura en entero

  Serial.print("Temperatura: ");
  Serial.println(temp_int);

  int D1=temp_int/100;
  int residuo=temp_int%100;
  int D2=residuo/10;

  if(temp_int >=260){
    digitalWrite(17,HIGH);//foco
    digitalWrite(18,LOW);//ventilaodor
  }else if(temp_int < 260){
    digitalWrite(17,LOW);//foco
    digitalWrite(18,HIGH);//ventilador
    
  }

  Serial.println(D1);
  Serial.println(D2);

  printNumero(D1, D2);
  delay(1000);

}

void apagar(){
  for(int i = 0; i<7; i++){
      digitalWrite(display2[i],HIGH);
      digitalWrite(display1[i],HIGH);
    }
  
}

void printNumero(int numero1, int numero2){

    for(int i = 0; i<7; i++){
      digitalWrite(display2[i],numeros[numero1][i]);
      digitalWrite(display1[i],numeros[numero2][i]);
    }
}



