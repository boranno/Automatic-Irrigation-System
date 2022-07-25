int Sensorinput1,Sensorinput2,PumpOutput=2;
void setup()
{
  pinMode(PumpOutput,OUTPUT);
}

void loop()
{
  Sensorinput1=analogRead(A0);
  Sensorinput2=analogRead(A1);
  if(Sensorinput1<50)
  {
    digitalWrite(PumpOutput,HIGH);
  }
  else if(Sensorinput1>700 && Sensorinput2>750)
  {
    digitalWrite(PumpOutput,LOW);
  }
  delay(500);
}
