const int buzzer = 8;

void setup() {
 pinMode(buzzer, OUTPUT);
}

void loop() {
  tone(buzzer, 1000);
  
}
