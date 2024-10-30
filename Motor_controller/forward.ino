#include <L298N.h>

L298N m1 = L298N(9,8,7); //  ENA , IN2 , IN1

void setup() {
m1.setSpeed(255);
}

void loop() {
  m1.forward();
}
