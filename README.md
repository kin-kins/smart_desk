# smart_desk
controlling  RGB ws2812b with nodemcu using __FASTLED.h__ library. 
Added **Wemo switches** to NodeMcu. Controlling lights and candle on the table with alexa.

To add a ~~variable resistance~~ (poteniometer) to the control desk to manually control the RGB strip brightness.

**Different wifi modes in the NodeMcu**

Devices that connect to WiFi network are called stations (STA). Connection to Wi-Fi is provided by an access point (AP), that acts as a hub for one or more stations. The access point on the other end is connected to a wired network. An access point is usually integrated with a router to provide access from Wi-Fi network to the internet. Each access point is recognized by a SSID (Service Set IDentifier), that essentially is the name of network you select when connecting a device (station) to the WiFi.

Each ESP8266 module can operate as a station, so we can connect it to the WiFi network. It can also operate as a soft access point (soft-AP), to establish its own WiFi network. Therefore, we can connect other stations to such modules. Third, ESP8266 is also able to operate both in station and soft access point mode at the same time. This offers the possibility of building e.g. mesh networks.

For more information visit https://nodemcu.readthedocs.io/en/master/en/modules/wifi/

