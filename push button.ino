
/*	This is a default program--
	Use File->Load Prog to load a different program
*/
int led=13;
int pushbutton=2;
int inputval=0;

void setup()
{
	pinMode(led,OUTPUT);
	pinMode(pushbutton,INPUT);
}

void loop()
{
	inputval=digitalRead(pushbutton);
	if(inputval==1)
	{
	digitalWrite(led,HIGH);
	}
	if(inputval==0)
	{
	digitalWrite(led,LOW);
	}
}
