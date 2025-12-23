

Hand Gesture Controlled Robot (NRF24L01)

This project demonstrates a hand gesture controlled robot using an ADXL345 accelerometer and NRF24L01 wireless modules.
Hand movements are captured using the accelerometer and transmitted wirelessly to control the robot’s movement — no buttons, just intuitive hand gestures.


---

🔧 Components Used

2 × Arduino Nano (transmitter & receiver)

ADXL345 Accelerometer Module

2 × NRF24L01 Transceiver Modules

Motor Driver (L298N / L293D)

DC Motors & Chassis

Jumper Wires & Breadboard

Battery / Power Supply



---

🔌 Circuit Connections

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

Receiver Side (Robot)

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

> ⚠️ Make sure NRF24L01 is powered by 3.3V, not 5V.




---

🧠 How It Works

1. The transmitter Arduino reads X and Y values from the ADXL345 accelerometer.


2. These values are sent wirelessly using the NRF24L01 module.


3. The receiver Arduino receives the data and interprets the gestures.


4. Based on hand tilt, the robot moves:

Forward

Backward

Left

Right

Stop




> Optional: tilt further to increase movement speed or precision.




---

📂 Project Files

gesture_transmitter.ino → Transmitter code (hand side)

gesture_receiver.ino → Receiver code (robot side)



---

📡 Communication

Wireless communication using NRF24L01 (2.4GHz)

Data transmitted: X and Y acceleration values



---

📷 Images / Demo

Transmitter Module


Hand controller with ADXL345 accelerometer + NRF24L01 module.

Receiver Module


Receiver side: Arduino + NRF24L01 + Motor Driver controlling robot motors.

Full Setup


Complete hand gesture robot setup in action.

Demo GIF


Robot responding to hand gestures: forward, backward, left, right.

> Or link a video if you prefer:
Watch it on YouTube




---

🚀 How to Run

1. Upload gesture_transmitter.ino to the transmitter Arduino Nano


2. Upload gesture_receiver.ino to the receiver Arduino Nano


3. Power both circuits


4. Tilt your hand to control the robot



> ✅ Make sure both circuits are powered properly and within wireless range (~10–20m).




---

🧑‍💻 Author

Khushi Gupta


---

📜 License

This project is open-source and free to use for learning purposes.

