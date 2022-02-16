int buzzerPin = 8;

void setup() {
pinMode(buzzerPin, OUTPUT);
}

void loop() {
    play(392, 500);
    delay(125);
    play(392, 500);
    delay(125);
    play(392, 500);
    delay(125);
    play(311, 1500);
    delay(500);
    play(349, 500);
    delay(125);
    play(349, 500);
    delay(125);
    play(349, 500);
    delay(125);
    play(293, 1500);
    delay(500);
    delay(5000);
}

void play(int frequency, int duration) {
  tone(buzzerPin,frequency, duration);
  delay(duration);
}
