void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(PF_0, INPUT_PULLUP);
  pinMode(PF_4, INPUT_PULLUP);
}
int push(int btn) {
  if (digitalRead(btn)==0) {
    return 1;
  }
  return 0;
}
void loop() {
  if (push(PF_0)) {
    digitalWrite(RED_LED, HIGH);
  }
  if (push(PF_4)) {
    digitalWrite(RED_LED, LOW);
  }
}
