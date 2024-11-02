#include <DHT.h>

#define DHTPIN 4          // Define the GPIO connected to the DHT11 data pin
#define DHTTYPE DHT11     // Define DHT11 sensor type

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();           // Initialize DHT sensor
}

void loop() {
  delay(2000);           // Wait a few seconds between measurements
  
  // Reading temperature and humidity values
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  
  // Check if any reads failed and exit early
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  
  // Print readings to Serial Monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
}
