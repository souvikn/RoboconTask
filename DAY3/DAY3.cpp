
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
 int n;
  char st[4]={'0','0','0','0'};
  do{
   delay(2000);
    Serial.println("Enter decimal number between 0 and 15");
  n=Serial.parseInt();
  }while(n<0 || n >15);
  int t=n;int i=0;
  while(t>0){
    int r=t%2;
    if(r==1)
      st[i]='1';
    else if(r==0)
      st[i]='0';
      t=t/2;
      i++;
  }
 if(st[0]=='1')
   digitalWrite(4,HIGH);
  else if(st[0]=='0')
    digitalWrite(4, LOW);
  if(st[1]=='1')
    digitalWrite(7,HIGH);
  else if(st[1]=='0')
    digitalWrite(7,LOW);
  if(st[2]=='1')
    digitalWrite(8, HIGH);
    else if(st[2]== '0')
    digitalWrite(8, LOW);
    if(st[3]=='1')
    digitalWrite(13, HIGH);
    else if(st[3]=='0')
    digitalWrite (13, LOW);
}