# ⚖️ Smart Weighing System using ESP8266 and KiwisIoT

An IoT-based smart weighing system using NodeMCU ESP8266, a load cell sensor, and KiwisIoT to monitor weight measurements remotely through an online dashboard.

## 🌟 About the Project

Smart Weighing System is an IoT-based project designed to measure weight and transmit the collected data to an online platform for remote monitoring.

By integrating a weighing sensor with the NodeMCU ESP8266, the system can collect weight measurements and send the data through Wi-Fi to the KiwisIoT platform.

This project demonstrates how traditional weighing systems can be enhanced using IoT technology, allowing users to monitor weight measurements remotely through a dashboard.

## 🛠️ Hardware Components

- NodeMCU ESP8266
- Load Cell
- HX711 Load Cell Amplifier Module
- Jumper Wires
- USB Cable / Power Supply

## 🔌 Circuit Connections

| HX711 Module | NodeMCU ESP8266 |
|---|---|
| VCC | 3.3V |
| GND | GND |
| DT | D2 |
| SCK | D1 |

| Load Cell | HX711 Module |
|---|---|
| Load Cell Wires | Corresponding HX711 terminals |

The load cell must be connected to the HX711 amplifier module according to its wire configuration.

## 🚀 Features

- Weight measurement using a load cell
- Digital weight data processing using HX711
- Wi-Fi connectivity
- Remote weight monitoring through KiwisIoT
- Online dashboard visualization
- Real-time data transmission
- IoT-based smart weighing functionality

## 📊 KiwisIoT Dashboard

The NodeMCU ESP8266 sends the measured weight data to the KiwisIoT platform through Wi-Fi.

The dashboard can be configured with widgets to display weight measurements in real time.

Users can monitor the collected weight data remotely without needing to interact directly with the weighing hardware.

## 💻 Software Used

- Arduino IDE
- ESP8266 Board Package
- HX711 Library
- KiwisIoT Arduino Library

## ⚙️ Working Principle

The load cell detects the applied weight and produces a small electrical signal. This signal is processed by the HX711 amplifier module, which converts the analog signal into digital data that the NodeMCU ESP8266 can read.

The ESP8266 processes the weight measurement using the programmed calibration settings. After obtaining the weight value, the controller connects to Wi-Fi and transmits the data to the KiwisIoT platform.

The KiwisIoT dashboard displays the transmitted weight information, allowing users to monitor measurements remotely.

## 📖 Project Tutorial

Explore the complete project tutorial on Hackster.io:

🔗 https://www.hackster.io/kirusokumar/smart-weighing-system-using-esp8266-and-kiwisiot-1b3769

## 🌐 Explore KiwisIoT

If you're interested in developing IoT projects and connecting sensors and hardware to online dashboards, you can explore the KiwisIoT platform and its resources.

- 🌍 **KiwisIoT Platform:** https://www.kiwisiot.in/
- 📚 **Arduino Library:** https://github.com/Kiwistron/KiwisIoT
- 💡 **Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

## 👨‍💻 About the Author

I enjoy building IoT projects, experimenting with sensors and microcontrollers, and exploring how connected hardware can be used to create practical real-world applications.

I share my projects to help others learn, experiment, and develop their own IoT solutions. Feel free to explore the project resources if you're also interested in IoT development.

---

*Built with curiosity, sensors, and IoT.*