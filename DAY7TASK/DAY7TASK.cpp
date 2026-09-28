// C++ code
//
int in4= 4;
int en1=5;
int in3=3;
int b=0;
int potpin=A3;
int potvalue=0;
void setup()
{
  pinMode(potpin, INPUT);
  pinMode(en1, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  
}

void loop()
{	
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  
  analogWrite(en1,127);
  
}