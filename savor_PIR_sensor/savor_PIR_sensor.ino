#include<Servo.h>

Servo servopin;
int PIR=6;
int ReadValue;

void setup() {
  servopin.attach(9);
  pinMode(PIR,INPUT);

}

void loop() {
  ReadValue=digitalRead(PIR);
  if(ReadValue==HIGH) {
    servopin.write(90);
    delay(1000);}
    else{servopin.write(0);
    delay(1000);
    }
  
}

