const int LED=9;
const int BOTON=5;
int val=0;
int old_val=0;
int estado=0;
void setup(){
pinMode(LED,OUTPUT);
pinMode(BOTON,INPUT);
}
void loop(){
val=digitalRead(BOTON);
if  ((val==HIGH)&&(old_val==LOW)){
estado=1-estado;
delay(100);
}
old_val=val;
if(estado==1){
digitalWrite(LED,HIGH);
}
else { 
  digitalWrite(LED,LOW);
}
}