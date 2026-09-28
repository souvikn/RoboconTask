#include <LiquidCrystal_I2C.h>
#include <Wire.h>
int in4=2;
int in3=3;
int en1=5;
int potpin=A3;
int potvalue=0;
int b=0;
const int motorS= 16511;
LiquidCrystal_I2C lcd(0x27, 16,2);
void setup()
{
  pinMode(potpin, INPUT);
  pinMode(in4, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(en1, OUTPUT);
  lcd.init();
  lcd.backlight();
}

void loop()
{
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  potvalue=analogRead(potpin);
  b=map(potvalue,0,1023,0,255);
  analogWrite(en1,b);
  int speed= map(b,0,255,0,motorS);
  lcd.setCursor(0,0);
  lcd.print("Pot: ");
  lcd.print(potvalue);
  lcd.print("   ");

  lcd.setCursor(0,1);
  lcd.print("RPM: ");
  lcd.print(speed);
  lcd.print("   ");

  delay(100);
}