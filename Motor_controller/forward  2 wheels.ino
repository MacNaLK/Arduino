#include <L298N.h>

L298N m1 = L298N(9,8,7); //  ENA , IN2 , IN1
L298N m2 = L298N(11,12,13); //  ENB , IN4 , IN3
void setup() {
m1.setSpeed(255);
m2.setSpeed(255);
}

void loop() {
  m1.forward();
  m2.forward();
}
