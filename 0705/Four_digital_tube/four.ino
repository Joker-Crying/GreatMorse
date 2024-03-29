void setup()
{
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  int i = 0;
  String ls = "";
  if(Serial.available()>0)
  {
    ls += char(Serial.read());
    delay(1);
    for(;ls[i]!='\0';i++)
    {
    switch(ls[i])
      {
        case '0': zero();break;
        case '1':  one();break;
        case '2':  two();break;
        case '3':three();break;
        case '4': four();break;
        case '5': five();break;
        case '6':  six();break;
        case '7':seven();break;
        case '8':eight();break;
        case '9': nine();break;
      }
      digitalWrite(i+7, HIGH);
    }
  }
}

void zero()
{
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void one()
{
  digitalWrite(6, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void two()
{
  digitalWrite(6, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void three()
{
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void four()
{
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}

void five()
{
  digitalWrite(6, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}

void six()
{
  digitalWrite(6, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}

void seven()
{
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}

void eight()
{
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
}

void nine()
{
  digitalWrite(6, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
}
