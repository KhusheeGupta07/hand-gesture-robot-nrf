

# Hand Gesture Controlled Robot (NRF24L01)

## 📌 Problem Statement
Traditional robot control methods like wired controllers or joysticks limit mobility and user interaction. There is a need for a more intuitive, wireless, and human-friendly way to control robots, especially for learning robotics and human–machine interaction.

## 💡 Solution Overview
This project implements a *hand gesture controlled robot* using an accelerometer and NRF24L01 wireless modules. Hand movements are captured by a transmitter unit and sent wirelessly to a receiver unit mounted on the robot. The receiver interprets these gestures and controls four DC motors accordingly, enabling smooth and responsive robot movement.

## 🧠 How It Works (High-Level)
1. Hand gestures are detected using an accelerometer.
2. The transmitter Arduino processes gesture data.
3. Commands are sent wirelessly using the NRF24L01 module.
4. The receiver Arduino decodes the data.
5. A motor driver controls four motors based on received commands.


## 🔧 Components Used
- Arduino Nano × 2  
- ADXL345 Accelerometer  
- NRF24L01 Transceiver Modules × 2  
- Motor Driver (L298N / L293D)  
- DC Motors  
- Jumper Wires  
- Power Supply / Battery  

--- 
🔌**Circuit & Pin Connections**


**Transmitter Side (Hand Controller)
**
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


[![Hand Controller Diagram]
(images/transmitter.jpg.jpeg)](images/transmitter.jpg.jpeg)

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

[![Hand Controller Diagram]
(images/receiver.jpg.jpeg)](images/receiver.jpg.jpeg)


DC Motors -------------- Motor Driver Output

⚠️ Make sure NRF24L01 is powered by 3.3V, not 5V to avoid communication failure.


##🖼️**A Full setup Image**
[![Hand Controller Diagram]
(images/fullsetup.jpg.jpeg)](images/fullsetup.jpg.jpeg)


## ⚙️ Working Principle (Step-by-Step)
1. The accelerometer senses hand tilt in different directions.
2. Arduino converts sensor values into movement commands.
3. Commands are transmitted wirelessly using NRF24L01.
4. Receiver Arduino decodes the received data.
5. Motor driver activates motors to move the robot forward, backward, left, or right.
   

## 🧾 Code Explanation (Logic Overview)

### Transmitter Code
- Reads accelerometer values.
- Maps hand orientation to direction commands.
- Sends commands wirelessly using NRF24L01.

### Receiver Code
- Listens for incoming data.
- Matches received commands with predefined movements.
- Controls motor driver pins accordingly.


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
##📼 Demo Video
https://drive.google.com/file/d/1mA8qm6-gGhSdO4f_AgpAZSGoHc9GC58T/view?usp=drive_link

## 🚀 Future Improvements
- Add obstacle avoidance
- Improve gesture accuracy
- Integrate camera module
- Use rechargeable Li-ion battery

## 🧑‍💻 Author
Khushi Gupta

---
📜 License

This project is open-source and free to use for learning purposes.

## 🙌 Acknowledgements
Inspired by learning projects in robotics, wireless communication, and Hack Club initiatives.
