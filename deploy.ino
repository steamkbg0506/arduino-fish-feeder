#include <Servo.h>
Servo servo;

const int del = 100;

void setup() {
  servo.attach(9);
  servo.write(0);
}

void loop() {
  servo.write(90);
  delay(del);
  servo.write(0);
  for(int i = 0; i < 24; i++){
    delay(3600000);
  }
}
