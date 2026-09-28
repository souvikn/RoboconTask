int step= 8;
int dir=8;
void setup() {
  pinMode(step,OUTPUT);
  pinMode(dir, OUTPUT);

  digitalWrite(dir, HIGH);

}

void loop() {
  digitalWrite(step, HIGH);
  delay(10);

  digitalWrite(step, LOW);
delay(10);

}
