# Hand Gesture Controlled Robot (NRF24L01)

This project demonstrates a **hand gesture controlled robot** using an **ADXL345 accelerometer** and **NRF24L01 wireless modules**.  
Hand movements are captured using the accelerometer and transmitted wirelessly to control the robot’s movement.

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

## 📜 License
This project is open-source and free to use for learning purposes.
