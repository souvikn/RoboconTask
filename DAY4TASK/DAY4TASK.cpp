// C++ code
//
int sw1=12;
int sw2=8;
int green=4;
int blue=7;
int red=13;
void setup()
{
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  bool s1 = digitalRead(sw1);
  bool s2 = digitalRead(sw2);

  if (s1 && s2)
  {
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(red, LOW);
  }
  else if (!s1 && s2)
  {
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(red, HIGH);
  }
  else if ((s1 && !s2) || (!s1 && !s2))
  {
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(red, LOW);
  }
}