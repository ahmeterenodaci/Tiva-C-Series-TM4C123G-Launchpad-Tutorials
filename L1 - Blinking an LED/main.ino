void turnOn(int led) {
  int i;
  for (i=0; i<=255; i+=5) {
    analogWrite(led, i);
    delay(10);
  }
}
void turnOff(int led) {
  int i;
  for (i=255; i>=0; i-=5) {
    analogWrite(led, i);
    delay(10);
  }
}
void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  turnOn(RED_LED);
  turnOff(RED_LED);
}
void loop() {
  turnOn(RED_LED);
  turnOn(GREEN_LED);
  turnOn(BLUE_LED);

  turnOff(RED_LED);
  turnOff(GREEN_LED);
  turnOff(BLUE_LED);
}
