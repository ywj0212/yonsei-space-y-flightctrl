#ifndef __SPACE_Y_MODULE_WIFI__
#define __SPACE_Y_MODULE_WIFI__

#include "lib/kernel/kernel.hpp"
#include "lib/kernel/module.hpp"
#include "lib/logger.hpp"
#include <SPI.h>
#include <WiFiNINA.h>

struct __WifiModule : public Module {
  const char* ssid = "SPACE Y RP2040";
  const char* pw = "1234567890";

  WiFiServer server = WiFiServer(80);
  int status = WL_IDLE_STATUS;

  __WifiModule() : Module("Wifi") {
    interval = 10;
  }

  // static bool loggerCallback(const char*) {
  //   return true;
  // }

  virtual bool init(unsigned long) {
    // log_set_callback(loggerCallback);
    if (WiFi.status() == WL_NO_MODULE) {
      log_error("[Wifi] Communication with WiFi module failed!");
      panic();
    }
    String fv = WiFi.firmwareVersion();
    if (fv < WIFI_FIRMWARE_LATEST_VERSION)
      log_warn("[Wifi] Please upgrade the firmware");

    // attempt to connect to WiFi network:
    while(WiFi.status() != WL_CONNECTED) {
      log_info("[Wifi] Attempting to connect to Network named: %s", ssid);
      status = WiFi.begin(ssid, pw);
      delay(10000);
    }
    log_info("[Wifi] Connected!");
    server.begin();

    log_info("SSID: %s", WiFi.SSID());
    String ipStr = WiFi.localIP().toString();
    char ip[16];
    ipStr.toCharArray(ip, ipStr.length());
    log_info("IP Address: %s", ip);
    long rssi = WiFi.RSSI();
    log_info("signal strength (RSSI): %ld dBm", rssi);
    log_info("To see this page in action, open a browser to http://%s", ip);
    return true;
  }
  virtual bool loop(unsigned long) {

    return true;
  }
};
__WifiModule WifiModule;

#endif
