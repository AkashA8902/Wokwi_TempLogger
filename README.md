# 🌡️ UART Temperature Logger (Wokwi Simulation)

A simple **Embedded Firmware Simulation** that reads temperature and humidity data from a **DHT22 sensor** and transmits it via **UART** (Serial Monitor).  
The system also drives an LED to visually indicate temperature level — brighter when hotter.

---

## 🧠 Project Overview
- **Objective:** Demonstrate UART communication and sensor interfacing using Embedded C.  
- **Platform:** Arduino Uno (simulated on Wokwi)  
- **Sensor:** DHT22 (Temperature + Humidity)  
- **Output:** Serial Monitor (UART @115200 baud)  
- **Actuator:** LED (brightness proportional to temperature)

---

## ⚙️ Features
✅ Reads real-time temperature and humidity values  
✅ Transmits readings via UART (Serial Monitor)  
✅ LED brightness increases as temperature rises  
✅ Fully simulated on **Wokwi** (no hardware required)

---

## 🧰 Tech Stack
- Embedded C / Arduino
- UART Serial Communication
- DHT22 Sensor Interfacing
- PWM-based LED brightness control
- Wokwi Online Simulator

---

## 📸 Simulation Snapshots
### Wiring Diagram
![wiring_diagram](wiring_diagram.png)

### Serial Output
![screenshot](screenshot.png)

---

## 🚀 How It Works
1. The DHT22 sensor provides temperature and humidity values.  
2. The firmware reads these values every 2 seconds using the Adafruit DHT library.  
3. The temperature is mapped from 20 °C → 0 brightness to 40 °C → full brightness (PWM LED).  
4. The readings are transmitted over UART and displayed on the Serial Monitor.  

---

## 🔧 How to Run (Wokwi)
1. Open [https://wokwi.com/](https://wokwi.com/) → **New Project → Arduino Uno**  
2. Add:
   - DHT22 sensor  
   - LED + 220 Ω resistor  
3. Connect:
   - DHT22 VCC → 5 V  
   - DHT22 GND → GND  
   - DHT22 Data → D3  
   - LED anode → D9, cathode → resistor → GND  
4. Copy–paste the code from `main.ino`  
5. Add the libraries:
   - “DHT sensor library”  
   - “Adafruit Unified Sensor”  
6. Start simulation ▶️  
7. Open Serial Monitor @ 115200 baud to see live temperature and humidity logs.

