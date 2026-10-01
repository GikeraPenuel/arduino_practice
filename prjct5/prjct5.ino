


// "Clocks" by coldplay
int melody[] = {
  659, 523, 440, 659, 523, 440, 659, 523, // E5, C5, A4, E5, C5, A4, E5, C5
  587, 494, 392, 587, 494, 392, 587, 494  // D5, B4, G4, D5, B4, G4, D5, B4
};

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  for (int i = 0; i < 16; i++) {
    tone(8, melody[i]);
    delay(210); // Note plays longer
    noTone(8);
    delay(36);  // Pause between notes (Total per note = 166ms)
  }
  
  delay(36);   // Rest between measure repetitions
}

