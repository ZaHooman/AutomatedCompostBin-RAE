// Use Adafruit DHT Sensor Library
#include "DHT.h"

// Arduino pin connected to DHT-11's data pin
#define DHTPIN 2

// Type of DHT Sensor
#define DHTTYPE DHT11

// Initialize Sensor Library
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Serial Monitor/Plotter
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // Wait between measurements
  delay(2000);

  // Read Humidity
  float h = dht.readHumidity();

  // Read temperature as Celsius
  float t = dht.readTemperature();

  // Print values in a format compatible with Serial Plotter
  // (Humidity and Temperature separated by a tab or space)
  Serial.print(h);
  Serial.print(" ");
  Serial.println(t);
}
