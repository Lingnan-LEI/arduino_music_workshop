int buzzerPin = 8;
int frequencyPin = A0;
int switchPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(frequencyPin, INPUT);
  pinMode(switchPin, INPUT_PULLUP);
    
}

void loop() {
  int switchStatus = digitalRead(switchPin);
  Serial.println(switchStatus);
  int freq = analogRead(frequencyPin);
  if (switchStatus == HIGH) {
  int note = map(freq, 0, 1024, 2000, 100);
    tone(buzzerPin, note);
  }
    else {noTone(buzzerPin);
    }
    
    delay(10);
}
