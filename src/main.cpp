#define HOSTNAME "esp-ota" // esp-ota.local
#define DEBUG_PORT TelnetDebug

#include <Arduino.h>
#include <WiFiSetup.h>
#include <Debuggy.h>

void setup() {
  Serial.begin(115200);
  initWiFiManager();
  // initWiFi("MySSID", "MyPassword");
  initOTA();
  initTelnetDebug();
}

void loop() {

  // Code goes here
  DEBUG_PRINT("Free heap: %i", ESP.getFreeHeap());
  DEBUG_PRINTLN("");

  // TelnetDebug.handle();
  ArduinoOTA.handle();
}
