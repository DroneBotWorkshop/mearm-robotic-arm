#include <Servo.h>

Servo middle, left, right, claw ;  // Creates 4 "servo objects"

int middlePin = A0;  // Middle Pot Analog Input Pin
int leftPin = A1;  // Left Pot Analog Input Pin
int rightPin = A2;  // Right Pot Analog Input Pin
int clawPin = A3;  // Claw Pot Analog Input Pin

int middleValue = 0;  // Middle Pot Value
int leftValue = 0;  // Left Pot Value
int rightValue = 0;  // Right Pot Value
int clawValue = 0;  // Claw Pot Value




void setup()
{
  middle.attach(11);  // attaches the servo on pin 11 to the middle object
  left.attach(10);  // attaches the servo on pin 10 to the left object
  right.attach(9);  // attaches the servo on pin 9 to the right object
  claw.attach(6);  // attaches the servo on pin 6 to the claw object
}

void loop()
{

  // Read the Pot Values
  middleValue = analogRead(middlePin);
  leftValue = analogRead(leftPin);
  rightValue = analogRead(rightPin);
  clawValue = analogRead(clawPin);

  // Convert to values between 0 and 180 for the servos
  middleValue = map(middleValue, 0, 1023, 0, 180) ;
  leftValue = map(leftValue, 0, 1023, 0, 180) ;
  rightValue = map(rightValue, 0, 1023, 0, 180) ;
  clawValue = map(clawValue, 0, 1023, 0, 180) ;

  // Write values to servos
  middle.write(middleValue); // Middle servo position
  left.write(leftValue); // Left servo position
  right.write(rightValue); // Right servo position
  claw.write(clawValue); // Claw servo position

  delay(400); // Short Delay
}
