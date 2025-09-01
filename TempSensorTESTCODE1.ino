//Basic code to test if the temperature/humidity sensor works properly

//Use Adafruit DHT Sensor Library
#include "DHT.h"


//Ardunio pin connected to DHT-11's data pin
#define DHTPIN 2


//Type of DHT Sesor
#define DHTTYPE DHT11


//Initialize Sensor Library
DHT dht(DHTPIN, DHTTYPE);


void setup() {
  //Serial Monitor Window to display


  Serial.begin(9600);
  Serial.println("Humidity and Temperature");


  //Start the sensor
  dht.begin();

}


void loop() {
   //Wait between measurements
   delay(2000);


   //Read Humidity
   float h = dht.readHumidity();


   //Read temperature as Celsius
   float t = dht.readTemperature();


   //Send data to serial monitor
   Serial.print("Humidity: ");
   Serial.print(h);
   Serial.print("% Temperature: ");
   Serial.print(t);
   Serial.println("°C");
   
}

