int potenciometro;
int nuevoValor;

//Variables para mostrar la termperatura en el display
int decenas;
int unidades;

// Definir los pines para cada segmento de los dos displays
int display2[7] = {7, 8, 9, 10, 11, 12, 13};
int display1[7] = {0, 1, 2, 3, 4, 5, 6};

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
void setup() {
  // Configurar los pines como salidas
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
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

}

void loop() {
  potenciometro = analogRead(A0);
  //Para que convierta de [0,1023] a [0,100]
  nuevoValor = map(potenciometro, 0, 1023, -4, 104);
  
  unidades = nuevoValor % 10;
  decenas = nuevoValor / 10 % 10;
  
  //Mandamos a imprimir en los displays
  printNumero(decenas, unidades);
  delay(100);

}

void apagar(){
  for(int i = 0; i<7; i++){
      digitalWrite(display1[i],HIGH);
      digitalWrite(display2[i],HIGH);
    }
  
}

void printNumero(int numero1, int numero2){

    for(int i = 0; i<7; i++){
      digitalWrite(display1[i],numeros[numero1][i]);
      digitalWrite(display2[i],numeros[numero2][i]);
    }
}