void setup() {
  pinMode(PA_5, OUTPUT);
  pinMode(PA_4, INPUT);
}
void loop() {
  if (digitalRead(PA_4)==HIGH) {
    digitalWrite(PA_5, LOW);
  }
  else {
    digitalWrite(PA_5, HIGH);
  }
}
