
#include <Servo.h> 
Servo rightfoot;
Servo righthigh;
Servo leftfoot;
Servo leftthigh;
 int pos;
void setup() 
{ 
rightfoot.attach(3);
righthigh.attach(5);
leftfoot.attach(9);
leftthigh.attach(6);

} 
 
 
void loop() 
{
for(int i=0;i<=7;i++)
{//walk left dance way
leftfoot.write(120);
rightfoot.write(60);
delay(1000);
leftfoot.write(60);
rightfoot.write(120);delay(1000);}
delay(10000);

}
