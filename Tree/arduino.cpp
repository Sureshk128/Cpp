arduino.cpp


// C++ code
//
const int a=3;
const int b=2;
const int c=A2;
const int d=A1;
const int e=A0;
const int f=4;
const int g=5;
const int D=A3;
void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(D, OUTPUT);
}
void displayNumber(int n){
    //error checking
  if(n<0 || n>9){
  digitalWrite(D,1);
  return;
  }
  else{
      digitalWrite(a,0);
      digitalWrite(b,0);
      digitalWrite(c,0);
      digitalWrite(d,0);
      digitalWrite(e,0);
      digitalWrite(f,0);
      digitalWrite(g,0);
      digitalWrite(D,0);
    switch(n){
    case 0:
      digitalWrite(a,1);
      digitalWrite(b,1);
      digitalWrite(c,1);
      digitalWrite(d,1);
      digitalWrite(e,1);
      digitalWrite(f,1);
      break;
    case 1:
      digitalWrite(b,1);
      digitalWrite(c,1);
      break;
    case 2:
      digitalWrite(a,1);
      digitalWrite(b,1);
      digitalWrite(d,1);
      digitalWrite(e,1);
      digitalWrite(g,1);
      break;
    case 3:
      digitalWrite(a,1);
      digitalWrite(b,1);
      digitalWrite(c,1);
      digitalWrite(d,1);
      digitalWrite(g,1);
      break;
    case 4:
      digitalWrite(b,1);
      digitalWrite(c,1);
      digitalWrite(f,1);
      digitalWrite(g,1);
      break;
    case 5:
      digitalWrite(a,1);
      digitalWrite(c,1);
      digitalWrite(d,1);
      digitalWrite(f,1);
      digitalWrite(g,1);
      break;
    case 6:
      digitalWrite(a,1);
      digitalWrite(c,1);
      digitalWrite(d,1);
      digitalWrite(e,1);
      digitalWrite(f,1);
      digitalWrite(g,1);
      break;
    case 7:
      digitalWrite(a,1);
      digitalWrite(b,1);
      digitalWrite(c,1);
      break;
    case 8:
      digitalWrite(a,1);
      digitalWrite(b,1);
      digitalWrite(c,1);
      digitalWrite(d,1);
      digitalWrite(e,1);
      digitalWrite(f,1);
      digitalWrite(g,1);
      break;
    case 9:
      digitalWrite(a,1);
      digitalWrite(b,1);
      digitalWrite(c,1);
      digitalWrite(d,1);
      digitalWrite(f,1);
      digitalWrite(g,1);
      break;
    }
  }
}
void loop()
{
  int a=2;
  int b=4;
  int n=a+b;
  displayNumber(n);
}
