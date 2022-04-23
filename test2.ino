#include <Servo.h>

Servo servo;

const int del = 100; 

void setup() {
  servo.attach(9);
  servo.write(0);
  delay(1000);
  servo.write(90);
  delay(del);
  servo.write(0);
}

void loop() {
}
