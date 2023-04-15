#include<Servo.h>
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(0);
  delay(1000);
  myServo.write(25);
  delay(1000);
  myServo.write(50);
  delay(1000);
  myServo.write(75);
  delay(1000);  
  myServo.write(100);
  delay(1000);
  myServo.write(125);
  delay(1000);
  myServo.write(150);
  delay(1000);
  myServo.write(178);
  delay(1000);
  myServo.write(150);
  delay(1000);
  myServo.write(125);
  delay(1000);
  myServo.write(100);
  delay(1000);
  myServo.write(75);
  delay(1000);
  myServo.write(50);
  delay(1000);
  myServo.write(25);
  delay(1000);
  myServo.write(0);
  delay(1000);
}
