// C++ code
//
int en1=5;
int in3=3;
int in4=2;
void setup()
{
  pinMode(en1, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop()
{
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(en1, 5);
  
 delay(1000);

  
  
digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(en1, 50);
  delay(1000);
}