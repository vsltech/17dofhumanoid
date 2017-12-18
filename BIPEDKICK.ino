
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

rightfoot.write(90);

righthigh.write(90);

leftfoot.write(90);
leftthigh.write(90);delay(5000);


leftfoot.write(55);delay(400);
 rightfoot.write(105);delay(300);
righthigh.write(90);delay(300);
leftfoot.write(150);delay(300);
leftthigh.write(180);delay(300);

for(int pos=90;pos<=140;pos++)
{righthigh.write(pos);delay(6);}delay(200);
} 
