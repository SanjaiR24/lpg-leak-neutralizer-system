const int mq2Pin = A0; // MQ-2 sensor analog output pin 
const int buzzerPin = 8; // Buzzer connected to digital pin 8 
const int vlavePin = 7; // Valve connected to digital pin 7 
const int fanPin = 9; // MOSFET gate pin for exhaust fan on digital pin  
int threshold = 250; // Gas detection threshold (adjust as needed) 
void setup() { 
pinMode(mq2Pin, INPUT); 
pinMode(buzzerPin, OUTPUT); 
pinMode(valvePin, OUTPUT); 
pinMode(fanPin, OUTPUT); 
Serial.begin(9600); 
delay(2000); // Allow sensor warm-up 
} 
void loop() { 
int sensorValue = analogRead(mq2Pin); 
Serial.print("MQ2 Gas Level: "); 
Serial.println(sensorValue); 
if (sensorValue > threshold) { 
digitalWrite(buzzerPin, HIGH); // Turn on buzzer 
digitalWrite(valvePin, HIGH); // Turn on Valve 
digitalWrite(fanPin, HIGH); // Turn on exhaust fan via MOSFET 
} else { 
digitalWrite(buzzerPin, LOW); // Turn off buzzer 
digitalWrite(valvePin, LOW); // Turn off Valve 
digitalWrite(fanPin, LOW); // Turn off fan 
} 
delay(100); 
}
