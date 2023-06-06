int a=0;
int b=1;
int c=2;
int d=3;
int e=4;
int f=5;
int g=6;
int a1=7;
int b1=8;
int c1=9;
int d1=10;
int e1=11;
int f1=12;
int g1=13;

int decenas=0;

void setup()
{
  
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(a1, OUTPUT); 
  pinMode(b1, OUTPUT); 
  pinMode(c1, OUTPUT); 
  pinMode(d1, OUTPUT); 
  pinMode(e1, OUTPUT);
  pinMode(f1, OUTPUT); 
  pinMode(g1, OUTPUT);


}
void loop()
{
  if ((decenas==0) || (decenas ==10)){
  decenas=0;
  //Inicia Numero 0 de decenas
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,HIGH);
  digitalWrite(e1,HIGH);
  digitalWrite(f1,HIGH);
  digitalWrite(g1,LOW);
  delay (500);

  //decenas=decenas+1;
  }

  //Inicia Numero 0
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  delay (500);
  //Inicia Numero 1 
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay (500);
  //Inicia Numero 2
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay (500);
  //Inicia Numero 3
  digitalWrite(a, HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g, HIGH);
  delay (500);
  //Inicia Numero 4
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay (500);
  //Inicia Numero 5
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay (500);
  //Inicia Numero 6
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g,HIGH);
  delay (500);
  //Inicia Numero 7
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay (500);
  //Inicia Numero 8
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay (500);
  //Inicia Numero 9
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay (500);
  //Inicia Numero 0
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  //delay (500);
  
  decenas=decenas+1;
  
  if (decenas==1){
  //Inicia Numero 1 de decenas
  digitalWrite(a1,LOW);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,LOW);
  digitalWrite(e1,LOW);
  digitalWrite(f1,LOW);
  digitalWrite(g1,LOW);
  delay (500);
  }
  if (decenas==2){
  //Inicia Numero 2 de decenas
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,LOW);
  digitalWrite(d1,HIGH);
  digitalWrite(e1,HIGH);
  digitalWrite(f1,LOW);
  digitalWrite(g1,HIGH);
  delay (500);
  }
  if (decenas==3){
  //Inicia Numero 3 de decenas
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,HIGH);
  digitalWrite(e1,LOW);
  digitalWrite(f1,LOW);
  digitalWrite(g1, HIGH);
  delay (500);
  }
  if (decenas==4){
  //Inicia Numero 4 de decenas
  digitalWrite(a1,LOW);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,LOW);
  digitalWrite(e1,LOW);
  digitalWrite(f1,HIGH);
  digitalWrite(g1,HIGH);
  delay (500);
  }
  if (decenas==5){
  //Inicia Numero 5 de decenas
  digitalWrite(a1,HIGH);
  digitalWrite(b1,LOW);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,HIGH);
  digitalWrite(e1,LOW);
  digitalWrite(f1,HIGH);
  digitalWrite(g1,HIGH);
  delay (500);
  }
  if (decenas==6){
  //Inicia Numero 6 de decenas
  digitalWrite(a1,LOW);
  digitalWrite(b1,LOW);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,HIGH);
  digitalWrite(e1,HIGH);
  digitalWrite(f1, HIGH);
  digitalWrite(g1,HIGH);
  delay (500);
  }
  if (decenas==7){
  //Inicia Numero 7 de decenas
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,LOW);
  digitalWrite(e1,LOW);
  digitalWrite(f1,LOW);
  digitalWrite(g1,LOW);
  delay (500);
  }
  if (decenas==8){
  //Inicia Numero 8 de decenas
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,HIGH);
  digitalWrite(e1,HIGH);
  digitalWrite(f1,HIGH);
  digitalWrite(g1,HIGH);
  delay (500);
  }
  if (decenas==9){
  //Inicia Numero 9 de decenas
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,LOW);
  digitalWrite(e1,LOW);
  digitalWrite(f1,HIGH);
  digitalWrite(g1,HIGH);
  delay (500);
  
  }
  


}
