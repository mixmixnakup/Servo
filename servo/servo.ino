#include <Servo.h>
Servo myservo;
void setup()
{
myservo.attach(9); 
}
void loop()
{
myservo.write(0); 
delay(32000); 
myservo.write(60); 
delay(500);
}
