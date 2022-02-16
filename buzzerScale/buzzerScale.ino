int buzzerPin = 8;

void setup() {
pinMode(buzzerPin, OUTPUT);
}

void loop() {
    play(440, 250);
    play(493, 250);
    play(880, 500);
    play(587, 250 );
    play(659, 250);
    play(739, 250);
    play(830, 250);
    play(880, 250);
    delay(5000);
}

void play(int frequency, int duration) {
  tone(buzzerPin,frequency, duration);
  delay(duration);
}
