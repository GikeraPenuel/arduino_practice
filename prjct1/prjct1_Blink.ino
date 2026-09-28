int ledPin = 12;   //i`m using digital pin 13


void setup() {
  pinMode(ledPin, OUTPUT); //set pin 13 to output
}

void loop() {
  
  digitalWrite(ledPin, HIGH); // turn on led
  delay(500); //pause for half a second
  digitalWrite(ledPin, LOW); //turn off led
  delay(500); //pause for half a second
}
