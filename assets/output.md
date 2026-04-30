<img width="1431" height="816" alt="Screenshot 2026-05-01 000157" src="https://github.com/user-attachments/assets/f427debb-0d50-46f4-8bdc-5c2de5bab38e" /># 📊 Output

> This section demonstrates the working of the system and validates its real-time temperature monitoring capability.

---

## 🟡 Initial State (Normal Temperature)

 <img width="1295" height="708" alt="Screenshot 2026-04-30 235910" src="https://github.com/user-attachments/assets/ac729a31-323e-4bd6-8fb2-7ae03be96502" />


In the initial state, the system displays the ambient temperature of the environment.

- Temperature observed: **34°C / 94°F**
- System is stable and running normally  
- No external influence applied  

This confirms that the sensor is correctly reading and transmitting environmental temperature data.

---

## 🔥 Heat Test (Real-Time Response)

<img width="639" height="376" alt="Screenshot 2026-05-01 000112" src="https://github.com/user-attachments/assets/c9400e2a-34d5-46c5-a1a8-eab65e053c99" />
<img width="731" height="395" alt="Screenshot 2026-05-01 000124" src="https://github.com/user-attachments/assets/7ede5113-6f85-4fb3-b27f-d8be6c48a1a6" />

To test the responsiveness of the system, heat was applied manually to the DHT11 sensor.

- Temperature increases due to external heat  
- Sensor detects the change immediately  
- Data is transmitted to the dashboard in real-time  

This experiment demonstrates that the system reacts dynamically to changes in temperature.

---

## 🟢 Updated Output (After Heating)

 <img width="1431" height="816" alt="Screenshot 2026-05-01 000157" src="https://github.com/user-attachments/assets/f1366dc8-4060-46ac-a8d0-e1a7da1cdfb3" />

After applying heat, the updated temperature is displayed on the dashboard:

- Temperature observed: **42°C / 100°F**
- Values updated successfully on Blynk  
- Continuous real-time monitoring achieved  

This confirms successful communication between:
- Sensor → ESP8266 → Blynk Cloud → Dashboard  

---

## 🔄 Output Behavior

- Data updates every ~2 seconds  
- Real-time changes are reflected instantly  
- System remains stable during operation  

---

## 🎥 Demo Video

- A live demonstration of the system in operation:

https://youtu.be/_1tXXjvHVhw

---

## 🧠 Result Analysis

The system successfully demonstrates:

- Accurate temperature sensing  
- Real-time data transmission  
- Effective cloud-based visualization  

The increase in temperature during the heat test validates the system's responsiveness and reliability.

---

## 🎯 Conclusion

The output verifies that the system is fully functional and capable of monitoring temperature changes in real-time using IoT technology.
