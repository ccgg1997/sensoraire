#include <Arduino.h>
#include <ESP8266WiFi.h> // Librería para funciones específicas del ESP8266

void setup()
{
  Serial.begin(115200); // Inicia la comunicación serie a 115200 baudios
  delay(1000);

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, LOW);

  Serial.println("===== LED ENCENDIDO =====");
  Serial.print("Chip ID: ");
  Serial.println(ESP.getChipId());
  Serial.print("CPU freq: ");
  Serial.print(ESP.getCpuFreqMHz());
  Serial.println(" MHz");
  Serial.print("RAM libre (Heap): ");
  Serial.println(ESP.getFreeHeap());
  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("===== LED APAGADO =====");
  delay(1000);
}
