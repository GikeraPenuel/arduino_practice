#include<Stepper.h>

const int stepPerRevolution = 360;

Stepper motor(stepPerRevolution, 8, 10, 9, 11);

int btnRight = 3;
int btnLeft = 2;

void setup() {
  motor.setSpeed(50);

  pinMode(btnRight, INPUT_PULLUP);
  pinMode(btnLeft, INPUT_PULLUP);
}

void stopMotor(){
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
}
void loop() {
  int step = 0;

  if(digitalRead(btnRight) == LOW){
      motor.step(10);
      delay(20);
  }
  if(digitalRead(btnLeft) == LOW){
      motor.step(-10);
      delay(20);
  }
  else{
    stopMotor(); //this function stops power from continously flowing to the motor if btn are not pressed to prevent overheating through micro movements
  }
 
  delay(10);

}
