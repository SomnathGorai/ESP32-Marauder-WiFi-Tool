# 🔓 ESP32 Marauder WiFi Hacking Tool (For Authorized Testing Only)

**Disclaimer:** This project is intended **only** for security research and testing on **your own networks or networks you have explicit permission to assess**. Misuse may violate laws and policies. You are responsible for ensuring legal and ethical use.

## 🚀 Overview
A portable WiFi assessment tool built with **ESP32** and a **1.8" TFT SPI LCD (128×160)**. Designed to demonstrate WiFi scanning, logging, and controlled tests on authorized networks. The TFT displays a menu/UI for quick operations.

## ✨ Features (suggested)
- WiFi scan: list SSIDs, RSSI, channel, encryption
- Target selection from the TFT menu
- (Optional) Handshake capture demonstration on authorized APs
- (Optional) Deauth test on authorized lab setups only
- Serial/Bluetooth logging (optional)

> Enable/disable features depending on your local laws and what you intend to demonstrate in a safe lab environment.

## 🧩 Hardware
- ESP32 Dev Module
- 1.8" TFT LCD (SPI, 128×160) — e.g., ST7735-based
- Jumper wires / breadboard or a custom PCB
- Power via USB or battery pack

## 🔌 Wiring (example — update to your actual pins)
```
TFT_CS   -> GPIO 5
TFT_DC   -> GPIO 2
TFT_RST  -> GPIO 4
TFT_SCLK -> GPIO 18 (SCK)
TFT_MOSI -> GPIO 23 (SDA)
TFT_LED  -> 3.3V (via resistor if needed)
GND/VCC  -> GND / 3.3V
```
> You may use different pins. Update `include/config.h` accordingly.

## 🛠️ Software Setup (Arduino IDE)
1. Install **Arduino IDE**.
2. Install **ESP32** board package (Board Manager → add ESP32 by Espressif).
3. Libraries (pick one display path):
   - **Path A (Adafruit):** `Adafruit_GFX` + `Adafruit ST7735 and ST7789`  
   - **Path B (Fast):** `TFT_eSPI` (then configure `User_Setup.h` for ST7735 & your pins)
4. Open `src/main.ino`, select your ESP32 board, choose the correct COM port, and **Upload**.

## ▶️ Usage (authorized testing only)
- Boot device → navigate menu on TFT.
- Run **scan** to list nearby APs.
- Select a **target** you own/have permission to test.
- Run only safe, permitted actions in a controlled environment.

## 📂 Repo Structure
```
ESP32-Marauder-WiFi-Tool/
├── src/
│   └── main.ino
├── include/
│   └── config.h
├── images/
│   └── (add photos here)
├── .gitignore
├── LICENSE
└── README.md
```

## ✅ Roadmap / TODO
- [ ] Implement TFT menu (list APs, select, actions)
- [ ] Add WiFi scan + details (RSSI, channel, encryption)
- [ ] Add logging to Serial (and optional Bluetooth)
- [ ] Optional: handshake capture demo (legal, authorized labs only)
- [ ] Optional: deauth test (legal, authorized labs only)
- [ ] Enclosures / battery pack notes

## 🙏 Credits
- ESP32 by Espressif
- Display libraries (Adafruit GFX/ST7735, or TFT_eSPI)

## 📜 License
This project is released under the **MIT License** (see `LICENSE`).

---

**Safety note:** Never test on networks you don’t own or explicitly control. Always follow your local laws and get written permission.
