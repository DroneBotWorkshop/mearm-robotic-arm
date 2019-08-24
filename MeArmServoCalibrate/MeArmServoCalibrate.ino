#include <Servo.h>

Servo middle, left, right, claw ;  // creates 4 "servo objects"

void setup()
{
  Serial.begin(9600);
  middle.attach(11);  // attaches the servo on pin 11 to the middle object
  left.attach(10);  // attaches the servo on pin 10 to the left object
  right.attach(9);  // attaches the servo on pin 9 to the right object
  claw.attach(6);  // attaches the servo on pin 6 to the claw object
}

void loop()
{
  middle.write(90); // sets the servo position according to the value(degrees)
  left.write(90); // does the same
  right.write(90); // and again
  claw.write(25); // yes you've guessed it
  delay(300); // doesn't constantly update the servos which can fry them
}
