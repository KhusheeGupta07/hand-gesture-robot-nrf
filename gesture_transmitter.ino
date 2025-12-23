#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>

// NRF24 pins: CE, CSN
RF24 radio(9, 10);

// Address (same receiver me bhi use hogi)
const byte address[6] = "00001";

// ADXL345 object
Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(123);

// Data structure to send
struct DataPacket {
  int x;
  int y;
};

DataPacket data;

void setup() {
  Serial.begin(9600);

  // Initialize ADXL345
  if (!accel.begin()) {
    Serial.println("ADXL345 not detected");
    while (1);
  }

  accel.setRange(ADXL345_RANGE_2_G);

  // Initialize NRF24
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_LOW);
  radio.stopListening();

  Serial.println("Transmitter Ready");
}

void loop() {
  sensors_event_t event;
  accel.getEvent(&event);

  data.x = event.acceleration.x;
  data.y = event.acceleration.y;

  radio.write(&data, sizeof(data));

  Serial.print("X: ");
  Serial.print(data.x);
  Serial.print("  Y: ");
  Serial.println(data.y);

  delay(100);
}
