// C++ code
//
int trig=11;
int echo=10;
int led=6;
long duration=0;
int distance=0;
int b=0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration=pulseIn(echo, HIGH);
  distance=0.034*duration/2;
  if(distance < 20 || distance > 200)
    digitalWrite(led, LOW);
  else{
    b= map(distance,20,200,0,255);
     analogWrite(led,b);
}
}