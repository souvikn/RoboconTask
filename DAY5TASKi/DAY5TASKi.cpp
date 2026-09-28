int potpin=A0;
int potvalue=0;
int red=11;
int yellow= 10;
int green=6;
int brightness =0;
void setup(){
 pinMode(potpin, INPUT);
 pinMode(red, OUTPUT);
 pinMode(yellow, OUTPUT);
 pinMode(green, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
potvalue= analogRead(potpin);
  Serial.println(potvalue);
  if(potvalue >= 0 && potvalue <= 340)
  {
   brightness=map(potvalue,0,1023,0,255);
    analogWrite(green, brightness);
    analogWrite(yellow, 0);
    analogWrite(red,0);
  }
  else if(potvalue >=341 && potvalue <=680)
  {
   brightness = map(potvalue,0,1023,0,255);
    analogWrite(yellow, brightness);
    analogWrite(green,0);
    analogWrite(red,0);
  }
  else if(potvalue >=681 && potvalue <= 1023)
  {
   brightness = map(potvalue,0,1023,0,255);
     analogWrite(red, brightness);
    analogWrite(green,0);
    analogWrite(yellow,0);
  }
 
}