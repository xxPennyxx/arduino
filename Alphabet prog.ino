
/*	This is a default program--
	Use File->Load Prog to load a different program
*/
char input;
int led=13;
void setup()
{
	pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  delay(1000);
  input=Serial.read();
  Serial.println(input);
  if(input>=65&&input<=90)
  {
    digitalWrite(13,HIGH);
  }
  else if(input>=97&&input<=122)
  {
    digitalWrite(13,LOW);
  }
  
}
