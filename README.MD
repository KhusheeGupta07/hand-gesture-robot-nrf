## HAND GESTURE CONTROLLED BOT

## **PROBLEM STATEMENT OF THIS PROJECT**
Traditional robot control methods like wired controllers or joysticks lesses their uses and their interaction with everyone.So, there is a need for wireless,easily handable and human friendly control robots, especially for learning robotics and human–machine interaction.

##**SOLUTION ,WHICH HELPS US.**

This project implements a *hand gesture controlled robot* using an accelerometer and NRF24L01 wireless modules.  Our hand movements are captured by the transmitter unit which is  placed at our hand and sent wirelessly to a receiver unit which is on the robot. The receiver interprets these gestures and controls four DC motors accordingly and enabling us smooth and responsive robot movement.

##**HOW THIS WORKS(IN SHORT FORM)**

At first,  Our Hand gestures are detected by using an accelerometer.Then,the transmitter Arduino Nano processes gesture data.Then,Commands are sent wirelessly using the NRF24L01 module from transmitter Arduino Nano to receiver Arduino  Nano.
Then,receiver Arduino  decodes the data.and give commands to  receiver Arduino.And by using a motor driver ,we control four motors based on received commands.


##** COMPONENTS WHICH ARE USED IN MAKING THIS PROJECT ARE LISTED AS SHOWN BELOW:**
1.ARDUIno NANO(2)
2. ADXL345 Accelorometer (1)
3. nrf24L01 transeiver module (2)
4. motor DRIVER (1)
5. DC Motors (4)
6. jumping wires( as per need)
7. BATTERY 12 volt (1)
8. Batteryb  9 volt (1)
9. Tires (4)
10.Skeleton board for making a car bot(1)
11. breadbord (2)

## CIRCUIT AND PIN CONNECTIONS


[TRANSMITTER SIDE {hand controller}  ]
+3.3V------+
GND------+
ADXL345 SDA-----A4(ARDUINO)
ADXL 345 SCL-----A5(ARDUINO)
ADXL 345 VCC----3.3V
ADXL 345 GND---GND

NRF24L01 SCK----D13
NRF24L01  CE---D9
NRF24L01 CSN---D10
NRF24L01 MOSI-----D11
NRF24L01  MISO----D12
NRF24L01 VCC----3.3V
NRF24L01 GND---GND


[RECEIVER SIDE { ON THE ROBOT}  ]
NRF24L01 CE---D9
NRF24L01 CSN---D10
NRF24L01 SCK---D13
NRF24L01 MOSI---D11
NRF24L01 MISO---D12
NRF24L01 VCC---3.3V
NRF24L01 GND---GND

DC MOTORS ------MOTOR DRIVE AS AN OUTPUT...


**CAUTION!!!!!**
WE have to make sure that NRF24L01 is powered by the 3.3v ,,not by the 5V ,,to avoid any damage to any electronic items ,which are used or any communication failure in making the project.

## **WORKING PRINCIPAL**


1. AT FIRST ,, AS WE  SHOULD MAKE ALL THE CONNECTIONS PROPERLY AND CONNET THE BATTERY TO THE WIRES TO MAKE THE CCIRCUIT COMPLETE .
2. THEN,AFTER CONNECTING ALL THE CIRCUITS PROPERLY,,THE ACCELEROMETER ,,WHICH IS PLACED ON OUR HAND ,SENSES OUR MOVEMENT , AS OUR HAND CAN TILT IN ALL THE DIRECTIONS ,, THE SENSOR DETECTS THE MOVEMENT OF OUR HAND IN ALL THE DIRECTIONS AS OUR HAND MOVES.
3.ARDUINO NANO,WHICH IS PLACED ON OUR HAND WITH SIDE OF ADXL, CONVERTS SENSOR VALUES ALL  MOVEMENT COMMANDS INTO THE NUMERICAL VALUES. 

4. ALL THE COMMANDS ARE TRANSMITTED WIRELESSLY USING NRF24L01.
5. RECEIVER ARDINO NANO DECODES ALL THA RECEIVED DATA COMMANDS AND TAKE ACTION ON THE RECEIVED SIGNAL WIDTH THE HELP OF MOTOR DRIVER AND ALL THE 4 MOTORS.

6.THEN, OUR MOTOR DRIVER ACTIVATES ALL THE 4 MOTORS TO MOVE THE ROBOT IN FORWARD,BACKWARD,LEFT OR RIGHT DIRECTIONS AS PER THE RECEIVED COMMANDS BY THE  RECEIVER ARDUINO NANO.

7.IN THIS WAY ,, FINALLY ,, OUR HAND GESTURE ROBOT IS READY TO  WORK.


##**CODE EXPLANATION **

[TRANSMITTER SIDE]
IT READS THE ADXL VALUES.
THEN, SENSES,DETECT AND CALCULATE OUR HAND OREINTATION VALUES TO THE DIRCECTION  COMMANDS.
THEN, ALL THE COMMANDS ARE SENT BY THE USE OF NRF24L01 WIRELESSELY.


[RECEIVER  SIDE]

IT READS ALL THE INCOMING DATA .
AND THEN IT MATCHES ALL THE RECAIVED COMMANDS TO THE PREDEFINED DATA MOVEMENTS.
AND THEN  CONTROLS MOTOR DRIVER PINS ACCORDINGLY TO THE RECEIVED COMMANDS AND MOVE THE BOT AVCCORDING TO THAT SIGNALS.


##** PROJECT FILES **
'gesture_transmitter.ino  -> transmitter code (hand side)
'gesture_receiver.ino  ->receiver code (robot's side)

## ** COMMUNICATION MODE**
A Wireless communication is done using aNRF25L01 (2.4 Ghz).
Data transmitted : by using the X and Y values of our hand directions.

##** HOW TO RUN OUR ROBOT
(step by step  rules )
1.first upload,'gesture_transmitter.ino'  to the ** transmitter ARDUINO NAno**.
2. Then upload 'gesture_receiver.ino' to the ** receiver ARduiNO Nano**.
3.Then, connect all the mentioned components as shown i the image properly.
4.Make sure all the connections should be proper to avoid any damage of any components and also to run our hand controller properly.
5, now, give  power   to both the circuits.
6. BATTEry should be charged to  run the bot proprly.
7. NOW, Tilt your hand to co trol the motion of the robot.
8. and , finally , you will see our hand controller is moving.
9.and hence, in this way, our project is successfull.


**FUTURE IMPROVEMENTS**
.Adding of  obstacle avoiding appliance.
. Improve gesture accuracy.
. ADDING OF THE CAMERA.
. using of li-ion battery.

**AUTHOR**
KHUSHI GUPTA

** LICENSE**
This project is open -source and free for lerning purposes to all the learners.



