void setup() {
  Serial.begin(9600);
}

void loop() {

  int ClutchValueLeft = analogRead(A0);
  Serial.print("Left Value: ");
  Serial.println(ClutchValueLeft);
  delay(1000);

  int ClutchValueRight = analogRead(A1);
  Serial.print("Right Value: ");
  Serial.println(ClutchValueRight);
  delay(1000);
}
