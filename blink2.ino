void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
digitalWrite(2, HIGH);
delay(1000);
digitalWrite(2, LOW);
delay(1000);
digitalWrite(4, HIGH);
delay(1000);
digitalWrite(4, LOW);
delay(1000);
}
