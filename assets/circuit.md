# 🔌 Circuit Diagram

> This section explains how the hardware components are interconnected and how data flows through the system.

---

## 📷 Circuit Representation

<img width="400" height="197" alt="image" src="https://github.com/user-attachments/assets/231b5a9a-237b-4c13-8ff5-c19f0b8a9678" />

---

## 🔗 Connections

The DHT11 sensor is connected to the ESP8266 NodeMCU as follows:

- **VCC → 3.3V (ESP8266)**  
- **GND → GND (ESP8266)**  
- **DATA → GPIO5 (D1 pin)**  

---

## ⚙️ Connection Explanation

- The **VCC pin** provides power to the DHT11 sensor from the ESP8266.  
- The **GND pin** completes the electrical circuit.  
- The **DATA pin** is used to transmit temperature data from the sensor to the ESP8266.  

GPIO5 (D1) is used as the data pin because it supports stable digital input and is commonly used for sensor interfacing in ESP8266-based projects.

---

## 🔄 Data Flow

1. The DHT11 sensor measures the ambient temperature.  
2. The sensor sends digital signals through the DATA pin.  
3. The ESP8266 receives this data via GPIO5.  
4. The microcontroller processes the data and prepares it for transmission.  

---

## 🧠 System Insight

This circuit forms the core hardware layer of the system, where:

- The **sensor acts as input**  
- The **ESP8266 acts as processor and communicator**  

The simplicity of the circuit makes the system easy to build while still enabling real-time IoT functionality.

---

## ⚠️ Notes

- Ensure correct wiring to avoid damage to components  
- Use stable power supply (3.3V for ESP8266)  
- Loose connections may result in incorrect sensor readings  
