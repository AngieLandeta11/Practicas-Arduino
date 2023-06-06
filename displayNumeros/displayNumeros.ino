
void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);




}

void loop() {
  //cero
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(0,HIGH);
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(12,LOW);
 

  //UNO

  digitalWrite(10,HIGH);
  digitalWrite(0,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  digitalWrite(0,LOW);
  

//DOS

  
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(1,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(13,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  

  //TRES
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(0,HIGH);
  digitalWrite(1,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(13,LOW);
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  

  //cuatro
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(0,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(10,LOW);
  digitalWrite(0,LOW);
  

  //cinco
  
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(0,HIGH);
  digitalWrite(1,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
 

  //seis
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(1,HIGH);
  digitalWrite(0,HIGH);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  digitalWrite(0,LOW);
  digitalWrite(13,LOW);
  

  //siete
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(0,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(0,LOW);
  

  //ocho

  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(0,HIGH);
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  

  //nueve
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(0,HIGH);
 delay(500);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(0,LOW);

  //diez

  digitalWrite(10,HIGH);
  digitalWrite(0,HIGH); 
  delay(1500);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  delay(500);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);

  digitalWrite(10,LOW);
  digitalWrite(0,LOW);


}
