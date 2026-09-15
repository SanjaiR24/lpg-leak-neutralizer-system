const int mq2Pin = A0;
const int buzzerPin = 8;
const int valvePin = 7;
const int fanPin = 9;
int threshold = 250;  // Adjust based on calibration

void loop() {
  int sensorValue = analogRead(mq2Pin);
  if (sensorValue > threshold) {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(valvePin, HIGH);
    digitalWrite(fanPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(valvePin, LOW);
    digitalWrite(fanPin, LOW);
  }
  delay(100);
}
