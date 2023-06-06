int ledPins[]={2,3,4,5,6,7};

void setup() {
    // Inicializamos los ones como de salida
    for(int i=0;i<=7;i++){
      pinMode(ledPins[i],OUTPUT);
    }
}

void loop() {
    enciendeYapaga();
}
void enciendeYapaga(){
int delayTime=80;
for(int i=0;i<=7;i++){
  if(i>=3){
    digitalWrite(ledPins[i-3],LOW);
} digitalWrite(ledPins[i],HIGH);
delay(delayTime);
}

for(int j=7;j>=0;j--){
  if(j<=4){
    digitalWrite(ledPins[j+3],LOW);
} digitalWrite(ledPins[j],HIGH);
delay(delayTime);
}

}