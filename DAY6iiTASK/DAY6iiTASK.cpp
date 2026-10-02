// C++ code
//
int potpin= A3;
int led1=6;
int led2=5;
int brightness=0;
int potvalue=0;
void setup()
{
  pinMode(potpin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
 potvalue=analogRead(potpin);
  brightness= map(potvalue,0,1023,0,255);
  analogWrite(led1,brightness);
  analogWrite(led2, 255-brightness);
}