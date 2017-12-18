
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
{  int pos=120;
rightfoot.write(90);
righthigh.write(90);
leftfoot.write(90);
leftthigh.write(90);delay(500);
leftfoot.write(55);delay(400);
 for(int i=90;i<=115;i++)
 {rightfoot.write(i);delay(12);}

leftfoot.write(120);delay(100);
leftthigh.write(120);delay(100);
delay(500);
 for(int i=90;i<=120;i++)
{righthigh.write(i);delay(12);
leftthigh.write(i);delay(12);}

 leftfoot.write(90);delay(300);
 for(int i=115;i>=90;i--)
 {rightfoot.write(i);delay(12);}

delay(500);

 rightfoot.write(120);delay(300);
leftfoot.write(65);
righthigh.write(60);
for(pos=120;pos>=60;pos--)
{leftthigh.write(pos);delay(7);}
 rightfoot.write(60);

 delay(500);
  rightfoot.write(90);delay(300);
leftfoot.write(90);delay(300);
leftthigh.write(60);delay(300);

righthigh.write(60);delay(300);
 delay(500);
} 
