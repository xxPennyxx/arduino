#include <Servo.h>
Servo Myservo;
int push=2;
int val;
void setup(){
pinMode(push, INPUT);
Myservo.attach(9);
}
void loop()
{
val=digitalRead(push);
if(val==LOW)
Myservo.write(180);
else
Myservo.write(0);
}