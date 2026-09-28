// C++ code
//
int trig=11;
int echo=10;
int distance=0;
int led=6;
long duration=0;int b=0;
void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
}
int myMap(int x, int in_min, int in_max, int out_min, int out_max){
   return (x-in_min)*(out_max-out_min)/(in_max-in_min)+out_min;
  }
void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
 duration= pulseIn(echo, HIGH);
  distance =0.034*duration/2;
  if(distance <20 || distance >200)
    digitalWrite(led, LOW);
  else
  {
    b=myMap(distance,20,200,0,255);
    analogWrite(led, b);
}
}