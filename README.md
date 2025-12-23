

# Hand Gesture Controlled Robot (NRF24L01)

This project demonstrates a **hand gesture controlled robot** using an **ADXL345 accelerometer** and **NRF24L01 wireless modules**.  
Hand movements are captured using the accelerometer and transmitted wirelessly to control the robot’s movement— no buttons, just intuitive hand gestures.

---

## 🔧 Components Used
- Arduino Nano × 2  
- ADXL345 Accelerometer  
- NRF24L01 Transceiver Modules × 2  
- Motor Driver (L298N / L293D)  
- DC Motors  
- Jumper Wires  
- Power Supply / Battery  

--- 
🔌**Circuit Connections**
Transmitter Side (Hand Controller)

+3.3V -----------------+
                        |
GND -------------------+
                        |
ADXL345 SDA ----------- A4 (Arduino)
ADXL345 SCL ----------- A5 (Arduino)
ADXL345 VCC ----------- 3.3V
ADXL345 GND ----------- GND

NRF24L01 CE ----------- D9
NRF24L01 CSN ---------- D10
NRF24L01 SCK ---------- D13
NRF24L01 MOSI --------- D11
NRF24L01 MISO --------- D12
NRF24L01 VCC ---------- 3.3V
NRF24L01 GND ---------- GND
## Hand Controller – Wireless Diagram

![Hand Controller Diagram]
(transmitter.jpg)

**Receiver Side (Robot)**
NRF24L01 CE ----------- D9
NRF24L01 CSN ---------- D10
NRF24L01 SCK ---------- D13
NRF24L01 MOSI --------- D11
NRF24L01 MISO --------- D12
NRF24L01 VCC ---------- 3.3V
NRF24L01 GND ---------- GND

Motor Driver IN1 ------- D2
Motor Driver IN2 ------- D3
Motor Driver IN3 ------- D4
Motor Driver IN4 ------- D5
Motor Driver ENA ------- D6
Motor Driver ENB ------- D7
Motor Driver VCC ------- 5V
Motor Driver GND ------- GND

DC Motors -------------- Motor Driver Output

⚠️ Make sure NRF24L01 is powered by 3.3V, not 5V.

## 🧠 Working Principle
1. The **transmitter Arduino** reads X and Y values from the ADXL345 sensor.
2. These values are sent wirelessly using the **NRF24L01** module.
3. The **receiver Arduino** receives the data.
4. Based on hand tilt direction, the robot moves:
   - Forward
   - Backward
   - Left
   - Right
   - Stop

---

## 📂 Project Files
- `gesture_transmitter.ino` → Transmitter code (hand side)
- `gesture_receiver.ino` → Receiver code (robot side)

---

## 📡 Communication
- Wireless communication using **NRF24L01 (2.4GHz)**
- Data transmitted: X and Y acceleration values

---

## 🚀 How to Run
1. Upload `gesture_transmitter.ino` to the **transmitter Arduino Nano**
2. Upload `gesture_receiver.ino` to the **receiver Arduino Nano**
3. Power both circuits
4. Tilt your hand to control the robot

---

## 🧑‍💻 Author
Khushi Gupta

---
📜 License

This project is open-source and free to use for learning purposes.
