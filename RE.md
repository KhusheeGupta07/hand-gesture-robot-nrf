

# Hand Gesture Controlled Robot (NRF24L01)

## 📌 Problem Statement
Traditional robot control methods like wired controllers or joysticks lesses their uses and their interaction with everyone.So, there is a need for wireless,easily handable and human friendly control robots, especially for learning robotics and human–machine interaction.

## 💡 Solution Overview
This project implements a *hand gesture controlled robot* using an accelerometer and NRF24L01 wireless modules.  Our hand movements are captured by the transmitter unit which is  placed at our hand and sent wirelessly to a receiver unit which is on the robot. The receiver interprets these gestures and controls four DC motors accordingly and enabling us smooth and responsive robot movement.

## 🧠 How It Works (High-Level)
At first,  Our Hand gestures are detected by using an accelerometer.Then,the transmitter Arduino Nano processes gesture data.Then,Commands are sent wirelessly using the NRF24L01 module from transmitter Arduino Nano to receiver Arduino  Nano.
Then,receiver Arduino  decodes the data.and give commands to  receiver Arduino.And by using a motor driver ,we control four motors based on received commands.


COMPONENTS WHICH ARE USED IN 
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

⚠️We have to make sure NRF24L01 is powered by 3.3V, not 5V to avoid any of the communication failure.


##🖼️**A Full setup Image**
[![Hand Controller Diagram]
(images/fullsetup.jpg.jpeg)](images/fullsetup.jpg.jpeg)


## ⚙️ Working Principle (Step-by-Step)
1. The accelerometer which is placed at The hand senses our movement,as hand  can tilt in all the different directions.
2. Arduino on our hand converts sensor values into movement commands.
3. Commands are transmitted wirelessly using NRF24L01.
4. Receiver Arduino decodes all the received data and take action on The received signalswith the help of motor driver and all the 4 motors .
5. Motor driver activates motors to move the robot forward, backward, left, or right.
   

## 🧾 Code Explanation (Logic Overview)

### Transmitter Code
- Reads accelerometer values.
- Maps our hand orientation to The direction commands.
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
3. Upload `gesture_receiver.ino` to the **receiver Arduino Nano**
4. connect all the components as shown in image,properly.
5. Make sure all connections should be proper to avoid any damage of any components and also to run our hand controller properly.
6. Power both circuits.
7. battery should be charged.
8. Tilt your hand to control the robot.
9. And ,finally ,you will see our hand controller is moving.
10. and hence,in this way, our project is successfull.

---

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
