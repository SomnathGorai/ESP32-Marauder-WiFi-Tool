// ESP32 Marauder WiFi Hacking Tool (For Authorized Testing Only)
// Skeleton sketch to help you structure your repo.
// Fill in with your actual implementation.

#include <Arduino.h>
#include "config.h"

// Choose one display stack and configure pins in config.h
// Option A: Adafruit ST7735 + Adafruit_GFX
//   #include <Adafruit_GFX.h>
//   #include <Adafruit_ST7735.h>
//   Adafruit_ST7735 tft(TFT_CS, TFT_DC, TFT_RST);
// Option B: TFT_eSPI (configure in User_Setup.h)
//   #include <TFT_eSPI.h>
//   TFT_eSprite spr = TFT_eSprite(&tft);

void setup() {
  Serial.begin(115200);
  delay(200);

  // TODO: init display
  // tft.initR(INITR_BLACKTAB); // if Adafruit ST7735
  // tft.setRotation(1);
  // tft.fillScreen(ST77XX_BLACK);

  // TODO: WiFi init (station mode for scanning)
  // WiFi.mode(WIFI_STA);
  // WiFi.disconnect();
  // delay(100);

  // TODO: Draw title screen/menu
  // drawTitle();
}

void loop() {
  // TODO:
  // 1) Show menu (Scan, Select Target, Actions)
  // 2) On Scan: perform WiFi scan, render SSID list on TFT
  // 3) On Select: store target details
  // 4) On Actions: ONLY perform permitted tests (authorized lab)
  // 5) Add Serial debug logs
}
