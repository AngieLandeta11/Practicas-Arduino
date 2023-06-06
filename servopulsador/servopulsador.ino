#include <Servo.h>
Servo servo1;
int servopin = 7;
int angulo = 0;
int buttonPin1 = 5;
int buttonPin2 = 6;
int buttonState1 = 0;
int buttonState2 = 0; 

void setup() {
  servo1.attach(servopin);  
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  servo1.write(180);  
}

void loop() {
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

}
