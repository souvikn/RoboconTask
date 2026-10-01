#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int pirpin = 2;
int led = 8;
int buzzer = 9;
int button = 4;
bool systemA = true;
bool laststate = HIGH;

int motionDetection() {
  return digitalRead(pirpin);
}

void alarmOn() {
  digitalWrite(led, HIGH);
  digitalWrite(buzzer, HIGH);
}

void alarmOff() {
  digitalWrite(led, LOW);	
  digitalWrite(buzzer, LOW);
}

void buttoncheck() {
  bool currentstate = digitalRead(button);
  if (currentstate == LOW && laststate == HIGH) {
    systemA = !systemA;
  }
  laststate = currentstate;
}

void displayStatus() {
  lcd.setCursor(0, 1);
  if (!systemA) {
    lcd.print("System disarmed ");
  } else if (motionDetection() == 1) {
    lcd.print("Motion detected!");
  } else {
    lcd.print("System armed    ");
  }
}

void setup() {
  pinMode(pirpin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Security System  ");
}

void loop() {
  buttoncheck(); 
  
  if (!systemA) {
    alarmOff();
  } else {
    if (motionDetection() == 1) {
      alarmOn();
    } else {
      alarmOff();
    }
  }
  
  displayStatus(); 
}