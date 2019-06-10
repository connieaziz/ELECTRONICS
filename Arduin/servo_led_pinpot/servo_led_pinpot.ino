#include<Servo.h>

Servo servopin;
int ReadValue;
int pinpot = AO;


void setup() {
  servopin.attach(5);
  pinMode(pinpot,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  ReadValue = analogRead(pinpot);
  ReadValue = map(ReadValue,0,1023,0,180);
  servopin.write(ReadValue);
  delay(50);

  if(ReadValue >=0 && <=90)
  // put your main code here, to run repeatedly:

}
