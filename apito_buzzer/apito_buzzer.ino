#define NOTE_REST 0

#define NOTE_E4 330
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_Ab4 415
#define NOTE_B4 466
#define NOTE_D5 587
#define NOTE_E5 659
#define NOTE_G5 784
#define NOTE_A5 880
#define NOTE_Ab5 830
#define NOTE_B5 932
#define NOTE_D6 1175
#define NOTE_E6 1319
#define NOTE_G6 1568
#define NOTE_A6 1760
#define NOTE_Ab6 1661
#define NOTE_B6 1865
#define NOTE_D7 2349
#define NOTE_E7 2637
#define NOTE_G7 3136
#define NOTE_A7 3520
#define NOTE_Ab7 3322
#define NOTE_B7 3729
#define NOTE_D8 4699
#define NOTE_E8 5274
#define NOTE_G8 6272
#define NOTE_A8 7040
#define NOTE_Ab8 6645
#define NOTE_B8 7459

int imperialMarch[] = {
  NOTE_E4, 8, NOTE_E4, 8, NOTE_REST, 4,
  NOTE_A4, 8, NOTE_Ab4, 16, NOTE_G4, 16, NOTE_REST, 4,
  NOTE_E5, 8, NOTE_E4, 16, NOTE_REST, 4,
  NOTE_A4, 8, NOTE_Ab4, 16, NOTE_G4, 16, NOTE_REST, 4,
  NOTE_E5, 8, NOTE_REST, 16, NOTE_E5, 16,
  NOTE_E5, 8, NOTE_E4, 16, NOTE_REST, 4,
  NOTE_A4, 8, NOTE_Ab4, 16, NOTE_G4, 16, NOTE_REST, 4,
  NOTE_E5, 8, NOTE_E4, 16, NOTE_REST, 4
};

int noteDuration = 600 / 4; // 600ms por nota

void setup() {
  pinMode(12, OUTPUT); // Configura o pino 12 como saída
  for (int thisNote = 0; thisNote < sizeof(imperialMarch) / sizeof(imperialMarch[0]) / 2; thisNote = thisNote + 2) {
    int noteDuration = 1000 / imperialMarch[thisNote + 1];
    tone(12, imperialMarch[thisNote], noteDuration); // Alterado para o pino 12
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(12); // Alterado para o pino 12
  }
}

void loop() {
  // Nada no loop, apenas tocando a melodia uma vez.
}
