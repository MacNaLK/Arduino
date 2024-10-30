#include <L298N.h>

L298N m1 = L298N(9,8,7); //  ENA , IN2 , IN1
L298N m2 = L298N(11,12,13); //  ENB , IN4 , IN3

void setup() {
  Serial.begin(9600);
  m1.setSpeed(255);
  m2.setSpeed(255);
}

void loop() {
  if (Serial.available()) {
    char command = Serial.read();
    if (command == 'F') {
      m1.forward();
      m2.forward();
    } else if (command == 'B') {
      m1.backward();
      m2.backward();
    } else if (command == 'L') {
      m1.backward();
      m2.forward();
    } else if (command == 'R') {
      m1.forward();
      m2.backward();
    } else if (command == 'S') {
      m1.stop();
      m2.stop();
    }
  }
}
