// C++ code
//
int potpin=A3;
void setup()
{
  pinMode(potpin, INPUT);
 Serial.begin(9600);
}

void loop()
{
 int potval= analogRead(potpin);
  Serial.print("val:");
  Serial.println(potval);
}