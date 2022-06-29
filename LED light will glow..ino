
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

int LEDpin;

void setup()
{
	LEDpin=13;
}

void loop()
{
	digitalWrite(13,HIGH);
	delay(1000);
	digitalWrite(13,LOW);
	delay(1000);
}
