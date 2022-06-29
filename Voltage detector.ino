
/*	This is a default program--
	Use File->Load Prog to load a different program
*/
int led=13;
int potmeter=0;//Analog A0
float voltage;
void setup()
{
	pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  voltage = sensorValue * (5.0 / 1023.0);
  Serial.println(voltage);
  if(voltage==0.0)
  {
    Serial.println("LOW");
    digitalWrite(led,LOW);
  }
  if(voltage>=3.0 && voltage<=4.0)
  {
    Serial.println("MED");
    digitalWrite(led,LOW);
    delay(100);
    digitalWrite(led,HIGH);
  }
  if(voltage==5.0)
  {
    Serial.println("HIGH");
    
    digitalWrite(led,HIGH);
  }
  delay(1000);
}
