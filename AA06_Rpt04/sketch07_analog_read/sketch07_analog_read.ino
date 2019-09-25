void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue=analogRead(A0);
  Serial.print("AA06.Present V(0~5.0): ");
  float voltage=sensorValue*(5.0/1023.0);
  Serial.println(voltage);
  delay(500);
}
