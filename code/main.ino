/*************************************************
 * Project: DHT11 Temperature Monitoring (ESP8266)
 * Description: Reads temperature using DHT11 and
 *              sends data to Blynk IoT dashboard.
 *************************************************/

// -------------------- Libraries --------------------
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

// -------------------- Credentials --------------------
// ⚠️ DO NOT hardcode credentials here
// Replace these before running locally

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";
char auth[] = "YOUR_BLYNK_AUTH_TOKEN";

// -------------------- DHT Setup --------------------
#define DHTPIN 5        // GPIO5 (D1)
#define DHTTYPE DHT11   // DHT11 sensor

DHT dht(DHTPIN, DHTTYPE);

// -------------------- Timer --------------------
BlynkTimer timer;

// -------------------- Function --------------------
void sendSensor() {
  float tempC = dht.readTemperature();        // Celsius
  float tempF = dht.readTemperature(true);    // Fahrenheit

  if (isnan(tempC) || isnan(tempF)) {
    Serial.println("Error: Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Temp (C): ");
  Serial.print(tempC);
  Serial.print(" | Temp (F): ");
  Serial.println(tempF);

  // Send data to Blynk
  Blynk.virtualWrite(V0, tempC);
  Blynk.virtualWrite(V1, tempF);
}

// -------------------- Setup --------------------
void setup() {
  Serial.begin(9600);

  dht.begin();

  // Connect to Blynk
  Blynk.begin(auth, ssid, pass);

  // Call sendSensor every 2 seconds
  timer.setInterval(2000L, sendSensor);
}

// -------------------- Loop --------------------
void loop() {
  Blynk.run();
  timer.run();
}
