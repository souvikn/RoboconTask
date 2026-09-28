// C++ code
//
int trig=11;
int echo=9;
int red=13;
int yellow=12;
int green=7;
long duration=0;
int distance=0;
int potpin=A0;
int potvalue=0;
int wdistance=0;
void setup()
{
  pinMode(trig, OUTPUT);
   pinMode(echo, INPUT);
  pinMode(red,OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(potpin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration= pulseIn(echo, HIGH);
  distance= duration*0.034/2;
  potvalue=analogRead(potpin);
  wdistance= map(potvalue,0,1023,10,50);
  
  if(distance > wdistance)
  {
   digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    Serial.println("The robot is at a safe distance.");
  }
    else if(distance > wdistance/2 && distance <= wdistance)
    {
     digitalWrite(green, LOW);
      digitalWrite(yellow, HIGH);
      digitalWrite(red, LOW);
      Serial.println ("The robot is getting close to the obstacle.");
    }
    else if(distance <= wdistance/2)
    {
     digitalWrite(green, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(red, HIGH);
      Serial.println("The robot is dangerously close to the obstacle.");
    }
}