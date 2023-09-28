#include <SPI.h>
#include <LoRa.h>
#include "DHT.h"

#define DHTPIN A0 
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
int hum;
float temp;
int counter = 0;
void setup() {   
  Serial.begin(9600);
  dht.begin();
  while (!Serial);
  Serial.println("LoRa Sender");
  if (!LoRa.begin(433E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}
void loop() {
  temp = dht.readTemperature();
  hum = dht.readHumidity();
  Serial.print("Sending packet: ");
  Serial.println(counter);
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.print(" || Temperature: ");
  Serial.println(temp);
  Serial.println("----------------------------------------");
  // send packet
  LoRa.beginPacket();
  LoRa.print("Humidity: ");
  LoRa.print(hum);
  LoRa.print("c");
  LoRa.print("Temp: ");
  LoRa.print(temp);
  LoRa.endPacket();
  counter++;
  delay(5000);
}