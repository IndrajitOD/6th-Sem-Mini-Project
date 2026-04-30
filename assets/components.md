# 🔩 Hardware Components

> This section describes the hardware components used in the system and their role in the overall implementation.

---

## ESP8266 NodeMCU
 <img width="500" height="437" alt="image" src="https://github.com/user-attachments/assets/e6f88da8-ca67-4c75-a211-f6db8bbb7d43" />

The ESP8266 NodeMCU is the main controller of the system. It is a low-cost microcontroller with built-in Wi-Fi capability, which allows it to connect directly to the internet without requiring additional modules.

In this project, the ESP8266 performs multiple critical functions:

- **Data Acquisition:** It reads temperature data from the DHT11 sensor through a digital GPIO pin.
- **Data Processing:** It converts the raw sensor data into meaningful temperature values (Celsius and Fahrenheit).
- **Communication:** It transmits the processed data to the Blynk cloud server using Wi-Fi.
- **Control Logic:** It manages the timing of data updates (every 2 seconds).

The ESP8266 acts as the **brain of the system**, coordinating sensing, processing, and communication.

---

## DHT11 Temperature Sensor
 <img width="860" height="860" alt="image" src="https://github.com/user-attachments/assets/4adc773d-9d57-4928-8dd7-c12f48b78b40" />

The DHT11 is a digital temperature sensor used to measure ambient temperature. It contains an internal thermistor and signal processing circuitry that converts temperature readings into a digital signal.

Key characteristics of the DHT11:

- Measures temperature in degrees Celsius
- Provides calibrated digital output
- Requires precise timing for data reading
- Suitable for basic environmental monitoring

In this project, the DHT11:

- Continuously senses the surrounding temperature  
- Sends digital data to the ESP8266 via a single data pin  
- Acts as the **input unit** of the system  

Although it is a basic sensor, it is sufficient for demonstrating real-time IoT monitoring.

---

## 🧩 Breadboard

<img width="300" height="300" alt="image" src="https://github.com/user-attachments/assets/67107186-9777-4aeb-8d31-88e6bde152f4" />

The breadboard is used to assemble the circuit without soldering. It allows easy placement and connection of components using jumper wires.

In this project, the breadboard:

- Provides a platform to connect ESP8266 and DHT11  
- Helps organize wiring in a structured manner  
- Allows quick modifications and testing  

---

## 🔗 Jumper Wires

<img width="535" height="535" alt="image" src="https://github.com/user-attachments/assets/eefe0fcf-ff43-4dcd-bfb7-00fd648b320b" />

Jumper wires are used to establish electrical connections between components on the breadboard.

Their role in the system includes:

- Connecting the DHT11 sensor to the ESP8266  
- Ensuring proper signal and power flow  
- Enabling flexible circuit design  

---

## 🔋 USB Cable

<img width="403" height="416" alt="image" src="https://github.com/user-attachments/assets/5b53a517-5ffd-4935-8525-d854b8f36ed6" />

The USB cable is used to power the ESP8266 and upload the program from the computer.

It serves two purposes:

- Provides power supply to the microcontroller  
- Enables communication between the computer and ESP8266 for code upload  

---

## Complete Setup
<img width="998" height="769" alt="image" src="https://github.com/user-attachments/assets/ea492248-d190-4c11-9814-9be5c8516c61" />

The components are connected using a breadboard and jumper wires to form the complete circuit.

---

## 🧠 Summary

All components work together to form a complete IoT system:

- **DHT11 →** senses temperature  
- **ESP8266 →** processes and transmits data  
- **Breadboard & wires →** provide physical connections  
- **USB →** powers the system  

This combination creates a simple yet effective real-time temperature monitoring solution.
