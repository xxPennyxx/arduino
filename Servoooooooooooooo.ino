
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
	delay(100);
	val=analogRead(potmeterpin);
	Serial.print("PotentioMeterValue:");
	Serial.println(val);
	val=map(val,0,1023,0,180);
	myservo.write(val);
	delay(15);
}
