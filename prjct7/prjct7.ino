
#include<Stepper.h>

const int stepsPerRevolution = 360;

int previousSteps = 0;
Stepper motor(stepsPerRevolution, 8, 10, 9, 11);
void setup() {
  motor.setSpeed(50);

}


void loop(){
  int reading = analogRead(A0);

  int currentSteps = map(reading, 0, 1023, -360, 360);

  int steps = currentSteps - previousSteps;
  motor.step(steps);



  delay(20);

  previousSteps = currentSteps;
}


