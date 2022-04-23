#include <Servo.h>
Servo servo;

int angle;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
  servo.write(0);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    angle = Serial.parseInt();
  }
  servo.write(angle);
  Serial.print(angle);
  Serial.println(" degrees set");
  delay(1000);
}
