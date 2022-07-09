int irsensor = 9;
int motor = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(irsensor,INPUT);
  pinMode(motor,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int statusSensor = digitalRead(irsensor);
  if (statusSensor==1)
  {
    digitalWrite(motor,LOW);
  }
  else
  {
    digitalWrite(motor,HIGH);
  }
}
