# 🌡️ DHT11 Temperature Monitoring using ESP8266 & Blynk

## 📌 Overview
This project demonstrates how to interface a **DHT11 temperature sensor** with an **ESP8266 NodeMCU** to measure real-time temperature and display it on the **Blynk IoT platform**.

It was developed as a mini project for the subject **EC-681 (Electronics and Communication Engineering)**.

---

## 🎯 Objectives
- Interface DHT11 sensor with ESP8266 NodeMCU
- Measure temperature in real-time
- Display temperature data on the Blynk mobile app

---

## 🧠 Working Principle
The DHT11 sensor reads temperature data and sends it to the ESP8266.  
The ESP8266 processes the data and transmits it over Wi-Fi to the Blynk app, where it is displayed using virtual pins.

---

## 🧰 Components Used
- ESP8266 NodeMCU
- DHT11 Sensor Module
- Breadboard
- Jumper Wires
- USB Cable
- Arduino IDE
- Blynk App

---

## ⚙️ Software & Tools
- Arduino IDE
- Blynk IoT Platform
- Libraries:
  - DHT Sensor Library
  - Adafruit Unified Sensor Library
  - Blynk Library

---

## 🔌 Circuit Diagram
![Circuit Diagram](assets/circuit.png)

> Add your circuit image inside a folder named `assets`

---

## 💻 Code
```cpp
// Add your Arduino code here (or keep in a separate file like main.ino)
