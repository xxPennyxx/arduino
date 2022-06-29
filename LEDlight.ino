
# include <Servo.h>
Servo myservo;
int led0=10;
int led1=11;
int push=2;
int val;
int in;
int potmeter=1;
void setup()
{
	myservo.attach(9);
	pinMode(push,INPUT);
	pinMode(led0,OUTPUT);
	pinMode(led1,OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	val=analogRead(potmeter);
	in=digitalRead(push);
	if(in==0)
	{
		Serial.println(val);
		if (val>=0 && val<=300)
		{
			digitalWrite(led1,LOW);
			digitalWrite(led0,LOW);
			Serial.println("LOW");
		}
		else if (val>=301 && val<=600)
		{
			digitalWrite(led1,LOW);
			digitalWrite(led0,HIGH);
			Serial.println("AVG");
		}
		else if (val>=601 && val<=900)
		{
			digitalWrite(led1,HIGH);
			digitalWrite(led0,LOW);
			Serial.println("MED");
		}
		else
		{
			digitalWrite(led1,HIGH);
			digitalWrite(led0,HIGH);
			Serial.println("HIGH");
		}
	}

	delay(100);
}
