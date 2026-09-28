int switchAll = 6;
int switchBlue = 5;
int switchYellow = 4;
int switchRed = 3;

int ledBlue = 12;
int ledYellow = 11;
int ledRed = 10;


void setup() {
  pinMode(switchAll, INPUT_PULLUP);
  pinMode(switchBlue, INPUT_PULLUP);
  pinMode(switchYellow, INPUT_PULLUP);
  pinMode(switchRed, INPUT_PULLUP);

  pinMode(ledBlue, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  if(digitalRead(switchAll) == LOW){
    digitalWrite(ledBlue, HIGH);
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledRed, HIGH);
  }
  if(digitalRead(switchBlue) == LOW){
    digitalWrite(ledBlue, HIGH);
  }
  if(digitalRead(switchBlue) == HIGH){
    digitalWrite(ledBlue, LOW);
  } 
  if(digitalRead(switchYellow) == LOW){
    digitalWrite(ledYellow, HIGH);
  }
  if(digitalRead(switchYellow) == HIGH){
    digitalWrite(ledYellow, LOW);
  } 
  if(digitalRead(switchRed) == LOW){
    digitalWrite(ledRed, HIGH);
  }
  if(digitalRead(switchRed) == HIGH){
  digitalWrite(ledRed, LOW);
  } 
}
