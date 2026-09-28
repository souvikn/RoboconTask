
int pos=0;
#include <Servo.h>
int potpin=A4;
int potvalue=0;
int b=0;
Servo s;
Servo s1;
void setup()
{
  pinMode(potpin, INPUT);
  s.attach(6);
  s1.attach(5);
}
void loop()
{
  potvalue=analogRead(potpin);
  b=map(potvalue,0,1023,0,180);
  s.write(b);
  s1.write(180-b);
}