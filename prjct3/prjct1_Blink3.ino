const int ledPin = 9;
const int potPin = A0;

int potVal;
int brightness;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potVal = analogRead(potPin);
  brightness = map(potVal, 0, 1023, 0, 255);
  analogWrite(ledPin, brightness);

}
