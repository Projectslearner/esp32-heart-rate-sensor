/*
    Project name : ESP32 Heart Rate Sensor
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-heart-rate-sensor
*/

// Pin connected to the analog output of the heart rate sensor
const int analogInPin = 36; // GPIO pin 36 on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(analogInPin); // Read the analog sensor value
  
  // Map the sensor value to heart rate (adjust this based on sensor specifics)
  int heartRate = map(sensorValue, 0, 1023, 60, 200); // Assuming sensor output range is 0-1023

  // Print heart rate to Serial Monitor
  Serial.print("Heart Rate: ");
  Serial.print(heartRate);
  Serial.println(" bpm");

  delay(1000); // Delay before next reading
}
