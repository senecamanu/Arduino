#include <dht.h>

// http://www.circuitbasics.com/how-to-set-up-the-dht11-humidity-sensor-on-an-arduino/

dht DHT;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(200);
}
