const int G= 5;              // pin 5 de l’Arduino
const int F= 6;              // pin 6 de l’Arduino                       
const int A= 7;              // pin 7 de l’Arduino
const int B= 8;              // pin 8 de l’Arduino
const int E= 9;              // pin 9 de l’Arduino
const int D= 10;             // pin 10 de l’Arduino
const int C= 11;             // pin 11 de l’Arduino
const int buttonPin = 2;     // pin 2 de l’Arduino

void setup()
{
  pinMode(G, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
}

void loop()
{
  //0
  digitalWrite(G, LOW);
   digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
   delay(500);
  
  //1
  digitalWrite(G, LOW);
   digitalWrite(F, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(E, LOW);
    digitalWrite(D, LOW);
    digitalWrite(C, HIGH);
   delay(500);
  
  
  
  //2
   digitalWrite(G, HIGH);
   digitalWrite(F, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, LOW);
   delay(500);
  
//3
digitalWrite(G, HIGH);
   digitalWrite(F, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E,LOW);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
   delay(500);
  
  //4
  digitalWrite(G, HIGH);
   digitalWrite(F, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(E,LOW);
    digitalWrite(D, LOW);
    digitalWrite(C, HIGH);
   delay(500);
  
  //5
  digitalWrite(G, HIGH);
   digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(E,LOW);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
   delay(500);
  
  //6
  digitalWrite(G, HIGH);
   digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(E,HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
   delay(500);
  
  //7
   digitalWrite(G, LOW);
   digitalWrite(F, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(E,LOW);
    digitalWrite(D, LOW);
    digitalWrite(C, HIGH);
   delay(500);
  // 8
   digitalWrite(G, HIGH);
   digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
   delay(500);
  // 9
  digitalWrite(G, HIGH);
   digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E,LOW);
    digitalWrite(D, LOW);
    digitalWrite(C, HIGH);
   delay(500);
  
}
