# ESP OTA Arduino boilerplate

Boilerplate Platform.io project that includes:

- WiFiManager
- ArduinoOTA
- RemoteDebug

#define HOSTNAME "esp-ota"

#define DEBUG_PORT TelnetDebug

while true; do nc -w 5 esp-ota.local 23; echo "\nReconnecting..."; done
