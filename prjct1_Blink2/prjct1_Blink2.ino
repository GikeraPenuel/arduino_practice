int ledRed = 12;
int ledBlue = 10;
int ledYellow = 8;

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledYellow, OUTPUT);
}

void loop() {
  digitalWrite(ledRed, HIGH);
  delay(500);
  digitalWrite(ledBlue, HIGH);
  delay(500);
  digitalWrite(ledYellow, HIGH);
  delay(500);
  digitalWrite(ledBlue, LOW);
  delay(500);
  digitalWrite(ledRed, LOW);
  delay(500);
  digitalWrite(ledYellow, LOW);
  delay(500);
}
