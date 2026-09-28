// C++ code
//
int trig=11;
int echo=6;
long duration=0;
int distance=0;
int red=8;
int green= 7;
void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  duration=pulseIn(echo, HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance:");
  Serial.println(distance);
  if(distance > 10)
  {
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
  }
  else if(distance < 10)
  {
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
  
}
  else{
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
}
  if(distance < 3)
  {
   digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
}
  else if(distance > 299)
  {
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
  }
}