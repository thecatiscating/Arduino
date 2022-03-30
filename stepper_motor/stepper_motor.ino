#include <Stepper.h>
int stepsPerRevolution=2048;
Stepper mymotor(stepsPerRevolution, 8,10,9,11);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mymotor.setSpeed(16);
}

void loop() {
  // put your main code here, to run repeatedly:
mymotor.step(stepsPerRevolution/2);
delay(500);
mymotor.step(-stepsPerRevolution/2);
delay(500);
}
