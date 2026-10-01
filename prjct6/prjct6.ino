int buzz = 8;
int potMeter = A0;
int val;
int sig;
void setup() {
  pinMode(buzz, OUTPUT);

}

void loop() {
  val = analogRead(potMeter);

  sig = map(val, 0, 1023, 100, 2000);

  tone(buzz, sig);

}
