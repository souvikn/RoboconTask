// C++ code
//
int in4=4;
int en1=3;
int in3=2;
int en2=5;
int in1=8;
int in2=12;
void setup()
{
  pinMode(in4, OUTPUT);
   pinMode(en1, OUTPUT); 
  pinMode(in3, OUTPUT);
   pinMode(in1, OUTPUT);
   pinMode(in2, OUTPUT);
   pinMode(en2, OUTPUT);
}

void loop()
{
 digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(en1, 50);
  
  digitalWrite(in1, HIGH);
  digitalWrite(in2,LOW);
  analogWrite(en2, 50);
}