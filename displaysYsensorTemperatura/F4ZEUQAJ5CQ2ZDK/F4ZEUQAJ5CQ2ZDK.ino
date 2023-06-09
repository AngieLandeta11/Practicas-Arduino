int temp;
int tempPin = A2;
int x,y;
int bcd_array[10][7] = {  { 0,0,0,0,0,0,1 },    // 0
                          { 1,0,0,1,1,1,1 },    // 1
                          { 0,0,1,0,0,1,0 },    // 2
                          { 0,0,0,0,1,1,0 },    // 3
                          { 1,0,0,1,1,0,0 },    // 4
                          { 0,1,0,0,1,0,0 },    // 5
                          { 0,1,0,0,0,0,0 },    // 6
                          { 0,0,0,1,1,1,1 },    // 7
                          { 0,0,0,0,0,0,0 },    // 8
                          { 0,0,0,1,1,0,0 }};   // 9
                                       
void BCD0(int);
void BCD1(int);

void setup(){
  pinMode(2, OUTPUT);   
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(A2, INPUT);  
  pinMode(9, OUTPUT);   
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
 
}

void loop(){
temp = analogRead(tempPin);
temp = temp * 0.48828125;
x = (temp/10);
y = (temp -((temp / 10) * 10));

delay(1000);

BCD0(x);
BCD1(y);

}

void BCD0(int number) 
{
  int pin= 2;
  for (int j=0; j < 7; j++) {
   digitalWrite(pin, bcd_array[number][j]);
   pin++;
  }
}

void BCD1(int number) 
{
  int pin= 9;
  for (int j=0; j < 7; j++) {
   digitalWrite(pin, bcd_array[number][j]);
   pin++;
  }
}


