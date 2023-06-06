#include <Servo.h>

Servo myservo;

int button1 = 8;
int button2 = 10;
int pos=90;

void setup() {
  myservo.attach(9);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  myservo.write(90);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(button2) == HIGH) {
    if (pos < 180) {
      pos += 90;
      myservo.write(pos);
      delay(500);
      myservo.write(0);
    }
  }
  if (digitalRead(button1) == HIGH) {
    if (pos > 0) {
      pos -= 90;
      myservo.write(pos);
      delay(500);
      myservo.write(0);
    }
  }
  

}


