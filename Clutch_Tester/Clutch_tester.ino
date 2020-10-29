void setup() {
  Serial.begin(9600);
}

void loop() {

  int ClutchValue = analogRead(A2);

  Serial.print("Value: ");
  Serial.println(ClutchValue);
  delay(300);
}
