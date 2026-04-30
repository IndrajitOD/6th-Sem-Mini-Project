# ⚙️ Setup Guide

This guide explains how to set up and run the IoT Temperature Monitoring System using ESP8266 and DHT11.

---

## 🔧 Prerequisites

Before starting, make sure you have:

- ESP8266 NodeMCU
- DHT11 Sensor
- Breadboard & Jumper Wires
- USB Cable
- Computer with Arduino IDE installed
- Blynk IoT App (Android/iOS)

---

## 🖥️ Software Setup

### 1. Install Arduino IDE
Download and install Arduino IDE from:
https://www.arduino.cc/en/software

---

### 2. Install ESP8266 Board

- Open Arduino IDE  
- Go to:  
  **File → Preferences**  
- Add this URL in “Additional Board Manager URLs”: http://arduino.esp8266.com/stable/package_esp8266com_index.json

- Then go to:  
  **Tools → Board → Boards Manager**  
- Search: **ESP8266**  
- Install it  

---

### 3. Install Required Libraries

Go to:
**Sketch → Include Library → Manage Libraries**

Install:
- DHT Sensor Library  
- Adafruit Unified Sensor  
- Blynk  

---

## 🔌 Hardware Connections

| DHT11 Pin | ESP8266 Connection |
|----------|------------------|
| VCC      | 3.3V             |
| GND      | GND              |
| DATA     | D1 (GPIO5)       |

---

## 📱 Blynk Setup

1. Open Blynk App  
2. Create a new project  
3. Select:
   - Device → ESP8266  
   - Connection → Wi-Fi  

4. Get the **Auth Token**

5. Add Widgets:
   - Gauge → V0 (Celsius)
   - Display → V1 (Fahrenheit)

---

## 💻 Code Configuration

Open the file: code/dht11_esp8266.ino

Update these values:

```cpp
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";
char auth[] = "YOUR_BLYNK_AUTH_TOKEN";
```
---

## 🚀 Upload & Run

1. Connect ESP8266 via USB
2. Select Board : Tools → Board → NodeMCU 1.0 (ESP-12E Module)
3. Select correct COM Port
4. Click Upload

---

## 📊 Verify Output
Open Serial Monitor (9600 baud)
Check temperature values
Open Blynk app → verify live updates

---

## ⚠️ Notes
- Ensure Wi-Fi credentials are correct
- Keep sensor properly connected
- If no data appears, restart the ESP8266

---

## 🎯 Result

Once everything is set up, the system will:

- Continuously measure temperature
- Send data over Wi-Fi
- Display it on the Blynk dashboard in real-time

---
