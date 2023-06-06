#include <OneWire.h>                
#include <DallasTemperature.h>
 
OneWire ourWire(16);                //Se establece el pin 2  como bus OneWire
 
DallasTemperature sensors(&ourWire); //Se declara una variable u objeto para nuestro sensor

void setup() {
delay(1000);
Serial.begin(9600);
sensors.begin();   //Se inicia el sensor
}
 
void loop() {
sensors.requestTemperatures();   //Se envía el comando para leer la temperatura
float temp= sensors.getTempCByIndex(0); //Se obtiene la temperatura en ºC

Serial.print("Temperatura= ");
Serial.print(temp);
Serial.println(" C");
delay(100);   

int temp_int = round(temp * 10); // Convierte la temperatura en entero

Serial.print("Temperatura: ");
Serial.println(temp_int);

int D1=temp_int/100;
int residuo=temp_int%100;
int D2=residuo/10;

Serial.println(D1);
Serial.println(D2);

}
