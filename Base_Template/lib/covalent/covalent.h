#ifndef COVALENT_H
#define COVALENT_H

#include <Arduino.h>
#include <EEPROM.h>
#include <ESP8266WiFi.h>
#include "../globals.h"
#include <WiFiUdp.h> // importamos librería UDP para comunicar con NTP
#include <NTPClient.h>
#include "DHT.h"
#include <Adafruit_Sensor.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

class Covalent
{

public:
    const int EEPROM_SIZE = 4096;
    String SSIDreadFromMemory;
    String passReadFromMemory;
    bool WEB_SERVER_ENABLED;
    bool NTP_SERVER_ENABLED;
    int realHour, realMinute, realSec;

    Covalent();

    void setup();
    void loop();
    
    //Utils
    void verifyCommands(String);
    void getStatus();

    // Network
    void ConnectWiFi_STA(bool, String, String);
    void renderWebServer();

    // EEPROM
    int getMemorySize();
    void clearMemoryRange(int, int);
    void clearMemory();
    boolean saveStringInMemory(int, String);
    String readStringFromMemory(int);

    // NTP
    void ntp();

    //DHT
    Weather readWeather();

private:

};

#endif