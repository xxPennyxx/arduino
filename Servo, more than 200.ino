
/*	This is a default program--
	Use File->Load Prog to load a different program
*/
# include <Servo.h>
Servo myservo;
int potmeterpin=0;
int val;

void setup()
{
	myservo.attach(9);
	Serial.begin(9600);
}

void loop()
{
	val=analogRead(potmeterpin);
	Serial.print("PotentioMeterValue:");
	Serial.println(val);
	if(val>200)
	{
		val=map(val,0,1023,0,180);
		myservo.write(val);
	}
	//else
	//	myservo.write(0);
	delay(15);
}
