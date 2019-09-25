void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.print("AA06,Present value(0~1023):");
  Serial.println(sensorValue);
  delay(500);
}
