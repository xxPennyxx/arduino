
/*	This is a default program--
	Use File->Load Prog to load a different program
*/
int pushbutton=2;
int inputval=0;

void setup()
{
	pinMode(pushbutton,INPUT);
  Serial.begin(9600);
}

void loop()
{
	inputval=digitalRead(pushbutton);
	if(inputval==1)
	
Serial.println("Hi there!");	
	
}
