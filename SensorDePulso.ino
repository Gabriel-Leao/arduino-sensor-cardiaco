int pulso=0;

void setup()
{
  Serial.begin(9600);
  pinMode(A5, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  pulso= analogRead(A5);
  if(pulso>=600){
   digitalWrite(11, HIGH);
    delay(300);
    digitalWrite(11, LOW);
    delay(300);
  }
  delay(500);
 Serial.println(pulso);
}