void setup() {
  Serial.begin(9600);
}

void loop() {
  show_analog_value();
}

void show_analog_value() {
  for (short int i = 6; i >=0 ; i--) Serial.print(String(analogRead(i)) + " ");
  Serial.println();
}