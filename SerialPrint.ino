
/*	This is a default program--
	Use File->Load Prog to load a different program
*/
int count;
byte serial_input;
void setup()
{
	count=0;
	Serial.begin(9600);

}

void loop()
{
	count=count+1;
	Serial.print("SerialPrint");
	Serial.println(count);
	delay(1000);
	serial_input=Serial.read();
	Serial.println(serial_input);

}
