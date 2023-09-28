#include "DHT.h"
#define DHTPIN A0
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

float hum;
float temp;
void  setup()
{
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
  Serial.println();
  temp = dht.readTemperature();
  hum = dht.readHumidity();
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.print("% || ");
  Serial.print("Temperature (Celsius): ");
  Serial.print(temp);
  delay(2000);

}