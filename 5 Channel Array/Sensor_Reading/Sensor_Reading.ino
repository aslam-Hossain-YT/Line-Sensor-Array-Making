void setup() {
  Serial.begin(9600);
}

void loop() {
  for (short int i = 4; i >= 0 ; i--) Serial.print(String(analogRead(i)) + " ");
  delay(100);
  Serial.println();
}