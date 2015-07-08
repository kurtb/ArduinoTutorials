void setup() {
  // Setup the output pins
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  // And then the input pin
  pinMode(2, INPUT);
}

void loop() {
  int switchState = digitalRead(2);

  if (switchState == LOW) {
    // Switch is off - set the red light on and the others off
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  else {
    // Switch is high - turn off the red light - alternate the others flashing
    digitalWrite(3, LOW);

    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(50);

    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(50);
  }
}
